import cv2

img = cv2.imread("food.jpg")
gray = cv2.cvtColor(img, cv2.COLOR_BGR2GRAY)
blur = cv2.GaussianBlur(gray, (5,5), 0)

edges = cv2.Canny(blur, 50, 150)

contours, _ = cv2.findContours(edges, cv2.RETR_EXTERNAL, cv2.CHAIN_APPROX_SIMPLE)

for cnt in contours:
    area = cv2.contourArea(cnt)
    if area < 500:
        cv2.drawContours(img, [cnt], -1, (0,0,255), 2)

cv2.imshow("Sorting Output", img)
cv2.waitKey(0)
cv2.destroyAllWindows()
