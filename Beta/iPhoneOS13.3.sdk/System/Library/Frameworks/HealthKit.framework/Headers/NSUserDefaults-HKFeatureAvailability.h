/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSUserDefaults.h>

@class NSArray;

@interface NSUserDefaults (HKFeatureAvailability)

@property (nonatomic, getter=hk_electrocardiogramSetupModalViewHasBeenPresented, setter=hk_setElectrocardiogramSetupModalViewPresented:) _Bool hk_electrocardiogramSetupModalViewPresented;
@property (nonatomic, getter=hk_atrialFibrillationSetupModalViewHasBeenPresented, setter=hk_setAtrialFibrillationSetupModalViewPresented:) _Bool hk_atrialFibrillationSetupModalViewPresented;
@property (retain, nonatomic, setter=hk_setDemoResultKeys:) NSArray *hk_demoResultKeys;
@property (nonatomic, readonly) _Bool hk_hfeModeEnabled;

+ (id)hk_featureAvailabilityUserDefaults;
+ (id)hk_heartRhythmDefaults;

- (_Bool)hk_keyExists:(id)arg1;
- (void)hk_removeObjectsForKeysWithPrefix:(id)arg1;

@end
