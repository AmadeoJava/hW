import pyautogui
from time import sleep

l=["ISSNA","ecnegA","elanoitan","iuO","ruojnoB","ecnarF","etteugab","teluossac"]

sleep(5)


for i in l:
    trans = i.translate(str.maketrans('azqwAZQW&é"\'(-è_çà)^$Mù,?;:!§1234567890','qwazQWAZ1234567890-[]:\'mM,./?!@#$%^&*()'))
    pyautogui.write(trans)
    pyautogui.press("enter")


