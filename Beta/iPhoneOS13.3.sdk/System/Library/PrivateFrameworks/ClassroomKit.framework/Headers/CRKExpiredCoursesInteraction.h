/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <CATOperation.h>

@class CATRemoteTaskOperation, NSSet;

@protocol CRKExpiredCoursesInteractionDelegate, CRKRequestPerformingProtocol;

@interface CRKExpiredCoursesInteraction : CATOperation

{
    CATRemoteTaskOperation *mLeaveControlGroupsOperation;
    _Bool mIsPrompting;
    NSSet *_courses;
    id <CRKExpiredCoursesInteractionDelegate> _delegate;
    id <CRKRequestPerformingProtocol> _studentDaemonProxy;
}

@property (nonatomic, readonly) id <CRKExpiredCoursesInteractionDelegate> delegate;
@property (nonatomic, readonly) id <CRKRequestPerformingProtocol> studentDaemonProxy;
@property (nonatomic, readonly) NSSet *courses;

+ (id)new;

- (id)init;
- (void)cancel;
- (void)main;
- (_Bool)isAsynchronous;
- (void)removeCourses:(id)arg1;
- (void)leaveControlGroupsOperationDidFinish:(id)arg1;
- (id)initWithStudentDaemonProxy:(id)arg1 delegate:(id)arg2 courses:(id)arg3;

@end
