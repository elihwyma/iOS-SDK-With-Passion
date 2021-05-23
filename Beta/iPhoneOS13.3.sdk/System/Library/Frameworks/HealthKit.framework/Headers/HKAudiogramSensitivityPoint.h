/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

@class HKQuantity;

@interface HKAudiogramSensitivityPoint : NSObject

{
    HKQuantity *_frequency;
    HKQuantity *_leftEarSensitivity;
    HKQuantity *_rightEarSensitivity;
}

@property (copy, readonly) HKQuantity *frequency;
@property (copy, readonly) HKQuantity *leftEarSensitivity;
@property (copy, readonly) HKQuantity *rightEarSensitivity;

+ (_Bool)supportsSecureCoding;
+ (_Bool)_validateUnitForFrequency:(id)arg1;
+ (_Bool)_validateUnitForSensitivity:(id)arg1;
+ (_Bool)validFrequency:(id)arg1 error:(id *)arg2;
+ (_Bool)validSensitivity:(id)arg1 error:(id *)arg2;
+ (id)_incompatibleUnit:(id)arg1 incompatibleWith:(id)arg2;
+ (id)_rangeViolationMin:(id)arg1 max:(id)arg2 value:(id)arg3;
+ (id)sensitivityPointWithFrequency:(id)arg1 leftEarSensitivity:(id)arg2 rightEarSensitivity:(id)arg3 error:(id *)arg4;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_leftDiagnosticSensitivityPoint;
- (id)_rightDiagnosticSensitivityPoint;
- (id)initWithFrequency:(id)arg1 leftEarSensitivity:(id)arg2 rightEarSensitivity:(id)arg3;
- (id)_audiogramDiagnosticSensitivityPointForEarSensitivity:(id)arg1;

@end
