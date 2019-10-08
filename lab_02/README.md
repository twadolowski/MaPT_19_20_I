# lab 02: Introduction to Linux
Author: Lucjan Janowski, Michał Grega

## Introduction

We will use the system **Linux**. Therefore, when you start your computer, select Linux / Ubuntu.

Please do all the exercises, during lecture or at home. You can use web-terminal emulator or native/virtual installation (native is recommended).

Upon startup, the system will start in graphical mode. Please launch your web browser and file browser.

## Console

Find and launch the text console (console, terminal). This is the basic way to interact with the system.
See how the `ls`, `cd`, `mkdir`, `rm`, `whoami`, `pwd` commands work. The behavior of individual commands can be modified using the command switches (parameters). See what the `ls` command differs from `ls -al`.

# 1. Excercise

1. Check the username on which you are logged in.
2. Find his home directory.
   - Check that access rights allow other users to read its content.
   - If they allow, change them so that other users have no right to read its content. Permission rights could be change by `chmod` command. The basic description of the command can be found here: [chmod] (http://www.thegeekstuff.com/2010/06/chmod-command-examples)
   - Take a look at the `chmod` numerical mode.
3. In the home directory, create a directory named `directory` (`mkdir`). Create a text file containing your name and / or name (eg `vim file.txt`).
>> Using the `vim` editor is not easy the first time. However, it is an editor available on almost every unix system, it allows for very efficient work, so it is worth to know him. Here you can find the short [tutorial] (http://www.openvim.com/). ** Please take a moment to read this tutorial. ** Just for this moment, it is enough to know that this editor has two modes: command mode and insert mode. Enter the insert mode by typing `i`. In the insert mode, you can enter text. Entering the command mode is done by pressing the `Esc` key. In command mode we can issue commands and move the cursor. The key command are:
>> - `: wq` allows you to save and close vim.
>> - `: q!` allows you to close vim without saving.
>> Other useful, also working in `man`,` more` or `less` is the ability to search. In command mode, type `/text`. Pressing `n` goes to the next occurrence of the search string, pressing `p` returns the previous occurrence of the search string.

4. In the text console, display created text file (`cat` command on the screen) and then change its permissions to `765`. What do these access rights mean?

5. Please remove file write permissions for each user. What happens when we want change file? Although we are not able to make changes, can we change the file permissions?

## Help `man`

Most complete documentation of commands, libraries and instructions is available in the so-called ,,manuals''. These are the help files available from the console using the `man` statement. Of course, the easiest way to find information about a given feature is the internet, although it is good to know that we can find ourselves in a situation where we will not have access to it (even without the graphical interface and browser).

# 2. Exercise

Using help, find out what the `ls` statement should look like to display only files sorted by file size.

## File system

In Linux everything is a file. Both directories and external disks are treated as files. The files have a tree hierarchy rooted in the `/` directory. This means that searching the `/` directory and all its subdirectories searches everything on your computer, including, for example, the connected external drive. More details on where the drives in the directory tree are located can be found here: [mount points, partitions and their layout] (http://ubuntu.pl/forum/viewtopic.php?t=134558)

Key points in the file system:
- `/home/student/` is the `home` user's home directory where he/she should hold all his/her personal files. The shortcut to the home directory is `~`, so the `cd /home/student/` and `cd ~` calls are identical to the `student` directory.
- `/media/student/` here attaches devices as directories.
- `/etc/` contains configuration files.

# 3. Exerecise

1. In the home directory, create a directory named `A`.
2. In the `A` directory create the `a` directory.
3. Being in the `~` directory, create an empty file named `data.txt` in the `~/A/a/` directory.
4. Go to the `~/A/a/` directory and use the `echo` command to enter a `word.txt` file, text containing any word. Then use the `echo` command to append to the same file another sentence that does not contain the previous text.
5. Go to the `~/A/` directory and write the contents of `data.txt` in the console. Then run any graphics editor and check the contents of the same file.
6. Open two consoles. In one edit file using the `vim` editor. In the second, write the contents of this file with `cat`. Please make changes to the file and see what we see in the second console.

## Streams

In Linux, the command output can be passed to another command using the `|` operator. For example, calling `ls -l` will print the files in that directory, adding the `|` we can redirect its output to other command. The common command for output is `grep` which allows you to perform regular expressions on lines of text. Hence `ls -l | grep 'ala'` will print all the files contained in the description or name of the string `ala`. Another way to pass the result is to save them to a file by overwriting or creating a file `ls -l> result_ls.txt` or appending to an existing file `ls -l >> result_ls.txt`. Adding before the `>` or `>>` character can give you a specific stream. `0` is the keyboard, `1` is the standard output, `2` is the error. More details can be found here: [Chapter 20. I / O Redirection.] (Http://tldp.org/LDP/abs/html/io-redirection.html)
