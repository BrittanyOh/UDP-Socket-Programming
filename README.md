# Network and Web Programming
## UDP Socket Programming Project

<br>• All development must be done with Github. Specifically, there must be at least one commit
for every ten (or fewer) lines of code (excluding empty lines and lines with only comment).
With each commit, the log must explain the purpose of the added/changed code. The Github
repo must remain private before the deadline and public after the deadline.
<br>• Submit a single plain text file named repo.txt at
http://hucs.dynu.net/lij/courses/submit_hw.html
The text file should include only the URL of your Github repo.
<br>• Grading
All or significant portion of the points will be deducted at the discretion of the instructor if any
of the above requirements are not met. Plagiarism will always lead to zero credit for this
assignment and potentially for the whole course. No credits will be given if the repo is
modified after the deadline. Other than that, the points will be given based on the correctness.

<p> In this project, you will develop two network programs in the C/C++ one for client and one for
server. You may base your program on the echo examples,
<p> The client program reads input from user and performs the following actions repeatedly until
directed to exit:
<br>• If the user enters 's', it will ask user to enter a string. It then sends " xxx\n" to the server (where
"xxx" is the string entered by the user, which could include any character except "\n"), and
receives a message from the server and display the message on the screen.
<br>• If the user enters 'q', it will exit.
<br>• If the user enters anything else, it will ignore.
<br>• If it receives a message from the server at any time, it will print the received message in a
new line.
<br>• It will automatically send "\n" to the server every 5 seconds.
<p>The server program performs the following actions:
<br>• Whenever a message that is not "\n" is received from a client, the server sends the same
message back to all known active clients (i.e. the clients that the server has received messages
from within the past 15 seconds), including the one the message is received from.

<p>Clients should be invoked by the following command:
<i> &lt;client> &lt;server IP> &lt;server port></i>
<p>Where <i>&lt;client></i> is the name of the client executable file name, <i>&lt;server IP></i> is the IP address
  of the server, <i>&lt;server port></i> is the UDP port of the server.
<p>Note that multiple clients could be running at the same time, communicating with the same server.
The server should be invoked by the following command:
  <i>&lt;server> &lt;port></i>
<p>Where <i>&lt;server></i> is the name of the server executable file name, <i>&lt;port></i> is the port the server
listens to.
