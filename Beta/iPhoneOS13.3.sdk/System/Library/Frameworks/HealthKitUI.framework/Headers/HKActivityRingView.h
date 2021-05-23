/*
 Image: /System/Library/Frameworks/HealthKitUI.framework/HealthKitUI
 */

#import <UIKit/UIView.h>

@class ARUIRingsView, ARUIRingsViewRenderer, HKActivitySummary, _HKShapeView;

@interface HKActivityRingView : UIView

{
    ARUIRingsView *_ringsView;
    ARUIRingsViewRenderer *_renderer;
    _HKShapeView *_maskView;
    _Bool _shouldBypassApplicationStateChecking;
    HKActivitySummary *_activitySummary;
    double _ringInsetPercentage;
    double _emptyRingAlpha;
}

@property (nonatomic, getter=_ringInsetPercentage, setter=_setRingInsetPercentage:) double ringInsetPercentage;
@property (nonatomic, getter=_emptyRingAlpha, setter=_setEmptyRingAlpha:) double emptyRingAlpha;
@property (nonatomic, getter=_shouldBypassApplicationStateChecking, setter=_setShouldBypassApplicationStateChecking:) _Bool shouldBypassApplicationStateChecking;
@property (retain, nonatomic) HKActivitySummary *activitySummary;

- (id)initWithCoder:(id)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (id)_snapshotImage;
- (void)_setUpAfterInit;
- (void)_setUpRingsView;
- (void)setActivitySummary:(id)arg1 animated:(_Bool)arg2;
- (void)_updateMaskPath;
- (void)_updateRingsViewDiameter;
- (void)_updateRingsViewDiameterLegacy;
- (void)_setRingDiameter:(double)arg1 ringInterspacing:(double)arg2 ringThickness:(double)arg3;
- (void)_updateAndInterpolateRingsViewDiameterForWidth:(double)arg1 lowerDirective:(id)arg2 higherDirective:(id)arg3;
- (double)_ringDiameter;
- (id)initWithFrame:(struct CGRect)arg1 renderer:(id)arg2;
- (void)_setActivityRingViewBackgroundTransparent:(_Bool)arg1;
- (void)_setActivityRingViewBackgroundColor:(id)arg1;
- (void)_displayIcons;
- (void)_setActivitySummary:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;

@end
