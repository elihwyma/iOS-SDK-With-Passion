/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/HUGridCell.h>

@class HFItem, HUCameraView, HUGridCameraCellLayoutOptions, HULegibilityLabel, HUVisualEffectContainerView, NADecayingTimer, NSArray, UILabel, UIView, _UILegibilitySettings;

@interface HUGridCameraCell : HUGridCell

{
    HFItem *_item;
    HUGridCameraCellLayoutOptions *_layoutOptions;
    UIView *_topBarView;
    UIView *_recordingIndicator;
    UILabel *_titleLabel;
    HULegibilityLabel *_descriptionLabel;
    HUCameraView *_cameraView;
    _UILegibilitySettings *_legibilitySettings;
    NSArray *_allConstraints;
    NSArray *_labelsConstraints;
    NADecayingTimer *_descriptionLabelUpdateTimer;
    HUVisualEffectContainerView *_exclamationView;
}

@property (retain, nonatomic) UIView *topBarView;
@property (retain, nonatomic) UIView *recordingIndicator;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) HULegibilityLabel *descriptionLabel;
@property (retain, nonatomic) HUCameraView *cameraView;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (retain, nonatomic) NSArray *allConstraints;
@property (retain, nonatomic) NSArray *labelsConstraints;
@property (retain, nonatomic) NADecayingTimer *descriptionLabelUpdateTimer;
@property (retain, nonatomic) HUVisualEffectContainerView *exclamationView;
@property (retain, nonatomic) HUGridCameraCellLayoutOptions *layoutOptions;
@property (nonatomic) double cameraViewAlpha;
@property (nonatomic, readonly) UIView *cameraContentView;

+ (_Bool)requiresConstraintBasedLayout;
+ (Class)layoutOptionsClass;

- (void)dealloc;
- (id)item;
- (void)setItem:(id)arg1;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)updateConstraints;
- (void)updateUIWithAnimation:(_Bool)arg1;
- (struct CGRect)cameraViewFrame;
- (void)layoutOptionsDidChange;
- (id)_descriptionLabelText:(id)arg1;
- (_Bool)shouldDisplayAccessModeErrorContent;
- (_Bool)shouldDisplayErrorContent;
- (void)_updateRecordIndicatorColor;
- (void)_updateCameraViewAppearance;
- (void)_animateTransitionWithView:(id)arg1 animations:(CDUnknownBlockType)arg2;

@end
