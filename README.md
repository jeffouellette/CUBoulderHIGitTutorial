# CUBoulderHIGitTutorial
Git tutorial for members of the CU Boulder HI group.

In this tutorial we will talk about what git is, why we need to use it, and how it can help us keep our code organized.
You can think of git as similar to a "cloud storage" service like Google Drive, Microsoft Onedrive, etc. But git is NOT a way to backup your data -- instead its more like a "metadata" service for your code. It allows us to control, version, and share what code we are running. Think of it this way: how often have you had code written and working, only to make some set of changes 

This tutorial will focus on getting people familiar with basic git commands, including cloning, committing, and pushing. We will practice by working with this dummy repository. Theres a lot of information out there to learn about git, and **Google is your friend**. For a concrete source, you can look through the free book here: https://git-scm.com/book/en/v2.

I strongly recommend everyone create a GitHub account so that you can create your own repositories and start versioning your own code! In order to push to this repository I believe it will be required. It is **definitely** required in order to create your own repository (as we will do later in the tutorial).

## Cloning a repository

If you're looking at this page... well you've already started to learn git, as this documentation is part of the git repository itself! You can think of a git repository as a container for a project. If you look above you can see a bunch of files including source code ("src"), library ("lib"), include, and binary ("bin") folders. These contain the C++ code and compiled code that we will need to build an example coding project. In this case, we will be building a generic utilities library where you can store useful functions. It is a good idea to have some sort of code base full of code that you will use repeatedly.

Right now you need to get this barebones git repository onto your local machine so you can start working with it. This means we have to "clone" the repository. We can do this on the command line, so open your favorite terminal and type in

````git clone https://github.com/jeffouellette/CUBoulderHIGitTutorial.git````

This will download the repository to your machine. You can see a new directory called "CUBoulderHIGitTutorial" -- cd into this directory.
In order to run the code in this directory, you will need to execute the command

````make all````

This will compile the functions in MyUtilities.cxx and Test.cxx into an executable under "bin/test". This is the main code we will manage in our repostiory. But first, we all need to setup a new repository where we can start tracking our code. To do this, first we need to initialize it. Login to your github.com account (or which git service you prefer) and create a new repository. You can give it any name you like, such as RootUtilities or MyFirstRepository. If you have the option to make it public or private, it is better to make this one public as you will have a limited number of private repositories you can create.

Now we need to clone your new (empty) repository to your computer so that you can start adding to it. You can find an http address for cloning on your repository page. Once you've done this, you will see another directory with your new repository inside of it. I recommend moving up one directory so that if you run an "ls" command you will see both "CUBoulderHIGitTutorial" and "MyFirstRepository" (or whatever name you gave it).

## Adding to a repository

First let's setup a basic directory structure for your new repository, adding these to our git. We can do this very quickly with the following command:

````mkdir bin lib include src````

Now if you run "ls", you will see all of these folders. However, we only want git to keep track some of these directories. This is because in general it is not a good idea to store compiled code in a git repository, since compiled code will look differently to people with different computers. Therefore the "bin" and "lib" folders should not be tracked, whereas the directories where we will put source code should be added.

To make git track these files, execute the "git add" command:

````git add src include````

Now we can check that git is tracking these directories. Run a ````git status```` to ask git what has been updated in the repository. You should see both a list of files in green which have been added to git, and a list of files in red which are not being tracked by git.

## Committing your changes

The last thing we need to do is commit our changes. You can think of committing as creating a tag for our code, which git should keep in its record. In order to commit, execute

````git commit -m "My first commit!"````

Every commit requires a descriptive message be provided. In this example "My first commit!" is an example commit message. If you do not provide one git will open a text editor and force you to enter one!

This has created a local commit of your repository. To reflect changes in the "master", we need to "push"; this is done with the command 

````git push````



