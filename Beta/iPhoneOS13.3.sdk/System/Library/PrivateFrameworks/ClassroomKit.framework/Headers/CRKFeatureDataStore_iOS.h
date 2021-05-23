/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface CRKFeatureDataStore_iOS : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly, getter=isClassroomUnpromptedScreenObservationForced) _Bool classroomUnpromptedScreenObservationForced;
@property (nonatomic, readonly, getter=isClassroomAutomaticClassJoiningForced) _Bool classroomAutomaticClassJoiningForced;
@property (nonatomic, readonly, getter=isClassroomRequestPermissionToLeaveClassesForced) _Bool classroomRequestPermissionToLeaveClassesForced;
@property (nonatomic, getter=isClassroomStudentRoleEnabled) _Bool classroomStudentRoleEnabled;
@property (nonatomic, getter=isClassroomInstructorRoleEnabled) _Bool classroomInstructorRoleEnabled;

+ (unsigned long long)crkBoolTypeFromMCBoolType:(int)arg1;
+ (id)sharedDataStore;

- (unsigned long long)boolRestrictionForFeature:(id)arg1;
- (unsigned long long)effectiveBoolValueForSetting:(id)arg1 outAsk:(_Bool *)arg2;
- (void)setBoolValue:(_Bool)arg1 ask:(_Bool)arg2 forSetting:(id)arg3;
- (unsigned long long)effectiveValueForSetting:(id)arg1 configurationUUID:(id)arg2 outAsk:(_Bool *)arg3;
- (void)setBoolValue:(_Bool)arg1 ask:(_Bool)arg2 forSetting:(id)arg3 configurationUUID:(id)arg4;

@end
