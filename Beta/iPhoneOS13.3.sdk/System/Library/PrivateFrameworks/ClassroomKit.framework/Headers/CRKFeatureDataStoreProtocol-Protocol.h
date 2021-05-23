/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <ClassroomKit/Swift-Protocol.h>

@protocol CRKFeatureDataStoreProtocol <Swift>

@property (nonatomic, readonly, getter=isClassroomUnpromptedScreenObservationForced) _Bool classroomUnpromptedScreenObservationForced;
@property (nonatomic, readonly, getter=isClassroomAutomaticClassJoiningForced) _Bool classroomAutomaticClassJoiningForced;
@property (nonatomic, readonly, getter=isClassroomRequestPermissionToLeaveClassesForced) _Bool classroomRequestPermissionToLeaveClassesForced;
@property (nonatomic, getter=isClassroomStudentRoleEnabled) _Bool classroomStudentRoleEnabled;
@property (nonatomic, getter=isClassroomInstructorRoleEnabled) _Bool classroomInstructorRoleEnabled;

+ (unsigned short)sharedDataStore;

- (unsigned short)boolRestrictionForFeature: /* Error: Ran out of types for this method. */;
- (unsigned short)effectiveBoolValueForSetting:outAsk: /* Error: Ran out of types for this method. */;
- (unsigned short)setBoolValue:ask:forSetting: /* Error: Ran out of types for this method. */;
- (unsigned short)effectiveValueForSetting:configurationUUID:outAsk: /* Error: Ran out of types for this method. */;
- (unsigned short)setBoolValue:ask:forSetting:configurationUUID: /* Error: Ran out of types for this method. */;

@end
