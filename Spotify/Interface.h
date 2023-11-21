#pragma once
#include <iostream>
#include <vector>
#include "Media.h"
#include "Song.h"
#include "Podcast.h"
#include "Playlist.h"
#include "LikedSongs.h"
#include "MyQueue.h"
#include "WrongInput.h"

class Interface{
private:
    std::vector<Song> defSongs{ Song("Nothing Else Matters", "Metallica"), Song("Africa","Toto"),
    Song("Smells like Teen Spirit", "Nirvana"), Song("Bohemian Rhapsody","Queen"), 
    Song("Purple Rain","Prince")};

    std::vector<Podcast> defPodcasts{ Podcast("Major Jobs", "Teland La"),
    Podcast("Joe Rogan Experience","Joe Rogan"), Podcast("Huberman Lab","Andrew Huberman")};

    std::vector<Playlist> defPlaylists{ Playlist("Chill beats"), Playlist("Heavy metal")};

	Interface(){}
	~Interface(){}
public:
	static Interface& getInstance() {
		static Interface* s_instance = new Interface();
		return *s_instance;
	}
    void displayGreetingMessage() {
        std::cout << R"(
                 ((((((((((((((((((                  
             ((((((((((((((((((((((((((((((            
          ((((((((((((((((((((((((((((((((((((         
       ((((((((((((((((((((((((((((((((((((((((((      
     ((((((((((((((((((((((((((((((((((((((((((((((    
    ((((((((((((((((((((((((((((((((((((((((((((((((   
   (((((((                              (((((((((((((  
  (((((((                                     (((((((( 
 (((((((((((((((((((((((((((((((((((((*         (((((((
 (((((((((((((((/             ((((((((((((((   ((((((((                       Welcome to Spotify!
(((((((((((                            ((((((((((((((((
 (((((((((((  .(((((((((((((((((,           (((((((((((
 ((((((((((((((((((((((((((((((((((((((     (((((((((((
 ((((((((((((                     (((((((((((((((((((((
  ((((((((((     (((((((((((((          (((((((((((((( 
   ((((((((((((((((((((((((((((((((((    ((((((((((((  
     ((((((((((((((((((((((((((((((((((((((((((((((    
      ((((((((((((((((((((((((((((((((((((((((((((     
         ((((((((((((((((((((((((((((((((((((((        
            ((((((((((((((((((((((((((((((((           
                ((((((((((((((((((((((((               
                       ((((((((
)";
        std::cout << std::endl;
    }

    void printMainMenu() {
        std::cout << "1. View songs." << std::endl;
        std::cout << "2. View podcasts." << std::endl;
        std::cout << "3. View playlists." << std::endl;
        std::cout << "4. Shuffle Liked Songs." << std::endl;
        std::cout << "5. Create a song." << std::endl;
        std::cout << "6. Create a podcast." << std::endl;
        std::cout << "7. Create a playlist." << std::endl;
        std::cout << "8. Play Queue." << std::endl;
        std::cout << "9. Exit." << std::endl;
    }

    void printSongMenu() {
        std::cout << "1. Play a song." << std::endl;
        std::cout << "2. Add to Liked Songs." << std::endl;
        std::cout << "3. Add to Queue." << std::endl;
        std::cout << "4. Exit to main menu." << std::endl;
    }

    void printPodcastMenu() {
        std::cout << "1. Play a podcast." << std::endl;
        std::cout << "2. Add to Queue." << std::endl;
        std::cout << "3. Exit to main menu." << std::endl;
    }

    void printPlaylistMenu() {
        std::cout << "1. Add a song." << std::endl;
        std::cout << "2. Play." << std::endl;
        std::cout << "3. Exit to main menu." << std::endl;
    }

    void run() {
        int menuInput;
        printMainMenu();
        std::cin >> menuInput;
        switch (menuInput) {
        case 1:
            for (Song s : defSongs) std::cout << s;
            printSongMenu();
            int songMenuInput;
            std::cin >> songMenuInput;
            switch (songMenuInput) {
            case 1:
                break;
            case 2:
                break;
            case 3:
                break;
            default:
                throw WrongInput();
                break;
            }
            break;
        case 2:
            for (Podcast p : defPodcasts) std::cout << p;
            printPodcastMenu();
            int podcastMenuInput;
            std::cin >> podcastMenuInput;
            switch (podcastMenuInput) {
            case 1:
                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                break;
            default:
                throw WrongInput();
                break;
            }
            break;
        case 3:
            printPlaylistMenu();
            int playlistMenuInput;
            std::cin >> playlistMenuInput;
            switch (playlistMenuInput) {
            case 1:
                break;
            case 2:
                break;
            case 3:
                break;
            default:
                throw WrongInput();
                break;
            }
            break;
        case 4:
            LikedSongs::getInstance().play();
            break;
        case 5:
            this->createSong();
            break;
        case 6:
            this->createPodcast();
            break;
        case 7:
            this->createPlaylist();
            break;
        case 8:
            MyQueue::getInstance().play();
            break;
        case 9:
            std::cout << "Bye bye!" << std::endl;
            exit(0);
            break;

        default:
            throw WrongInput();
            break;
        }
    }

    void createSong(){
        std::string customName;
        int customDuration;
        std::cin >> customName;
        std::cin >> customDuration;
        Song createdSong(customName, "Me");
        defSongs.push_back(createdSong);
    }

    void createPodcast(){
        std::string customName;
        int customDuration;
        std::cin >> customName;
        std::cin >> customDuration;
        Podcast createdPodcast(customName, "Me");
        defPodcasts.push_back(createdPodcast);
    }

    void createPlaylist() {
        std::string customName;
        std::cin >> customName;
        Playlist createdPlaylist(customName);
        defPlaylists.push_back(createdPlaylist);
    }

    /*friend std::ostream& operator<<(std::ostream& out, const std::vector<Song>& src);
    friend std::ostream& operator<<(std::ostream& out, const std::vector<Podcast>& src);*/
};

