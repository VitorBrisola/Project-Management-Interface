# Project Management Interface

This project is intended for the building of an terminal interface application for project management. The project will be build using C and Shell Script.


## Objective

This project has the intention of facilitate the creation of project task and the straightening
the connection between the tasks and the real project.


## Design

The application first intent  is the management of tasks. 
Each task can have 3 states:

    * To-do : Tasks are still to be started.
    * In Progress: Tasks are still being worked on.
    * Done: Tasks that are already completed.

>The idea is to build an terminal interface that makes possible to manage tasks and make some task as commands by automatizing them.

## Initial version

The main idea is to write down the app name on terminal and create an script interface:

    >> Project-Manager App Started!
    >> ............................
    >> create-project 'project_name_1'
    'project_name' created.
    >> use 'project_name_1'
    >> create-task 'task_name_1'
    'task_name_1' initiated as to-do in 'project_name_1'
    >> 