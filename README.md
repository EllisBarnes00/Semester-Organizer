# Semester Organizer
The purpose of this project was for making my semester folders OneDrive my college has provided more uniform to one another and to automate any future additions to courses. While doing this was mainly done to simplify my life from having to do numerous right-clicks, organization, etc., it also served as a chance to practice some more C. The program clearly is very overthought by nature, could have been done in another language like Python or even Shell Scripts, I honestly thought it would be worth my time to practice it in C.

## Features
![folder_example](https://github.com/EllisBarnes00/Semester-Organizer/blob/main/img/Screenshot%202022-01-21%20204724.png)
- Can create folders in neat orders
- Has reserved folders for Assignments, Documents, and Downloads
- Can be for various different semesters, years, and classes

## TODO
- [ ] Add the ability to manage the folders being added
- [ ] Add the ability to change the year
- [ ] Different folder structures for things that have different requirements (ex. Science does not have the same structure as History or English)
- [ ] Make it cross-platform, currently only runs on Linux, but needs to run on Windows

# How to Compile and Run
Currently this only runs on Linux, compiling is done using make and the GCC compiler. ```make``` or you could alternatively do ```gcc main.c class.c -Wall -Wextra -pedantic -std=c11 -o SemesterOrganizer```. Running is as you normally do, in a shell, just ```./SemesterOrganizer``` with no arguments. For the desired outcome of my folders, I put the executable in the same directory as I want the folders to be in. 
