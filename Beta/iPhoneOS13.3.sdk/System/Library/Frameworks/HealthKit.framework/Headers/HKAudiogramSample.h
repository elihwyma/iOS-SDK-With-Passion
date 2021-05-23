/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <HealthKit/HKSample.h>

@class NSArray, NSData, NSString;

@interface HKAudiogramSample : HKSample

{
    NSData *_encodedSensitivityPoints;
}

@property (retain, nonatomic) NSData *encodedSensitivityPoints;
@property (copy, readonly) NSArray *sensitivityPoints;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (_Bool)_isConcreteObjectClass;
+ (id)_encodeSensitivityPoints:(id)arg1;
+ (id)_decodeSensitivityData:(id)arg1;
+ (id)audiogramSampleWithSensitivityPoints:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 metadata:(id)arg4;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)payload;
- (id)_validateConfigurationWithOptions:(unsigned long long)arg1;
- (void)_setPayload:(id)arg1;
- (id)_validateSensitivityPointsOrderedAscending;
- (id)_pureToneAverageForDiagnosticSensitivityPoints:(id)arg1;
- (id)averageLeftEarSensitivity;
- (unsigned long long)_diagnosticForSensitivity:(id)arg1;
- (id)averageRightEarSensitivity;
- (id)_leftDiagnosticSensitivityPoints;
- (id)_averageEarSensitivityForDiagnosticSensitivityPoints:(id)arg1;
- (id)_rightDiagnosticSensitivityPoints;
- (id)_leftSensitivityPoints;
- (id)_rightSensitivityPoints;
- (unsigned long long)diagnostic;
- (id)minimumSensitivity;
- (id)maximumSensitivity;

@end
