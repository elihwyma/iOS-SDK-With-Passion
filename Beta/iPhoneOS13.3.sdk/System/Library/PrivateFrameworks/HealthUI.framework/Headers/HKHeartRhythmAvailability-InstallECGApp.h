/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <HealthKit/HKHeartRhythmAvailability.h>

@interface HKHeartRhythmAvailability (InstallECGApp)

- (void)checkElectrocardiogramAppInstallStateWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)installElectrocardiogramAppAlertController:(CDUnknownBlockType)arg1 cancel:(CDUnknownBlockType)arg2;

@end
