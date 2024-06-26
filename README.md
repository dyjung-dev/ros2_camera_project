# ros2_camera_project

## Abstract :page_facing_up:
---


이 프로젝트에서는 ros2 package를 활용해 camera 어플 기능을 구현하고 있습니다.   
**ros package**, **roslaunch**, **msg definition**, **ros server** 등이 프로젝트 구현에 사용되었습니다.   

<img src="https://img.shields.io/badge/ROS2-22314E?style=for-the-badge&logo=ros&logoColor=white">   ![OpenCV](https://img.shields.io/badge/opencv-%23white.svg?style=for-the-badge&logo=opencv&logoColor=white)



## Prerequisites :bookmark_tabs: 
---


### 1. 프로젝트 실행에 환경 갖추기 

   ```
   OS   : Ubuntu 22.04.4 LTS
   ROS2 : Humble
   ```
   ROS2 설치가 필요할 경우 [ROS2](https://docs.ros.org/en/humble/Installation.html) 링크를 참고하여 설치해 주시기 바랍니다



### 2. opencv를 사용하기 위한 라이브러리 설치
  + opencv-python 설치   
       
     ```
     pip3 install opencv-python
     ```
  + ros-humble-cv-bridge 설치
    
    ros2 img 메세지와 opencv 이미지 사이의 변환을 도와주는 패키지
    ```
    sudo apt install ros-humble-cv-bridge
    ```
  + rqt 설치

    rqt는 ros 사용자의 디버깅을 도와주는 도구입니다

    ```
    sudo apt install ros-humble-rqt*
    ```


    
## Try it :metal:
---
프로젝트를 직접 실행해보자   


 + git clone으로 프로젝트 코드 내려 받기
   
   ```
   git clone https://github.com/dyjung-dev/ros2_camera_project.git
   ```

   
  + work space에서 빌드하기

    ```
    cd ros2_camera_project
    cd ros2_oneday
    ```
    work space 까지 들어가면 아래 이미지 처럼 ls 명령어 실행시 build, install, log, src 파일이 보여야 한다
    
    ![image](https://github.com/dyjung-dev/ros2_camera_project/assets/137265648/a97fee0b-09bd-4787-b8bf-abb698e47de2)

    colcon build를 한다
    
    ![image](https://github.com/dyjung-dev/ros2_camera_project/assets/137265648/cc6f7b8d-6394-44da-8cf5-99be7e5df4f6)



    **만약에 , colcon build를 실행 했는데 아래와 같은 에러가 발생한다면**
    
    ![image](https://github.com/dyjung-dev/ros2_camera_project/assets/137265648/d92145b6-8af9-48dd-a23c-ac94920af66e)

    에러가 발생한 ros2_oneday/build/CMakeCache.txt 파일을 찾아서 들어간다
    
    ![image](https://github.com/dyjung-dev/ros2_camera_project/assets/137265648/70396117-bb90-494a-a7ee-7ad88b0da8bc)

    변경된 경로에 맞게 CMakeCahe.txt 파일을 수정한다



      + 수정 전
   
       ![image](https://github.com/dyjung-dev/ros2_camera_project/assets/137265648/da20f844-c799-41f7-b956-1dd85e5dd77b)

       ![image](https://github.com/dyjung-dev/ros2_camera_project/assets/137265648/0b98a92f-e8b3-47be-8168-4062284d9965)

       ![image](https://github.com/dyjung-dev/ros2_camera_project/assets/137265648/ed056c14-7429-47a5-8257-d1131f6df9a8)

       ![image](https://github.com/dyjung-dev/ros2_camera_project/assets/137265648/cac5b4f3-037d-4910-8113-4ed523aa93a9)




      + 수정 후

       ![image](https://github.com/dyjung-dev/ros2_camera_project/assets/137265648/2255cfd3-cf02-4d50-b24f-b302cb3f00fd)

       ![image](https://github.com/dyjung-dev/ros2_camera_project/assets/137265648/5cc9b77b-fdca-4a65-b5b1-ef9e24721738)

       ![image](https://github.com/dyjung-dev/ros2_camera_project/assets/137265648/42bc5665-7087-42d2-be23-6e63b7b7de1e)

       ![image](https://github.com/dyjung-dev/ros2_camera_project/assets/137265648/7c8d8e56-c3c0-4063-9fb0-61b4d7187314)

        

      수정하고 나면, 아래 이미지와 같이 빌드가 성공적으로 끝난다

    

       ![image](https://github.com/dyjung-dev/ros2_camera_project/assets/137265648/2c308992-55c9-46eb-b679-ed9e250fa5ac)

    

  + source 명령어를 이용해서 실행 환경을 불러오기
   
       
   
     ![image](https://github.com/dyjung-dev/ros2_camera_project/assets/137265648/9d3eef05-86b7-45ae-9315-4992897fd629)

    

  + capture, video record 노드를 실행해보려면 저장 경로지정이 필요하다

      cap_parameters.yaml, rec_parameters.yaml 파일 안에서 경로를 수정할 수 있다
   
       
     
     ![image](https://github.com/dyjung-dev/ros2_camera_project/assets/137265648/0d9afa19-bb1f-4530-a1e1-67f1d74f378f)



      + 수정 전
   
        
        ![image](https://github.com/dyjung-dev/ros2_camera_project/assets/137265648/d1fe0d18-19be-41dd-b0a5-d3ce3580c5e4)

   

      + 수정 후
   
        ![image](https://github.com/dyjung-dev/ros2_camera_project/assets/137265648/665fc36c-66b3-48dd-92e0-deb8b3c75d50)

   

   
  + 먼저 img_publisher를 실행해보자
    
    이 노드에서는 카메라로부터 이미지를 받아온다
    

     ![image](https://github.com/dyjung-dev/ros2_camera_project/assets/137265648/f798dd94-f20a-4cc2-bc43-6b65fe5c020c)

     ![image](https://github.com/dyjung-dev/ros2_camera_project/assets/137265648/317749d9-c3bf-42a3-9ee0-b55b78e1524c)

   

    rqt를 실행하면 영상도 확인 할 수 있다
   
   
     ![image](https://github.com/dyjung-dev/ros2_camera_project/assets/137265648/1e5c50a4-52b0-4f91-b42e-15e69dad8c8c)


## Parameters :paw_prints:
---
   + capture_save_path :  camera_capture 노드가 이미지를 저장하는 경로를 지정해주는 변수이다
      
   ![image](https://github.com/dyjung-dev/ros2_camera_project/assets/137265648/e01c76b1-d549-4a17-b190-4709e4ee5678)

      
   + record_save_path : camera_record 노드가 영상을 저장하는 경로를 지정해주는 변수이다
      
   ![image](https://github.com/dyjung-dev/ros2_camera_project/assets/137265648/afaab2e1-1cb0-4085-b1d0-0db9c146b406)

## Nodes :new_moon:
---
   + img_publisher

      카메라 화면을 받아오는 토픽을 발생하는 노드

      실행 명령어 :
   
      ```
      ros2 run best_camera_app img_publisher
      ```
         
   + camera_capture
    
     카메라 화면의 스틸샷을 찍는 서비스를 구동시키는 노드

     서비스 실행 명령어 :
   
      ```
      ros2 service call /best_camera_app/camera_capture best_camera_app_msgs/srv/CaptureService "{capture_true: true}"
      ```

      **capture_ture** : true가 넘어올 경우, 그 순간을 캡쳐해서 저장한다. true를 제외한 다른 값들에는 어떠한 결과도 나오지 않는다
        
   + camera_record
         
      카메라 화면을 영상으로 저장하는 서비스를 구동시키는 노드

      서비스 실행 명령어 :
      
      ```
      ros2 service call /best_camera_app/camera_record best_camera_app_msgs/srv/VideoRecordService "{video_start_end: start}"
      ```
   
      **video_start_end** : start(그 순간부터 카메라가 녹화를 시작한다), end(카메라가 녹화를 중지하고 파일을 저장한다)
        
   + camera_blurred
   
      화면을 흐리게 만드는 Blurr 기능을 제공하는 서비스를 구동시키는 노드
      
      서비스 실행 명령어 :
            
      ```
      ros2 service call /best_camera_app/camera_blurred best_camera_app_msgs/srv/ApplyBlurrService "{apply_blurr_true_false: true}"
      ```
            
      **apply_blur_true_false** : true(카메라 화면에 blurr 효과를 적용한다), false(카메라 화면에 적용된 blurr 효과를 없앤다)
          
   + camera_rgb
     
      카메라에서 받아온 화면의 rgb 값을 조절하는 서비스를 구동시키는 노드

      서비스 실행 명령어 :

      ```
      ros2 service call /best_camera_app/camera_blurred best_camera_app_msgs/srv/ApplyRGBService "{r: 2.0,g:0.2, b:0.2}"
      ```

      **r** : 0.0 ~ 2.0 의 값을 입력하면 이미지의 빨간색 속성을 비율적으로 적용시킨다. 원본 이미지의 경우 1.0이 적용되어 있다     
      **g** : 0.0 ~ 2.0 의 값을 입력하면 이미지의 초록색 속성을 비율적으로 적용시킨다. 원본 이미지의 경우 1.0이 적용되어 있다     
      **b** : 0.0 ~ 2.0 의 값을 입력하면 이미지의 파란색 속성을 비율적으로 적용시킨다. 원본 이미지의 경우 1.0이 적용되어 있다     


            

        
## Launch File :fries:
---

  ![image](https://github.com/dyjung-dev/ros2_camera_project/assets/137265648/97dcfe90-3cb9-4422-a6c5-b2fdf430d149)
      
         
 namespace= 'best_camera_app'을 적용하여 img_publisher, camera_capture, camera_record, camera_blurred, camera_rgb 노드를 구동시키는 launch 파일이다

          
 위 이미지의 rqt_graph 결과를 확인하면 노드들 간의 관계를 알 수 있다


     

     
             
## ShowCase :rocket:
---

  ### Capture :camera:

  
  ![capture_demo-ezgif com-video-to-gif-converter](https://github.com/dyjung-dev/ros2_camera_project/assets/137265648/1510835f-fc16-48ec-9276-3fa7ee4185ab)

   
   ### Video Record :video_camera:

   
   ![video_record_demo-ezgif com-video-to-gif-converter](https://github.com/dyjung-dev/ros2_camera_project/assets/137265648/fdff502e-eb93-4b8a-bc6e-656ccacf977c)


   
   ### Blurr :foggy:

   
   ![blurr_demo-ezgif com-video-to-gif-converter](https://github.com/dyjung-dev/ros2_camera_project/assets/137265648/824ab6c6-1a88-4e15-8235-02fd1dc0224e)


    
   ### RGB :art:

    
   ![rgb_demo-ezgif com-video-to-gif-converter](https://github.com/dyjung-dev/ros2_camera_project/assets/137265648/5b0d3096-c289-402a-8324-b037bbb6215e)


## Reference :mag:
---
   [ROS2 Humble Documentation](https://docs.ros.org/en/humble/index.html)    
   [OpenCV Documentation](https://docs.opencv.org/4.x/index.html)

## Author :neckbeard:
---
   
   + Dayeon Jung - dyjung.dev@gmail.com
        

      




