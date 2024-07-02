# there are many mouse events available in cv2 package
import cv2
import numpy as np
# events=[i for i in dir(cv2) if 'EVENT' in i]
# print(events)
def click_event(event,x,y,flags,params):
    if event == cv2.EVENT_LBUTTONDOWN:
        print(x,', ',y)
        font=cv2.FONT_HERSHEY_SIMPLEX
        strXY= str(x)+', '+str(y)
        cv2.putText(img1,strXY,(x,y),font,0.5,(255,255,0),2)
        cv2.imshow('image',img1)

img1= np.zeros((512,512,3),np.uint8)
cv2.imshow('image',img1)

cv2.setMouseCallback('image',click_event)

cv2.waitKey()
cv2.destroyAllWindows()
