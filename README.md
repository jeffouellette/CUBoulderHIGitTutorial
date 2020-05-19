# CU Boulder HI Git Tutorial
This is a git tutorial for members of the CU Boulder HI group, or anyone unlucky enough to stumble upon this GitHub repository without already knowing how to use git. In this tutorial we will talk about why it is important for us to use git and try to get people started with their own git repositories.

You can think of git as similar to a "cloud storage" service like Google Drive, Microsoft Onedrive, etc. But git is NOT a way to backup your data -- instead its more like a "metadata" service for your code. It allows us to control, version, and share what code we are running. Think of it this way: how often have you had code written and working, only to make some set of changes, and it suddenly breaks? Git provides a means to keep your "developing code" separate from the code which you already know is stable and working.

Lots of large, distributed computing projects use git to manage code distribution and development, including all of the experiments we work with! For example the sPHENIX core software is [on GitHub](https://github.com/sPHENIX-Collaboration), whereas the ATLAS software is visible to collaboration members on a CERN-propriatary [GitLab service](https://gitlab.cern.ch/atlas/athena).

This tutorial will focus on getting people familiar with basic git commands, including cloning, committing, and pushing. We will be learning through example by creating our own practice repositories. Theres a lot of information out there to learn about git, and **Google is your friend**. For a concrete source, you can look through the free book here: https://git-scm.com/book/en/v2. We will simply focus on the basics here.

I strongly recommend everyone create a GitHub account so that you can create your own repositories and start versioning your own code! In order to push to this repository I believe it will be required. However it is **definitely** required in order to create your own repository (as we will do later in the tutorial).

## Cloning a repository

If you're looking at this page... well you're already looking at a repository! You can think of a git repository as a container for a project. At the top of the pge, you can see a bunch of files including source code ("src") and include folders. These contain the C++ code that we will need to build an example coding project. In this case, the files describe a generic utilities library where you can store useful functions. It is a good idea to have some sort of code base full of code that you will use repeatedly.

The first thing to do is create a local copy of this git repository on your local machine so you can start working with it. This means you have to "clone" the repository. We can do this on the command line, so open your terminal and type in

```git clone https://github.com/jeffouellette/CUBoulderHIGitTutorial.git```

This will download the repository to your machine. Once it is done (it should only take a second) you should see a new directory called "CUBoulderHIGitTutorial". Now cd into this directory. Inside you will see the "src" and "include" directories.

### Optional: compiling the repository
Compiling and running the code is optional. But if you intend to make your own utilities library, this can serve as a guide for how to compile and use it. To compile the code, run

```make all```

This will compile the functions in MyUtilities.cxx and Test.cxx into an executable under "bin/test".
* MyUtilities.cxx is supposed to contain a set of helper functions, although right now it only has one which draws a label on a plot.
* Test.cxx has one function "main" which means it is intended to be an executable, i.e. it can be run. It creates a canvas and then uses the MakeLabel function to label each corner of the plot.

## Creating a repository
Now you are going to setup your own repository to practice some basic git commands with. But first you need to initialize one. Login to your github.com account (or whichever git service you prefer) and create a new repository. You can give it any name you like, such as RootUtilities or MyFirstRepository. If you have the option to make it public or private, it is better to make this one public as you will have a limited number of private repositories you can create.

Now clone your new (empty) repository to your computer so that you can start adding to it. You can find an http address for cloning on your repository page. Once you've done this, you will see another directory with your new repository inside of it. I recommend moving up one directory first so that if you run an "ls" command you will see both "CUBoulderHIGitTutorial" and "MyFirstRepository" (or whatever name you gave it).

## Adding to a repository

First let's setup a basic directory structure for your new repository, adding these to our git. We can do this very quickly with the following command:

```mkdir bin lib include src```

Now if you run "ls", you will see all of these folders. However, we only want git to keep track some of these directories. This is because in general it is not a good idea to store compiled code in a git repository, since compiled code will look differently to people with different computers, more or less. Therefore the "bin" and "lib" folders should not be tracked, whereas the directories where we will put source code should be.

To make git track these files, execute the "git add" command:

```git add src include```

Now we can check that git is tracking these directories. Run a ```git status``` to ask git what has been updated in the repository. You should see both a list of files in green which have been added to git, and a list of files in red which are not being tracked by git. In general, running a ```git status``` is useful to double-check what changes you are committing to your repository.

## Committing your changes

The last thing we need to do is commit our changes. You can think of committing as creating a tag for our code, which git should keep in its record. In order to commit, execute

```git commit -m "My first commit!"```

#### Note
If you have not used git before, you may receive a message where git asks "who you are" essentially. This means you need to edit your git configuration to store a name and email:
```
git config --global user.name "Jeff Ouellette"
git config --global user.email "jeffrey.ouellette@colorado.edu"
```
Of course, replace my name with your own! Once you've done this try committing again.

Every commit requires a descriptive message be provided. In this example "My first commit!" is the commit message. If you do not provide one git will open vim and force you to enter one!

This has created a local "version" of your repository. To reflect changes on the webpage, we need to "push"; this is done with the command 

```git push```

Now if you go back to your git repository in your web browser, you should see all of these new folders we created.

## Adding new material to your repository

Ok, so now our project is set up and we have it linked to git. But we still don't have any code! Lets add a basic C++ file with some utilities function. To avoid writing our own code, lets just copy the code from the original repository. You can do this with the following command:

```cp -r CUBoulderHIGitTutorial/* MyFirstRepository```

Now we have to tell git to start tracking these new files. Try coming up with the right command on your own! If you need help, a ```git status``` command might be useful to tell you which files are not yet being tracked.

Once you've done that, we still need to commit changes to the repository and push our changes. This can be done with an appropriate commit and push command.
**Note that there is something missing from these commands -- I will leave it to you to figure out what is missing!**

```
git commit
git push
```

## A git workflow

There are many commands in git, but for everyday, personal usage, "add", "commit", and "push" will get you very far. In a more realistic, collaborative project a set of other commands are useful, such as "pull", "fetch", "checkout", and more. A diagram illustrating what these commands do to your local code is shown below.

![Git commands](https://tapaswenipathak.files.wordpress.com/2016/02/xwvzt.png)

## Ignoring files

You can tell git that certain files are meant to be ignored, for example it is not recommended to store executables on git. You can do this by listing the file names in a file called ".gitignore". Check out the .gitignore for the CUBoulderHIGitTutorial repository for an example.
