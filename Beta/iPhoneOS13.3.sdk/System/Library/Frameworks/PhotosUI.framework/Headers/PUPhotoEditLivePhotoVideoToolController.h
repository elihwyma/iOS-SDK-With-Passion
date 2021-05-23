/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUPhotoEditToolController.h>

@class NSLayoutConstraint, NSMutableArray, NSString, PUTrimToolController, UIButton, UILabel, UIView, _UIBackdropView;

__attribute__((visibility("hidden")))
@interface PUPhotoEditLivePhotoVideoToolController : PUPhotoEditToolController

{
    _UIBackdropView *_backdropBackgroundView;
    UIView *_solidBackgroundView;
    UIView *_containerView;
    NSLayoutConstraint *_viewHeightConstraint;
    NSLayoutConstraint *_leadingWidthConstraint;
    NSLayoutConstraint *_trailingWidthConstraint;
    NSMutableArray *_constraints;
    PUTrimToolController *_trimController;
    UIButton *_muteLivePhotoButton;
    UIButton *_livePhotoButton;
    UILabel *_videoLabelView;
    _Bool _trimControllerVisible;
    _Bool _viewHasAppeared;
    _Bool _trimControllerScrubberNeedsVisualUpdate;
    CDStruct_1b6d18a9 _originalStillImageTime;
    _Bool _useTranslucentBackground;
    long long _layoutType;
    UIView *_primaryView;
    double _horizontalControlPadding;
    double _horizontalPrimaryViewPaddingOffset;
    double _verticalButtonOffset;
}

@property (nonatomic) long long layoutType;
@property (retain, nonatomic) UIView *primaryView;
@property (nonatomic) double horizontalControlPadding;
@property (nonatomic, readonly) double horizontalPrimaryViewPaddingOffset;
@property (nonatomic) double verticalButtonOffset;
@property (nonatomic) _Bool useTranslucentBackground;
@property (nonatomic, readonly) UIButton *livePhotoButton;
@property (nonatomic, readonly) PUTrimToolController *trimController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)localizedName;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (void)setBackdropViewGroupName:(id)arg1;
- (void)updateViewConstraints;
- (void)setPlaceholderImage:(id)arg1;
- (void)_invalidateConstraints;
- (_Bool)wantsSecondaryToolbarVisible;
- (void)_updateBackgroundAnimated:(_Bool)arg1;
- (void)setUseGradientBackground:(_Bool)arg1 animated:(_Bool)arg2;
- (id)toolbarIcon;
- (id)centerToolbarView;
- (_Bool)canResetToDefaultValue;
- (_Bool)wantsZoomAndPanEnabled;
- (void)willBecomeActiveTool;
- (long long)toolControllerTag;
- (void)compositionControllerDidChangeForAdjustments:(id)arg1;
- (void)baseLivePhotoInvalidated;
- (void)setLayoutOrientation:(long long)arg1 withTransitionCoordinator:(id)arg2;
- (id)leadingToolbarViews;
- (id)accessibilityHUDItemForButton:(id)arg1;
- (void)trimToolControllerDidChange:(id)arg1 state:(unsigned long long)arg2;
- (void)setOriginalStillImageTime:(CDStruct_1b6d18a9)arg1;
- (void)updateForIncomingAnimation;
- (void)photoEditLivePhotoModelUpdated;
- (_Bool)_isTrimAllowed;
- (_Bool)_wantsTrimControl;
- (void)_updateTrimControl;
- (id)makeTrimToolController;
- (void)_invalidateTrimControlScrubberThumbnails;
- (void)videoRenderingChanged;
- (void)_handleMuteLivePhotoButton:(id)arg1;
- (void)reloadToolbarButtons:(_Bool)arg1;
- (void)updateToolbarButtonsAnimated:(_Bool)arg1;
- (void)_updateLivePhotoButtonAnimated:(_Bool)arg1;
- (void)_updateMuteButtonAnimated:(_Bool)arg1;
- (void)_handleLivePhotoButton:(id)arg1;
- (void)_updateLivePhotoButton:(id)arg1;

@end
