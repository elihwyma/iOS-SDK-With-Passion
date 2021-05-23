/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <UIKit/UIView.h>

@class CAMBottomBar, CAMBurstIndicatorView, CAMDisabledModeOverlayView, CAMElapsedTimeView, CAMFilterNameBadge, CAMFlashBadge, CAMFlipButton, CAMFocusLockBadge, CAMFramerateIndicatorView, CAMHDRBadge, CAMLivePhotoBadge, CAMPanoramaView, CAMPortraitModeDescriptionOverlayView, CAMPortraitModeInstructionLabel, CAMPreviewContainerMaskingView, CAMPreviewView, CAMQRCodeInstructionLabel, CAMShallowDepthOfFieldBadge, CAMShutterIndicatorView, CAMTimerIndicatorView, CAMTopBar, CAMViewfinderFlipTransition, CAMViewfinderOpenAndCloseTransition, CAMZoomControl, CAMZoomSlider, CEKLightingControl, CEKLightingNameBadge, CUShutterButton, NSArray, NSString;

@protocol CAMControlVisibilityDelegate;

@interface CAMViewfinderView : UIView

{
    _Bool _useCreativeControls;
    _Bool _automaticallyAdjustsTopBarOrientation;
    long long _layoutStyle;
    id <CAMControlVisibilityDelegate> _visibilityDelegate;
    CAMPreviewView *_previewView;
    CAMTopBar *_topBar;
    CAMBottomBar *_bottomBar;
    CUShutterButton *_shutterButton;
    CAMFlipButton *_flipButton;
    NSArray *_visibleTopBadges;
    CAMFlashBadge *_flashBadge;
    CAMHDRBadge *_HDRBadge;
    CAMFocusLockBadge *_focusAndExposureLockBadge;
    CAMLivePhotoBadge *_livePhotoBadge;
    CAMShallowDepthOfFieldBadge *_shallowDepthOfFieldBadge;
    CAMPortraitModeInstructionLabel *_portraitModeInstructionLabel;
    CAMPortraitModeDescriptionOverlayView *_portraitModeDescriptionOverlayView;
    CAMQRCodeInstructionLabel *_qrCodeInstructionLabel;
    CAMFilterNameBadge *_filterNameBadge;
    CAMShutterIndicatorView *_shutterIndicatorView;
    CAMElapsedTimeView *_elapsedTimeView;
    CAMFramerateIndicatorView *_framerateIndicatorView;
    CAMBurstIndicatorView *_burstIndicatorView;
    CAMTimerIndicatorView *_timerIndicatorView;
    CAMPanoramaView *_panoramaView;
    long long _previewViewOrientation;
    CAMZoomSlider *_zoomSlider;
    CAMZoomControl *_zoomControl;
    CEKLightingControl *_lightingControl;
    CEKLightingNameBadge *_lightingNameBadge;
    CAMDisabledModeOverlayView *_disabledModeOverlayView;
    long long _desiredAspectRatio;
    long long _maskingAspectRatio;
    long long _orientation;
    CAMPreviewContainerMaskingView *__previewContainerMaskingView;
    UIView *__previewContainerView;
    CAMViewfinderOpenAndCloseTransition *__openAndCloseTransition;
    CAMViewfinderFlipTransition *__flipTransition;
    UIView *__topBarExtensionView;
    UIView *__bottomBarExtensionView;
}

@property (nonatomic, readonly) CAMPreviewContainerMaskingView *_previewContainerMaskingView;
@property (nonatomic, readonly) UIView *_previewContainerView;
@property (retain, nonatomic, setter=_setOpenAndCloseTransition:) CAMViewfinderOpenAndCloseTransition *_openAndCloseTransition;
@property (retain, nonatomic, setter=_setFlipTransition:) CAMViewfinderFlipTransition *_flipTransition;
@property (retain, nonatomic, setter=_setTopBarExtensionView:) UIView *_topBarExtensionView;
@property (retain, nonatomic, setter=_setBottomBarExtensionView:) UIView *_bottomBarExtensionView;
@property (nonatomic) long long layoutStyle;
@property (nonatomic) _Bool useCreativeControls;
@property (weak, nonatomic) id <CAMControlVisibilityDelegate> visibilityDelegate;
@property (retain, nonatomic) CAMPreviewView *previewView;
@property (retain, nonatomic) CAMTopBar *topBar;
@property (retain, nonatomic) CAMBottomBar *bottomBar;
@property (retain, nonatomic) CUShutterButton *shutterButton;
@property (retain, nonatomic) CAMFlipButton *flipButton;
@property (retain, nonatomic) NSArray *visibleTopBadges;
@property (retain, nonatomic) CAMFlashBadge *flashBadge;
@property (retain, nonatomic) CAMHDRBadge *HDRBadge;
@property (retain, nonatomic) CAMFocusLockBadge *focusAndExposureLockBadge;
@property (retain, nonatomic) CAMLivePhotoBadge *livePhotoBadge;
@property (retain, nonatomic) CAMShallowDepthOfFieldBadge *shallowDepthOfFieldBadge;
@property (retain, nonatomic) CAMPortraitModeInstructionLabel *portraitModeInstructionLabel;
@property (retain, nonatomic) CAMPortraitModeDescriptionOverlayView *portraitModeDescriptionOverlayView;
@property (retain, nonatomic) CAMQRCodeInstructionLabel *qrCodeInstructionLabel;
@property (retain, nonatomic) CAMFilterNameBadge *filterNameBadge;
@property (retain, nonatomic) CAMShutterIndicatorView *shutterIndicatorView;
@property (retain, nonatomic) CAMElapsedTimeView *elapsedTimeView;
@property (retain, nonatomic) CAMFramerateIndicatorView *framerateIndicatorView;
@property (retain, nonatomic) CAMBurstIndicatorView *burstIndicatorView;
@property (retain, nonatomic) CAMTimerIndicatorView *timerIndicatorView;
@property (retain, nonatomic) CAMPanoramaView *panoramaView;
@property (nonatomic) long long previewViewOrientation;
@property (retain, nonatomic) CAMZoomSlider *zoomSlider;
@property (retain, nonatomic) CAMZoomControl *zoomControl;
@property (retain, nonatomic) CEKLightingControl *lightingControl;
@property (retain, nonatomic) CEKLightingNameBadge *lightingNameBadge;
@property (retain, nonatomic) CAMDisabledModeOverlayView *disabledModeOverlayView;
@property (nonatomic) long long desiredAspectRatio;
@property (nonatomic) long long maskingAspectRatio;
@property (nonatomic) long long orientation;
@property (nonatomic) _Bool automaticallyAdjustsTopBarOrientation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (Class)layerClass;

- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)setOrientation:(long long)arg1 animated:(_Bool)arg2;
- (id)initWithLayoutStyle:(long long)arg1;
- (void)badgeViewDidChangeIntrinsicContentSize:(id)arg1;
- (void)removeInflightBlurAnimations;
- (void)prepareForResumingUsingCrossfade;
- (void)instructionLabelDidChangeIntrinsicContentSize:(id)arg1;
- (void)_layoutShutterButtonForLayoutStyle:(long long)arg1;
- (void)_layoutFlipButtonForLayoutStyle:(long long)arg1;
- (void)setMaskingAspectRatio:(long long)arg1 animated:(_Bool)arg2;
- (void)setVisibleTopBadges:(id)arg1 animated:(_Bool)arg2;
- (void)prepareForAutorotation;
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1 forAspectRatio:(long long)arg2;
- (void)_commonCAMViewfinderViewInitializationWithLayoutStyle:(long long)arg1;
- (double)_multiplierForAspectRatio:(long long)arg1;
- (struct UIEdgeInsets)_layoutMarginInsetsForLayoutStyle:(long long)arg1;
- (void)_updateBarExtensionViewsIfNecessary;
- (double)_interpolatedTopBarHeight;
- (_Bool)_isAdjustingTopBarOrientationForLayoutStyle:(long long)arg1;
- (void)_topBarForLayoutForLayoutStyle:(long long)arg1 shouldAdjustTopBarOrientation:(_Bool)arg2 bounds:(struct CGRect *)arg3 center:(struct CGPoint *)arg4 transform:(struct CGAffineTransform *)arg5;
- (void)_cameraTopBarForLayoutForLayoutStyle:(long long)arg1 shouldAdjustTopBarOrientation:(_Bool)arg2 bounds:(struct CGRect *)arg3 center:(struct CGPoint *)arg4 transform:(struct CGAffineTransform *)arg5;
- (struct CGSize)_topBarSizeForLayoutStyle:(long long)arg1;
- (double)_interpolatedBottomBarWidthWithProposedWidth:(double)arg1;
- (double)_interpolatedBottomBarHeightWithProposedHeight:(double)arg1;
- (_Bool)_wantsFullScreenPreviewRegardlessOfLayoutForLayoutStyle:(long long)arg1;
- (_Bool)_wantsInterfaceOrientedPreviewForLayoutStyle:(long long)arg1;
- (struct CGSize)_previewSizeForAspectRatio:(long long)arg1;
- (struct CGRect)_cameraPreviewFrameForAspectRatio:(long long)arg1 topBarFrame:(struct CGRect)arg2 bottomBarFrame:(struct CGRect)arg3 shouldShiftPreviewForUtilityBar:(_Bool)arg4;
- (double)_badgeTrayHeightForLayoutStyle:(long long)arg1;
- (double)_interpolatedVerticalOffsetForShutterIndicator;
- (void)_layoutTopBadgesForLayoutStyle:(long long)arg1 appearingBadges:(id)arg2 disappearingBadges:(id)arg3 animated:(_Bool)arg4;
- (void)_layoutBadgeTrayForLayoutStyle:(long long)arg1 appearingBadges:(id)arg2 disappearingBadges:(id)arg3 animated:(_Bool)arg4;
- (void)_layoutBadgeForTinyLayoutStyle:(id)arg1 animated:(_Bool)arg2;
- (void)_layoutBottomCenteredView:(id)arg1 aboveView:(id)arg2 aboveViewSpacing:(double)arg3 forLayoutStyle:(long long)arg4;
- (_Bool)_shouldLayoutPortraitInstructionsAtTop;
- (void)_layoutInstructionLabelOnTop:(id)arg1 forLayoutStyle:(long long)arg2;
- (void)_layoutBadgeTrayWithBadges:(id)arg1 layoutStyle:(long long)arg2;
- (id)_viewToLayoutBadgesBelowForLayoutStyle:(long long)arg1 orientation:(long long)arg2;
- (void)_previewLayoutForAspectRatio:(long long)arg1 shouldShiftPreviewForUtilityBar:(_Bool)arg2 outPreviewBounds:(struct CGRect *)arg3 outPreviewCenter:(struct CGPoint *)arg4 outFourThreeTopBarFrame:(struct CGRect *)arg5 outBottomBarFrame:(struct CGRect *)arg6;
- (struct CGRect)_previewFrameForAspectRatio:(long long)arg1 topBarFrame:(struct CGRect)arg2 bottomBarFrame:(struct CGRect)arg3 shouldShiftPreviewForUtilityBar:(_Bool)arg4;
- (struct CGRect)_frameForBadgeTrayForLayoutStyle:(long long)arg1 orientation:(long long)arg2;
- (double)_utilityBarExtensionDistanceForLayoutStyle:(long long)arg1;
- (void)_layoutTopBarForLayoutStyle:(long long)arg1;
- (void)_layoutBarExtensionViews;
- (void)_layoutElapsedTimeViewForLayoutStyle:(long long)arg1;
- (void)_layoutShutterIndicatorForLayoutStyle:(long long)arg1;
- (void)_layoutBurstIndicatorForLayoutStyle:(long long)arg1;
- (void)_layoutTimerIndicatorViewForLayoutStyle:(long long)arg1;
- (void)_layoutFramerateIndicatorViewForLayoutStyle:(long long)arg1;
- (void)_layoutPanoramaViewForLayoutStyle:(long long)arg1;
- (void)_layoutSnapshotsOfPreviewView;
- (void)_layoutLightingControlForLayoutStyle:(long long)arg1;
- (void)_layoutDescriptionOverlayView:(id)arg1;
- (void)_layoutPortraitModeInstructionLabelForLayoutStyle:(long long)arg1;
- (void)_layoutQRCodeInstructionLabelForLayoutStyle:(long long)arg1;
- (void)_layoutTopBadgesForLayoutStyle:(long long)arg1 animated:(_Bool)arg2;
- (void)_layoutBottomBadgesForLayoutStyle:(long long)arg1;
- (void)_layoutZoomSliderForLayoutStyle:(long long)arg1;
- (void)_layoutZoomControlForLayoutStyle:(long long)arg1;
- (struct UIOffset)_previewOffset;
- (void)_cameraAppPreviewLayoutForAspectRatio:(long long)arg1 shouldShiftPreviewForUtilityBar:(_Bool)arg2 outPreviewBounds:(struct CGRect *)arg3 outPreviewCenter:(struct CGPoint *)arg4 outFourThreeTopBarFrame:(struct CGRect *)arg5 outBottomBarFrame:(struct CGRect *)arg6;
- (struct CGSize)_bottomBarSizeForLayoutStyle:(long long)arg1 withProposedSize:(struct CGSize)arg2;
- (void)_enforceBadgeSubviewOrderingWithAppearingBadges:(id)arg1;
- (void)_createPlaceholderSnapshotAndPerformDoubleSidedFadeForView:(id)arg1 fadeOutDuration:(double)arg2 fadeOutDelay:(double)arg3 fadeInDuration:(double)arg4 fadeInDelay:(double)arg5;
- (void)_createPlaceholderSnapshotAndPerformSingleSidedFadeForView:(id)arg1 fadeOutDuration:(double)arg2 fadeOutDelay:(double)arg3;

@end
