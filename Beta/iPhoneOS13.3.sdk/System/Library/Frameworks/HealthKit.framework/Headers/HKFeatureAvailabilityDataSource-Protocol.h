/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <HealthKit/Swift-Protocol.h>

@protocol HKFeatureAvailabilityDataSource <Swift>

- (unsigned short)watchProductType;
- (unsigned short)watchElectrocardiogramVersion;
- (unsigned short)watchOSBuildVersion;
- (unsigned short)electrocardiogramOnboardingCountryCode;
- (unsigned short)watchOSVersion;
- (unsigned short)watchAtrialFibrillationDetectionVersion;
- (unsigned short)watchRegion;
- (unsigned short)atrialFibrillationDetectionOnboardingCountryCode;
- (unsigned short)watchModelNumber;
- (unsigned short)watchBuildType;
- (unsigned short)watchCompanionDevicePlatform;

@end
