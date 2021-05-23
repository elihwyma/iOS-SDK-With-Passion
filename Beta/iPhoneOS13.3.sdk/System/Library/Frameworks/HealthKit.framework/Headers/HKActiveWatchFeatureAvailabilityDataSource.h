/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

@class NRPairedDeviceRegistry, NSString;

@interface HKActiveWatchFeatureAvailabilityDataSource : NSObject

{
    NSString *_electrocardiogramOnboardingCountryCode;
    NSString *_atrialFibrillationDetectionOnboardingCountryCode;
    NRPairedDeviceRegistry *_pairedDeviceRegistry;
}

@property (retain, nonatomic) NRPairedDeviceRegistry *pairedDeviceRegistry;
@property (copy, nonatomic) NSString *electrocardiogramOnboardingCountryCode;
@property (copy, nonatomic) NSString *atrialFibrillationDetectionOnboardingCountryCode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)watchProductType;
- (CDStruct_f6aba300)watchElectrocardiogramVersion;
- (id)watchOSBuildVersion;
- (CDStruct_f6aba300)watchOSVersion;
- (CDStruct_f6aba300)watchAtrialFibrillationDetectionVersion;
- (id)watchRegion;
- (id)_activeWatch;
- (CDStruct_f6aba300)_operatingSystemVersionForWatchOSVersion:(unsigned int)arg1;
- (id)watchModelNumber;
- (id)watchBuildType;
- (id)watchCompanionDevicePlatform;

@end
