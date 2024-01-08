
(cl:in-package :asdf)

(defsystem "assignment_2_2022-srv"
  :depends-on (:roslisp-msg-protocol :roslisp-utils )
  :components ((:file "_package")
    (:file "Reached" :depends-on ("_package_Reached"))
    (:file "_package_Reached" :depends-on ("_package"))
  ))