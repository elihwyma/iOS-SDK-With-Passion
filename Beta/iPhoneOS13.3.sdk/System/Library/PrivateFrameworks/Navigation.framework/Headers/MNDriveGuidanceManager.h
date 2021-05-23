/*
 Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

#import <Navigation/MNClassicGuidanceManager.h>

__attribute__((visibility("hidden")))
@interface MNDriveGuidanceManager : MNClassicGuidanceManager

{
    int _currentContinuePhase;
}

- (int)transportType;
- (void)_resetStepState;
- (id)_nameInfoForContinueSign;
- (void)_updatePrepareForNextStep;
- (_Bool)_updateConsiderContinueAnnouncement:(id)arg1 location:(id)arg2;
- (_Bool)_updateConsiderExecuteAnnouncement:(id)arg1 location:(id)arg2;
- (_Bool)_updateConsiderPrepareAnnouncement:(id)arg1 withMatch:(id)arg2;
- (double)_distanceForSign;
- (int)_continuePhase;
- (const CDStruct_39925896 *)_announceSettings;

@end
