/*
 Image: /System/Library/PrivateFrameworks/HeartRhythmUI.framework/HeartRhythmUI
 */

#import <Foundation/NSObject.h>

@interface HRUIAnalyticsManager : NSObject

{
    long long _currentAtrialFibrillationOnboardingStep;
    long long _currentElectrocardiogramOnboardingStep;
}

+ (id)sharedManager;

- (id)init;
- (void)trackElectrocardiogramDataTypeViewed;
- (void)trackElectrocardiogramPDFViewed;
- (void)trackElectrocardiogramPDFShared;
- (id)_stringFromHRUIAtrialFibrillationDetectionOnboardingStep:(long long)arg1;
- (id)_stringFromHRUIElectrocardiogramOnboardingStep:(long long)arg1;
- (void)trackAtrialFibrillationDetectionOnboardingStep:(long long)arg1 forVersion:(long long)arg2 productType:(id)arg3 countryCode:(id)arg4;
- (void)trackElectrocardiogramOnboardingStep:(long long)arg1 forVersion:(long long)arg2 productType:(id)arg3 countryCode:(id)arg4;

@end
