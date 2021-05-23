/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <Foundation/NSObject.h>

@class CRKCourseEnrollmentController, CRKUserDefaultsObject, NSString;

@interface CRKDefaultSettingsUIVisibilityProvider : NSObject

{
    CRKUserDefaultsObject *mUIPreviouslyVisible;
    CRKCourseEnrollmentController *mEnrollmentController;
    _Bool _settingsUIVisible;
}

@property _Bool settingsUIVisible;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)connectToDaemon;
- (void)enrollmentControllerDidUpdateSettingsUIVisibility:(id)arg1;
- (void)migrateOldUserDefaultsValues;
- (void)updateVisibilityState;
- (void)updatePreviouslyVisibleDefaultWithValue:(_Bool)arg1;

@end
