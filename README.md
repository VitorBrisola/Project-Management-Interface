# Project Management Interface

This project is intended for the building of an terminal interface application for project management. The project will be build using C and Shell Script.


## Objective

This project has the intention of facilitate the creation of project task and the straightening
the connection between the tasks and the real project.


## Design

The application first intent  is the management of tasks. 
Each task can have 3 states:

* __To-do__ : _Tasks are still to be started_.
* __In Progress__: _Tasks are still being worked on_.
* __Done__: _Tasks that are already completed_.

>The idea is to build an terminal interface that makes possible to manage tasks and make some task as commands by automatizing them.

## Version 1.0

The main idea is to write down the app name on terminal and create an script interface:

- - -
    >> Project-Manager App Started!
    >> ............................
    >> create project 'project_name_1'
    'project_name' created.
    >> use 'project_name_1'
    >> create task 'task_name_1'
    'task_name_1' initiated as to-do in 'project_name_1'
    >> show tasks 
    > To-Do
    'Task_name_1'
    
    > In Progress

    > Done

    >> start task 'Task_name_1'
    'task_name_1' is in progress
    >> complete 'task_name_1'
    'task_name_1' is done!
- - -

> Note: This version will mostly be build in C, where future versions will be builded using C and Shell script.

### Commands
The following list of commands will be present in the first version of the app:

- - -
- __create *project*|*task 'label'*__
    > The labeled project or task will be created and the task will be set as To-Do.
- __start *project*|*task 'label'*__
    > The labeled project or app will be started. For the project it means that any give task commands 
- __complete *project*|*task 'label'*__
    > This option closes the project or the task, placing the last one as Done.
- __delete *project*|*task 'label'*__
    > This command erase the project from the system or the task from the project(they are temporarily placed under the trash folder and can be recovered)
- - -
