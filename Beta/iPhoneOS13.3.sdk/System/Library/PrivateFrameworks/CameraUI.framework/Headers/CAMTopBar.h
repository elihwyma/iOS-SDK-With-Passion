/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <UIKit/UIView.h>

@class CAMElapsedTimeView, CAMExpandableMenuButton, CAMFilterButton, CAMFlashButton, CAMFlipButton, CAMFramerateIndicatorView, CAMHDRButton, CAMIntensityButton, CAMLivePhotoButton, CAMMessagesPhotosButton, CAMTimerButton, CEKApertureButton, NSArray, NSSet, PUReviewScreenDoneButton;

@protocol CAMControlVisibilityUpdateDelegate;

@interface CAMTopBar : UIView

{
    id <CAMControlVisibilityUpdateDelegate> _visibilityUpdateDelegate;
    long long _style;
    long long _backgroundStyle;
    CAMFlashButton *_flashButton;
    CAMElapsedTimeView *_elapsedTimeView;
    CAMHDRButton *_HDRButton;
    CAMFlipButton *_flipButton;
    CAMFilterButton *_filterButton;
    CEKApertureButton *_apertureButton;
    CAMIntensityButton *_intensityButton;
    CAMTimerButton *_timerButton;
    CAMLivePhotoButton *_livePhotoButton;
    CAMMessagesPhotosButton *_photosButton;
    PUReviewScreenDoneButton *_doneButton;
    CAMFramerateIndicatorView *_framerateIndicatorView;
    long long _orientation;
    UIView *__backgroundView;
    NSArray *__allowedControls;
    NSSet *__controlsNeedingNonAnimatedLayout;
    CAMExpandableMenuButton *__expandedMenuButton;
    long long __mode;
    struct UIEdgeInsets __expandedMenuButtonTappableInsets;
}

@property (nonatomic, readonly) UIView *_backgroundView;
@property (nonatomic, readonly) NSArray *_allowedControls;
@property (retain, nonatomic, setter=_setControlsNeedingNonAnimatedLayout:) NSSet *_controlsNeedingNonAnimatedLayout;
@property (retain, nonatomic, setter=_setExpandedMenuButton:) CAMExpandableMenuButton *_expandedMenuButton;
@property (nonatomic, setter=_setExpandedMenuButtonTappableInsets:) struct UIEdgeInsets _expandedMenuButtonTappableInsets;
@property (nonatomic, readonly) long long _mode;
@property (weak, nonatomic) id <CAMControlVisibilityUpdateDelegate> visibilityUpdateDelegate;
@property (nonatomic) long long style;
@property (nonatomic) long long backgroundStyle;
@property (retain, nonatomic) CAMFlashButton *flashButton;
@property (retain, nonatomic) CAMElapsedTimeView *elapsedTimeView;
@property (retain, nonatomic) CAMHDRButton *HDRButton;
@property (retain, nonatomic) CAMFlipButton *flipButton;
@property (retain, nonatomic) CAMFilterButton *filterButton;
@property (retain, nonatomic) CEKApertureButton *apertureButton;
@property (retain, nonatomic) CAMIntensityButton *intensityButton;
@property (retain, nonatomic) CAMTimerButton *timerButton;
@property (retain, nonatomic) CAMLivePhotoButton *livePhotoButton;
@property (retain, nonatomic) CAMMessagesPhotosButton *photosButton;
@property (retain, nonatomic) PUReviewScreenDoneButton *doneButton;
@property (retain, nonatomic) CAMFramerateIndicatorView *framerateIndicatorView;
@property (nonatomic) long long orientation;
@property (nonatomic, readonly, getter=isFloating) _Bool floating;

+ (_Bool)isFloatingStyle:(long long)arg1;

- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)setStyle:(long long)arg1 animated:(_Bool)arg2;
- (void)setBackgroundStyle:(long long)arg1 animated:(_Bool)arg2;
- (void)apertureButtonNeedsLayout:(id)arg1 animated:(_Bool)arg2;
- (id)touchingRecognizersToCancel;
- (id)hudItemForAccessibilityHUDManager:(id)arg1;
- (void)selectedByAccessibilityHUDManager:(id)arg1;
- (double)_opacityForBackgroundStyle:(long long)arg1;
- (struct CGRect)expandedFrameForMenuButton:(id)arg1;
- (struct CGRect)collapsedFrameForMenuButton:(id)arg1;
- (void)_updateControlVisibilityAnimated:(_Bool)arg1;
- (void)_iterateViewsInHUDManager:(id)arg1 forHUDItem:(CDUnknownBlockType)arg2;
- (void)collapseMenuButton:(id)arg1 animated:(_Bool)arg2;
- (void)expandMenuButton:(id)arg1 animated:(_Bool)arg2;
- (void)configureForMode:(long long)arg1;
- (_Bool)_shouldExpandButtonsHorizontally;
- (void)configureForMode:(long long)arg1 animated:(_Bool)arg2;
- (_Bool)shouldHideFlashButtonForGraphConfiguration:(id)arg1;
- (_Bool)shouldHideHDRButtonForGraphConfiguration:(id)arg1;
- (_Bool)shouldHideElapsedTimeViewForGraphConfiguration:(id)arg1;
- (_Bool)shouldHideLivePhotoButtonForGraphConfiguration:(id)arg1;
- (_Bool)shouldHideFlipButtonForGraphConfiguration:(id)arg1;
- (_Bool)shouldHidePhotosButtonForGraphConfiguration:(id)arg1;
- (_Bool)shouldHideDoneButtonForGraphConfiguration:(id)arg1;
- (_Bool)shouldHideFilterButtonForGraphConfiguration:(id)arg1;
- (_Bool)shouldHideApertureButtonForGraphConfiguration:(id)arg1;
- (_Bool)shouldHideIntensityButtonForGraphConfiguration:(id)arg1;
- (_Bool)shouldHideFramerateIndicatorForGraphConfiguration:(id)arg1;
- (_Bool)shouldHideTimerButtonForGraphConfiguration:(id)arg1;
- (void)_commonCAMTopBarInitialization;
- (void)_layoutDefaultStyle;
- (void)_layoutFloatingStyle;
- (void)_layoutFloatingRecordingStyle;
- (double)_backgroundCornerRadiusForStyle:(long long)arg1;
- (_Bool)_backgroundMasksToBoundsForStyle:(long long)arg1;
- (void)_layoutControls:(id)arg1 apply:(_Bool)arg2 withExpandedMenuButton:(id)arg3 collapsingMenuButton:(id)arg4 collapsingFrame:(struct CGRect *)arg5;
- (double)_interpolatedFloatingBarHeight;
- (void)_computeHorizontalLayoutForViewsBetweenLeftView:(id)arg1 rightView:(id)arg2 views:(id)arg3 alignmentRects:(id)arg4;
- (void)_setMode:(long long)arg1 style:(long long)arg2 animationDuration:(double)arg3 animationOptions:(unsigned long long)arg4;
- (id)_allowedControlsForStillImageMode;
- (id)_allowedControlsForPortraitMode;
- (id)_allowedControlsForSquareMode;
- (id)_allowedControlsForVideoMode;
- (id)_allowedControlsForPanoramaMode;
- (id)_allowedControlsForTimelapseMode;
- (id)_allowedControlsForMode:(long long)arg1 style:(long long)arg2;
- (_Bool)_shouldHideSubview:(id)arg1;

@end
