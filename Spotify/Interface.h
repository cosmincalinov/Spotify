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
    }

    void printPodcastMenu() {
        std::cout << "1. Play a song." << std::endl;
        std::cout << "2. Add to Queue." << std::endl;
    }

    void playlistMenu() {
        std::cout << "1. Add a song." << std::endl;
        std::cout << "2. Play." << std::endl;
        std::cout << "3. Shuffle." << std::endl;
    }
};

