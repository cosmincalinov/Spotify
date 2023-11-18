#pragma once
#include <iostream>

class Interface{
private:
	Interface(){}
	~Interface(){}
public:
	static Interface& getInstance() {
		static Interface* s_instance = new Interface();
		return *s_instance;
	}
    void run() {
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
        std::cout << "1. Play a song." << std::endl;
        std::cout << "2. Add to Queue." << std::endl;
        std::cout << "3. Exit to main menu." << std::endl;
    }

    void printPlaylistMenu() {
        std::cout << "1. Add a song." << std::endl;
        std::cout << "2. Play." << std::endl;
        std::cout << "3. Shuffle." << std::endl;
        std::cout << "4. Exit to main menu." << std::endl;
    }

    void run() {
        char menuInput;
        printMainMenu();
        std::cin >> menuInput;
        switch (menuInput) {
        case 1:
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
                break;
            }
            break;
        case 2:
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
            case 4:
                break;
            default:
                break;
            }
            break;
        case 4:

            break;
        case 5:

            break;
        case 6:

            break;
        case 7:

            break;
        case 8:

            break;
        case 9:

            break;

        default:

            break;
        }
    }
};

