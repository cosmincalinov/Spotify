#pragma once
#include <iostream>
#include <vector>
#include <memory>
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
        while (1) {
        mainMenu:
            int menuInput;
            printMainMenu();
            std::cin >> menuInput;
            switch (menuInput) {
            case 1:
                system("cls");
                for (Song s : defSongs) std::cout << s;
                printSongMenu();
                int songMenuInput;
                std::cin >> songMenuInput;
                switch (songMenuInput) {
                case 1:
                    std::cout << "Choose the song's number: ";
                    int songNumber;
                    std::cin >> songNumber;
                    defSongs[songNumber].play();
                    break;
                case 2:
                    system("cls");
                    std::cout << "Choose the song's number: ";
                    int likeNumber;
                    std::cin >> likeNumber;
                    LikedSongs::getInstance() += defSongs[likeNumber];
                    break;
                case 3:
                    system("cls");
                    std::cout << "Choose the song's number: ";
                    int queueNumber;
                    std::cin >> queueNumber;
                    MyQueue::getInstance() += &defSongs[queueNumber];
                    break;
                case 4:
                    system("cls");
                    goto mainMenu;
                    break;
                default:
                    throw WrongInput();
                    break;
                }
                break;
            case 2:
                system("cls");
                for (Podcast p : defPodcasts) std::cout << p;
                printPodcastMenu();
                int podcastMenuInput;
                std::cin >> podcastMenuInput;
                switch (podcastMenuInput) {
                case 1:
                    std::cout << "Choose the podcast's number: ";
                    int podcastNumber;
                    std::cin >> podcastNumber;
                    defPodcasts[podcastNumber].play();
                    system("cls");
                    break;
                case 2:
                    std::cout << "Choose the podcast's number: ";
                    int queuepNumber;
                    std::cin >> queuepNumber;
                    MyQueue::getInstance() += &defPodcasts[queuepNumber];
                    break;
                case 3:
                    system("cls");
                    goto mainMenu;
                    break;
                default:
                    throw WrongInput();
                    break;
                }
                break;
            case 3:
                system("cls");
                for (Playlist play : defPlaylists) std::cout << play;
                printPlaylistMenu();
                int playlistMenuInput;
                std::cin >> playlistMenuInput;
                switch (playlistMenuInput) {
                case 1:
                    std::cout << "Choose the playlist's number: ";
                    int playlistNumber;
                    std::cin >> playlistNumber;

                    for (Song so : defSongs) std::cout << so;
                    std::cout << "Choose the song's number: ";
                    int addNumber;
                    std::cin >> addNumber;
                    defPlaylists[playlistNumber] += defSongs[addNumber];
                    system("cls");
                    break;
                case 2:
                    std::cout << "Choose the playlist's number: ";
                    int playNumber;
                    std::cin >> playNumber;
                    defPlaylists[playNumber].play();
                    system("cls");
                    break;
                case 3:
                    goto mainMenu;
                    break;
                default:
                    throw WrongInput();
                    break;
                }
                break;
            case 4:
                LikedSongs::getInstance().play();
                system("cls");
                break;
            case 5:
                this->createSong();
                system("cls");
                break;
            case 6:
                this->createPodcast();
                system("cls");
                break;
            case 7:
                this->createPlaylist();
                system("cls");
                break;
            case 8:
                MyQueue::getInstance().playQueue();
                std::cin.get();
                system("cls");
                break;
            case 9:
                system("cls");
                std::cout << "Bye bye!" << std::endl;
                exit(0);
                break;

            default:
                throw WrongInput();
                break;
            }
        }
    }

    void createSong(){
        std::string customName;
        std::cout << "Enter the song's name: ";
        std::cin >> customName;
        std::unique_ptr<Song> createdSong = std::make_unique<Song>(customName, "Me");
        defSongs.push_back(*createdSong);
    }

    void createPodcast(){
        std::string customName;
        std::cout << "Enter the podcast's name: ";
        std::cin >> customName;
        std::unique_ptr<Podcast> createdPodcast = std::make_unique<Podcast>(customName, "Me");
        defPodcasts.push_back(*createdPodcast);
    }

    void createPlaylist() {
        std::string customName;
        std::cout << "Enter the playlist's name: ";
        std::cin >> customName;
        std::unique_ptr<Playlist> createdPlaylist = std::make_unique<Playlist>(customName);
        defPlaylists.push_back(*createdPlaylist);
    }

    /*friend std::ostream& operator<<(std::ostream& out, const std::vector<Song>& src);
    friend std::ostream& operator<<(std::ostream& out, const std::vector<Podcast>& src);*/
};

