/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUPhotoEditToolController.h>

#import <PhotosUI/Swift-Protocol.h>

@class CEKApertureButton, CEKLightingControl, CEKLightingNameBadge, CEKSlider, NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, PFCoalescer, PUPhotoEditApertureToolbar, UIButton, UIView, _PULightingGradientView;

__attribute__((visibility("hidden")))
@interface PUPhotoEditPortraitToolController : PUPhotoEditToolController <Swift>

{
    CEKApertureButton *_apertureButton;
    UIView *_apertureButtonContainer;
    UIButton *_lightingIntensityButton;
    UIView *_lightingContainer;
    UIView *_apertureContainer;
    NSMutableArray *_containerConstraints;
    long long _initialLightingType;
    double _initialLightingIntensity;
    UIButton *_depthToolbarButton;
    _PULightingGradientView *_lightingGradient;
    CEKLightingNameBadge *_lightingNameBadge;
    NSArray *_lightingNameBadgeConstraints;
    NSArray *_lightingControlConstraints;
    CEKSlider *_lightingSlider;
    PUPhotoEditApertureToolbar *_apertureToolbar;
    PFCoalescer *_apertureUpdateCoalescer;
    NSMutableArray *_toolConstraints;
    NSDictionary *_cachedPortraitEffectSettings;
    _Bool _isStageLightEnabled;
    double _majorVersion;
    double _minorVersion;
    NSMutableDictionary *_lightingIntensityCache;
    CEKLightingControl *_lightingControl;
    long long _toolSelection;
}

@property (nonatomic, readonly) PUPhotoEditApertureToolbar *apertureToolbar;
@property (nonatomic, readonly) CEKLightingControl *lightingControl;
@property (nonatomic) long long toolSelection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)localizedName;
- (void)viewDidLoad;
- (void)setBackdropViewGroupName:(id)arg1;
- (void)updateViewConstraints;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (_Bool)wantsSecondaryToolbarVisible;
- (void)sliderWillBeginScrolling:(id)arg1;
- (void)sliderDidScroll:(id)arg1;
- (void)sliderWillEndScrolling:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)sliderDidEndScrolling:(id)arg1;
- (void)lightingControl:(id)arg1 willChangeExpanded:(_Bool)arg2;
- (void)lightingControlDidChangeExpanded:(id)arg1;
- (void)lightingControlDidChangeSelectedLightingType:(id)arg1;
- (void)setupWithAsset:(id)arg1 compositionController:(id)arg2 editSource:(id)arg3 overcaptureEditSource:(id)arg4 valuesCalculator:(id)arg5;
- (id)toolbarIcon;
- (id)centerToolbarView;
- (_Bool)canResetToDefaultValue;
- (_Bool)wantsZoomAndPanEnabled;
- (_Bool)installTogglePreviewGestureRecognizer:(id)arg1;
- (_Bool)installLivePhotoPlaybackGestureRecognizer:(id)arg1;
- (void)willBecomeActiveTool;
- (long long)toolControllerTag;
- (void)compositionControllerDidChangeForAdjustments:(id)arg1;
- (void)setLayoutOrientation:(long long)arg1 withTransitionCoordinator:(id)arg2;
- (id)leadingToolbarViews;
- (void)apertureToolbar:(id)arg1 didChangeValue:(double)arg2;
- (_Bool)apertureToolbarShouldRotateLabelsWithOrientation:(id)arg1;
- (void)_updateToolContainerConstraints;
- (void)_updateToolConstraints;
- (_Bool)_canRenderPortraitEffect;
- (void)setToolSelection:(long long)arg1 animated:(_Bool)arg2;
- (void)_updateToolVisibilityAnimated:(_Bool)arg1;
- (void)_updateApertureSliderLength;
- (_Bool)_shouldShowPortraitV2;
- (void)_refreshFromValuesCalculator;
- (_Bool)_setupDepthControlsIfNeeded;
- (_Bool)_setupLightingControlsIfNeeded;
- (_Bool)_setupApertureControlsIfNeeded;
- (void)_handlePortraitNavigationButtons:(id)arg1;
- (void)_updateNavigationButtonsAnimated:(_Bool)arg1;
- (void)_refreshLightingWithCompositionController:(id)arg1;
- (void)_updateLightingSliderAnimated:(_Bool)arg1;
- (void)_handleDepthEffectButton:(id)arg1;
- (id)_depthButtonTitle;
- (id)accessibilityHUDItemForButton:(id)arg1;
- (void)_setShowLightingControl:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setPhotoEditSpec:(id)arg1;
- (void)_updateLabelOrientation;
- (void)_updateLightingNameBadgeForOrientation:(long long)arg1 expanded:(_Bool)arg2;
- (void)_updateCompositionWithApertureValue;
- (void)_updateCompositionWithLightingIntensity;
- (void)_updateIntensityForLightingType:(long long)arg1;
- (void)_updateLightingIntensityCache;

@end
