;; Auto-generated. Do not edit!


(when (boundp 'assignment_2_2022::Kinematic)
  (if (not (find-package "ASSIGNMENT_2_2022"))
    (make-package "ASSIGNMENT_2_2022"))
  (shadow 'Kinematic (find-package "ASSIGNMENT_2_2022")))
(unless (find-package "ASSIGNMENT_2_2022::KINEMATIC")
  (make-package "ASSIGNMENT_2_2022::KINEMATIC"))

(in-package "ROS")
;;//! \htmlinclude Kinematic.msg.html


(defclass assignment_2_2022::Kinematic
  :super ros::object
  :slots (_x _y _vel_x _vel_z ))

(defmethod assignment_2_2022::Kinematic
  (:init
   (&key
    ((:x __x) 0.0)
    ((:y __y) 0.0)
    ((:vel_x __vel_x) 0.0)
    ((:vel_z __vel_z) 0.0)
    )
   (send-super :init)
   (setq _x (float __x))
   (setq _y (float __y))
   (setq _vel_x (float __vel_x))
   (setq _vel_z (float __vel_z))
   self)
  (:x
   (&optional __x)
   (if __x (setq _x __x)) _x)
  (:y
   (&optional __y)
   (if __y (setq _y __y)) _y)
  (:vel_x
   (&optional __vel_x)
   (if __vel_x (setq _vel_x __vel_x)) _vel_x)
  (:vel_z
   (&optional __vel_z)
   (if __vel_z (setq _vel_z __vel_z)) _vel_z)
  (:serialization-length
   ()
   (+
    ;; float64 _x
    8
    ;; float64 _y
    8
    ;; float64 _vel_x
    8
    ;; float64 _vel_z
    8
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; float64 _x
       (sys::poke _x (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _y
       (sys::poke _y (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _vel_x
       (sys::poke _vel_x (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _vel_z
       (sys::poke _vel_z (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; float64 _x
     (setq _x (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _y
     (setq _y (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _vel_x
     (setq _vel_x (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _vel_z
     (setq _vel_z (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;;
   self)
  )

(setf (get assignment_2_2022::Kinematic :md5sum-) "9a6b8857bb44e9dfbb8aa9b340027ecc")
(setf (get assignment_2_2022::Kinematic :datatype-) "assignment_2_2022/Kinematic")
(setf (get assignment_2_2022::Kinematic :definition-)
      "float64 x
float64 y
float64 vel_x
float64 vel_z

")



(provide :assignment_2_2022/Kinematic "9a6b8857bb44e9dfbb8aa9b340027ecc")


