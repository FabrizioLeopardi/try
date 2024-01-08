;; Auto-generated. Do not edit!


(when (boundp 'assignment_2_2022::Reached)
  (if (not (find-package "ASSIGNMENT_2_2022"))
    (make-package "ASSIGNMENT_2_2022"))
  (shadow 'Reached (find-package "ASSIGNMENT_2_2022")))
(unless (find-package "ASSIGNMENT_2_2022::REACHED")
  (make-package "ASSIGNMENT_2_2022::REACHED"))
(unless (find-package "ASSIGNMENT_2_2022::REACHEDREQUEST")
  (make-package "ASSIGNMENT_2_2022::REACHEDREQUEST"))
(unless (find-package "ASSIGNMENT_2_2022::REACHEDRESPONSE")
  (make-package "ASSIGNMENT_2_2022::REACHEDRESPONSE"))

(in-package "ROS")





(defclass assignment_2_2022::ReachedRequest
  :super ros::object
  :slots ())

(defmethod assignment_2_2022::ReachedRequest
  (:init
   (&key
    )
   (send-super :init)
   self)
  (:serialization-length
   ()
   (+
    0
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;;
   self)
  )

(defclass assignment_2_2022::ReachedResponse
  :super ros::object
  :slots (_reached _cancelled ))

(defmethod assignment_2_2022::ReachedResponse
  (:init
   (&key
    ((:reached __reached) 0)
    ((:cancelled __cancelled) 0)
    )
   (send-super :init)
   (setq _reached (round __reached))
   (setq _cancelled (round __cancelled))
   self)
  (:reached
   (&optional __reached)
   (if __reached (setq _reached __reached)) _reached)
  (:cancelled
   (&optional __cancelled)
   (if __cancelled (setq _cancelled __cancelled)) _cancelled)
  (:serialization-length
   ()
   (+
    ;; int32 _reached
    4
    ;; int32 _cancelled
    4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; int32 _reached
       (write-long _reached s)
     ;; int32 _cancelled
       (write-long _cancelled s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; int32 _reached
     (setq _reached (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;; int32 _cancelled
     (setq _cancelled (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;;
   self)
  )

(defclass assignment_2_2022::Reached
  :super ros::object
  :slots ())

(setf (get assignment_2_2022::Reached :md5sum-) "d21c4923e63883c429d739eacdfb354d")
(setf (get assignment_2_2022::Reached :datatype-) "assignment_2_2022/Reached")
(setf (get assignment_2_2022::Reached :request) assignment_2_2022::ReachedRequest)
(setf (get assignment_2_2022::Reached :response) assignment_2_2022::ReachedResponse)

(defmethod assignment_2_2022::ReachedRequest
  (:response () (instance assignment_2_2022::ReachedResponse :init)))

(setf (get assignment_2_2022::ReachedRequest :md5sum-) "d21c4923e63883c429d739eacdfb354d")
(setf (get assignment_2_2022::ReachedRequest :datatype-) "assignment_2_2022/ReachedRequest")
(setf (get assignment_2_2022::ReachedRequest :definition-)
      "---
int32 reached
int32 cancelled

")

(setf (get assignment_2_2022::ReachedResponse :md5sum-) "d21c4923e63883c429d739eacdfb354d")
(setf (get assignment_2_2022::ReachedResponse :datatype-) "assignment_2_2022/ReachedResponse")
(setf (get assignment_2_2022::ReachedResponse :definition-)
      "---
int32 reached
int32 cancelled

")



(provide :assignment_2_2022/Reached "d21c4923e63883c429d739eacdfb354d")


