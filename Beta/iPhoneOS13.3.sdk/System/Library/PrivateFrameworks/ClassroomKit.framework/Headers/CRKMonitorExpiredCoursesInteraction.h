/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <CATOperation.h>

@class CATSerialOperationQueue, CRKCourseEnrollmentController, NSMutableSet;

@protocol CRKExpiredCoursesInteractionDelegate, CRKRequestPerformingProtocol;

@interface CRKMonitorExpiredCoursesInteraction : CATOperation

{
    _Bool mIsObservingEnrollmentController;
    id <CRKRequestPerformingProtocol> _studentDaemonProxy;
    id <CRKExpiredCoursesInteractionDelegate> _expiredCoursesInteractionDelegate;
    CRKCourseEnrollmentController *_enrollmentController;
    NSMutableSet *_expiredCoursesToPresent;
    CATSerialOperationQueue *_serialOperationQueue;
}

@property (nonatomic, readonly) id <CRKRequestPerformingProtocol> studentDaemonProxy;
@property (nonatomic, readonly) id <CRKExpiredCoursesInteractionDelegate> expiredCoursesInteractionDelegate;
@property (nonatomic, readonly) CRKCourseEnrollmentController *enrollmentController;
@property (nonatomic, readonly) NSMutableSet *expiredCoursesToPresent;
@property (nonatomic, readonly) CATSerialOperationQueue *serialOperationQueue;

- (void)cancel;
- (void)main;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (_Bool)isAsynchronous;
- (void)beginInteractionWithExpiredCourses:(id)arg1;
- (void)expiredCoursesInteractionDidFinish:(id)arg1;
- (void)updateWithCourses:(id)arg1;
- (id)initWithStudentDaemonProxy:(id)arg1 enrollmentController:(id)arg2 expiredCoursesInteractionDelegate:(id)arg3;

@end
