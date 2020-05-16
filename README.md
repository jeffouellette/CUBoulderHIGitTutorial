# CUBoulderHIGitTutorial
Git tutorial for members of the CU Boulder HI group.

In this tutorial we will talk about what git is, why we need to use it, and how it can help us keep our code organized.
You can think of git as similar to a "cloud storage" service like Google Drive, Microsoft Onedrive, etc. But git is NOT a way to backup your data -- instead its more like a "metadata" service for your code. It allows us to control, version, and share what code we are running.

This tutorial will focus on getting people familiar with basic git commands, including cloning, committing, and pushing. We will practice by working with this dummy repository. Theres a lot of information out there to learn about git, and **Google is your friend**. For a concrete source, you can look through the free book here: https://git-scm.com/book/en/v2.

I strongly recommend everyone create a GitHub account so that you can create your own repositories and start versioning your own code! In order to push to the repository in this tutorial I believe it will be required.

## Cloning a repository

If you're looking at this page... well you've already started to learn git. This documentation is part of the git repository itself! You can think of a git repository as a container for a project. If you look above you can see a bunch of files including source code ("src"), library ("lib"), include, and binary ("bin") folders. These contain the C++ code and compiled code that we will need to build a sample coding project. In this case, we will be building a generic utilities library where you can store useful functions.

Right now we need to get the git repository onto your local machine so you can start working with it. This means we have to "clone" the repository. We can do this on the command line, so open your favorite terminal and type in

````git clone https://github.com/jeffouellette/CUBoulderHIGitTutorial.git````


