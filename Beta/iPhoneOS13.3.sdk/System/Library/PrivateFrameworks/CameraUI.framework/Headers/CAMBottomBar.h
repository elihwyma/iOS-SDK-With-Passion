/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <UIKit/UIView.h>

@class CAMCreativeCameraButton, CAMExpandableMenuButton, CAMFlashButton, CAMFlipButton, CAMHDRButton, CAMImageWell, CAMLivePhotoButton, CAMModeDial, CAMTimerButton, CAMUtilityBar, CEKApertureButton, CUShutterButton, PUReviewScreenDoneButton, UIButton;

@protocol CAMControlVisibilityUpdateDelegate;

@interface CAMBottomBar : UIView

{
    long long _layoutStyle;
    long long _backgroundStyle;
    UIView *_backgroundView;
    id <CAMControlVisibilityUpdateDelegate> _visibilityUpdateDelegate;
    CUShutterButton *_shutterButton;
    CUShutterButton *_stillDuringVideoButton;
    CAMModeDial *_modeDial;
    CAMImageWell *_imageWell;
    UIButton *_reviewButton;
    CAMCreativeCameraButton *_creativeCameraButton;
    PUReviewScreenDoneButton *_doneButton;
    CAMFlipButton *_flipButton;
    CAMFlashButton *_flashButton;
    CAMHDRButton *_HDRButton;
    CAMTimerButton *_timerButton;
    CAMLivePhotoButton *_livePhotoButton;
    CEKApertureButton *_apertureButton;
    CAMUtilityBar *_utilityBar;
    double _utilityBarExtensionDistance;
    CAMExpandableMenuButton *__expandedMenuButton;
}

@property (retain, nonatomic, setter=_setExpandedMenuButton:) CAMExpandableMenuButton *_expandedMenuButton;
@property (nonatomic) long long layoutStyle;
@property (nonatomic) long long backgroundStyle;
@property (nonatomic, readonly) UIView *backgroundView;
@property (weak, nonatomic) id <CAMControlVisibilityUpdateDelegate> visibilityUpdateDelegate;
@property (retain, nonatomic) CUShutterButton *shutterButton;
@property (retain, nonatomic) CUShutterButton *stillDuringVideoButton;
@property (retain, nonatomic) CAMModeDial *modeDial;
@property (retain, nonatomic) CAMImageWell *imageWell;
@property (retain, nonatomic) UIButton *reviewButton;
@property (retain, nonatomic) CAMCreativeCameraButton *creativeCameraButton;
@property (retain, nonatomic) PUReviewScreenDoneButton *doneButton;
@property (retain, nonatomic) CAMFlipButton *flipButton;
@property (retain, nonatomic) CAMFlashButton *flashButton;
@property (retain, nonatomic) CAMHDRButton *HDRButton;
@property (retain, nonatomic) CAMTimerButton *timerButton;
@property (retain, nonatomic) CAMLivePhotoButton *livePhotoButton;
@property (retain, nonatomic) CEKApertureButton *apertureButton;
@property (retain, nonatomic) CAMUtilityBar *utilityBar;
@property (nonatomic) double utilityBarExtensionDistance;

+ (_Bool)wantsVerticalBarForLayoutStyle:(long long)arg1;
+ (struct CGRect)shutterButtonAlignmentRectInBounds:(struct CGRect)arg1 forLayoutStyle:(long long)arg2;

- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)setBackgroundStyle:(long long)arg1 animated:(_Bool)arg2;
- (id)initWithLayoutStyle:(long long)arg1;
- (void)apertureButtonNeedsLayout:(id)arg1 animated:(_Bool)arg2;
- (id)touchingRecognizersToCancel;
- (id)hudItemForAccessibilityHUDManager:(id)arg1;
- (void)selectedByAccessibilityHUDManager:(id)arg1;
- (void)_commonCAMBottomBarInitializationInitWithLayoutStyle:(long long)arg1;
- (void)_updateImageWellTappableEdgeInsets;
- (void)_updateFlipButtonTappableEdgeInsets;
- (void)_updateCreativeCameraButtonTappableEdgeInsets;
- (void)_ensureSubviewOrdering;
- (double)_opacityForBackgroundStyle:(long long)arg1;
- (void)_layoutShutterButtonForLayoutStyle:(long long)arg1;
- (void)_layoutStillDuringVideoButtonForLayoutStyle:(long long)arg1;
- (void)_layoutImageWellForLayoutStyle:(long long)arg1;
- (void)_layoutReviewButtonForLayoutStyle:(long long)arg1;
- (void)_layoutCreativeCameraButtonForLayoutStyle:(long long)arg1;
- (void)_layoutModeDialForLayoutStyle:(long long)arg1;
- (void)_layoutFlipButtonForLayoutStyle:(long long)arg1;
- (void)_layoutUtilityBarForLayoutStyle:(long long)arg1;
- (void)_layoutDoneButtonForLayoutStyle:(long long)arg1;
- (id)_currentMenuButtons;
- (void)_layoutMenuButtons:(id)arg1 apply:(_Bool)arg2 withExpandedMenuButton:(id)arg3 collapsingMenuButton:(id)arg4 collapsingFrame:(struct CGRect *)arg5;
- (struct CGRect)expandedFrameForMenuButton:(id)arg1;
- (struct CGRect)collapsedFrameForMenuButton:(id)arg1;
- (void)_updateControlVisibilityAnimated:(_Bool)arg1;
- (void)_iterateViewsInHUDManager:(id)arg1 forHUDItem:(CDUnknownBlockType)arg2;
- (void)collapseMenuButton:(id)arg1 animated:(_Bool)arg2;
- (void)expandMenuButton:(id)arg1 animated:(_Bool)arg2;

@end
