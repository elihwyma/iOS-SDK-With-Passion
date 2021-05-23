/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <Foundation/NSObject.h>

@class CATRemoteTaskOperation, CRKSecureCodedUserDefaultsObject, CRKSettingsUIVisibleRemoteValue, CRKStudentDaemonProxy, NSArray, NSDictionary, NSSet, NSString;

@protocol CRKCourseEnrollmentControllerDelegate;

@interface CRKCourseEnrollmentController : NSObject

{
    id <CRKCourseEnrollmentControllerDelegate> mDelegate;
    CRKStudentDaemonProxy *mDaemonProxy;
    CATRemoteTaskOperation *mBrowseOperation;
    CATRemoteTaskOperation *mActiveCoursesOperation;
    CRKSecureCodedUserDefaultsObject *mStoredCourses;
    _Bool mConfigurationFetched;
    CRKSettingsUIVisibleRemoteValue *mSettingsUIVisibleRemoteValue;
    NSArray *_courses;
    NSArray *_courseInvitations;
    NSSet *_acceptedInvitationIdentifiers;
    NSArray *_activeCourseIdentifiers;
    NSArray *_activeInstructorIdentifiers;
    NSDictionary *_observingInstructorIdentifiersByCourseIdentifiers;
    unsigned long long _configurationType;
}

@property (copy, nonatomic) NSArray *courses;
@property (copy, nonatomic) NSArray *courseInvitations;
@property (copy, nonatomic) NSSet *acceptedInvitationIdentifiers;
@property (copy, nonatomic) NSArray *activeCourseIdentifiers;
@property (copy, nonatomic) NSArray *activeInstructorIdentifiers;
@property (retain, nonatomic) NSDictionary *observingInstructorIdentifiersByCourseIdentifiers;
@property (nonatomic) unsigned long long configurationType;
@property (nonatomic, readonly) _Bool settingsUIVisible;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)initWithDelegate:(id)arg1;
- (_Bool)isEphemeralMultiUser;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)taskOperation:(id)arg1 didPostNotificationWithName:(id)arg2 userInfo:(id)arg3;
- (id)initWithStudentDaemonProxy:(id)arg1 delegate:(id)arg2;
- (void)daemonProxyDidConnect:(id)arg1;
- (void)fetchStoredCourses;
- (void)daemonProxyDidDisconnect:(id)arg1;
- (void)fetchActiveCourses;
- (void)fetchCourses;
- (void)fetchCourseInvitations;
- (void)fetchScreenObservers;
- (void)startLongRunningOperations;
- (void)stopLongRunningOperations;
- (void)fetchConfiguration;
- (void)screenObserversHaveChanged:(id)arg1;
- (void)stopBrowsingForInvitations;
- (_Bool)canBrowseForInvitations;
- (void)startBrowsingForInvitations;
- (void)fetchConfigurationTypeOperationDidFinish:(id)arg1;
- (void)updateInvitationBrowsingStatus;
- (void)fetchActiveCoursesOperationDidFinish:(id)arg1;
- (void)fetchCoursesOperationDidFinish:(id)arg1;
- (void)storeCourses;
- (void)fetchCourseInvitationsOperationDidFinish:(id)arg1;
- (void)fetchScreenObserversDidFinish:(id)arg1;
- (void)daemonProxy:(id)arg1 didReceiveNotificationWithName:(id)arg2 userInfo:(id)arg3;
- (id)courseWithIdentifier:(id)arg1;
- (id)invitationWithCourseIdentifier:(id)arg1;
- (id)coursesWithInstructorIdentifier:(id)arg1;

@end
