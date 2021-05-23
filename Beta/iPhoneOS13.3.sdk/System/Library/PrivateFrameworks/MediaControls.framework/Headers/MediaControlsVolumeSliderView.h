/*
 Image: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
 */

#import <ControlCenterUIKit/CCUIContinuousSliderView.h>

@class UIImpactFeedbackGenerator, UIView;

@interface MediaControlsVolumeSliderView : CCUIContinuousSliderView

{
    _Bool _euDevice;
    float _euVolumeLimit;
    _Bool _euVolumeLimitEnforced;
    UIView *_orangeValueView;
    _Bool _didAcknowledgeThreshold;
    _Bool _didHitThreshold;
    _Bool _didTakeActionToAcknowledge;
    UIImpactFeedbackGenerator *_impactFeedbackGenerator;
    UIView *_materialView;
}

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (float)filteredValueForValue:(float)arg1;
- (void)setContinuousSliderCornerRadius:(double)arg1;
- (void)_unregisterForAVSystemControllerNotifications;
- (void)_registerForAVSystemControllerNotifications;
- (void)resetThresholdAcknowledgment;
- (void)_initializeEUVolumeLimits;
- (float)_valueByApplyingEULimitsToValue:(float)arg1;
- (void)_serverConnectionDied:(id)arg1;
- (void)_EUVolumeLimitChanged:(id)arg1;
- (void)_EUVolumeEnforcementChanged:(id)arg1;

@end
