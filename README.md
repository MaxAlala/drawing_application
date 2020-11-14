[documentation](https://gitlab.com/LIRS_Projects/KUKA-Recognition-Capture/-/wikis/home)<br>

How to use:<br>
* StartCam start an available camera    <br>
* Using trackbars u can change a quality of a Canny algorithm output.<br>
* Push TakePortrait and then group_points.txt file will be created. It contains 1) group number; 2) point number in the group;3) X and Y coordinates describing point<br>
* if u satisfied with result you push createServer. It will start TCP server which will wait for a connection on port 59152.
Protocol description:<br>
^ at the beginning server waits a message from client<br>
^ after receiving 1 message it sends coordinate & then it waits for a reply<br>
^ if a group of points was changed then server sends message with bigger Z to avoid touching of marker the table  when moving to another point group.<br>
^ previous 2 steps repeat until all points are gone<br>


