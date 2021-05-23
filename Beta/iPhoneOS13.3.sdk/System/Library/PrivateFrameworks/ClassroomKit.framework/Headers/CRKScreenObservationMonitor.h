/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <Foundation/NSObject.h>

@class CRKStudentDaemonProxy, NSDictionary, NSString;

@protocol CRKScreenObservationMonitorDelegate;

@interface CRKScreenObservationMonitor : NSObject

{
    int mNotificationToken;
    id <CRKScreenObservationMonitorDelegate> _delegate;
    NSDictionary *_observingInstructorsByCourse;
    CRKStudentDaemonProxy *_daemonProxy;
    NSDictionary *_observingInstructorIdentifiersByCourseIdentifierString;
    NSDictionary *_enrolledCoursesByCourseIdentifierString;
}

@property (nonatomic, readonly) CRKStudentDaemonProxy *daemonProxy;
@property (nonatomic, readonly, getter=isEnrolled) _Bool enrolled;
@property (nonatomic, readonly, getter=isConnected) _Bool connected;
@property (retain, nonatomic) NSDictionary *observingInstructorIdentifiersByCourseIdentifierString;
@property (retain, nonatomic) NSDictionary *enrolledCoursesByCourseIdentifierString;
@property (retain, nonatomic) NSDictionary *observingInstructorsByCourse;
@property (weak, nonatomic) id <CRKScreenObservationMonitorDelegate> delegate;
@property (nonatomic, readonly) _Bool hasObservingInstructors;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)keyPathsForValuesAffectingHasObservingInstructors;

- (id)init;
- (void)dealloc;
- (id)initWithDaemonProxy:(id)arg1;
- (void)daemonProxyDidConnect:(id)arg1;
- (void)daemonProxyDidDisconnect:(id)arg1;
- (void)daemonProxy:(id)arg1 didReceiveNotificationWithName:(id)arg2 userInfo:(id)arg3;
- (void)connectToStudentdIfNeeded;
- (void)enrollmentStatusDidChange;
- (void)disconnectFromStudentdIfNeeded;
- (void)fetchObservingInstructorsDidFinish:(id)arg1;
- (void)updateObservingInstructorsWithDictionary:(id)arg1;
- (void)fetchEnrolledCoursesForObservingInstructors:(id)arg1;
- (void)fetchEnrolledCoursesDidFinish:(id)arg1 userInfo:(id)arg2;
- (void)updateObservingInstructorsByCourses;
- (void)fetchObservingInstructors;

@end
