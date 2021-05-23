/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <PrototypeTools/PTSettings.h>

@class PTOutlet, SBFFluidBehaviorSettings, SBMedusa1oSettings;

@interface SBMedusaSettings : PTSettings

{
    _Bool _persistentDock;
    _Bool _statusBarDebugBackgroundColorsEnabled;
    _Bool _statusBarDebugOffsettingEnabled;
    SBMedusa1oSettings *_medusa1oSettings;
    double _numberOfRecents;
    double _dismissHitTestTopPadding;
    SBFFluidBehaviorSettings *_dockAnimationSettings;
    SBFFluidBehaviorSettings *_dockWithPresentedFolderAnimationSettings;
    double _diffuseShadowOpacity;
    double _horizontalDiffuseShadowOffset;
    double _verticalDiffuseShadowOffset;
    double _diffuseShadowRadius;
    double _rimShadowOpacity;
    double _rimShadowRadius;
    double _narrowEdgeSwipeHitTestWidth;
    double _wideEdgeSwipeHitTestWidth;
    double _coronaDiffuseShadowOpacity;
    double _coronaRimShadowOpacity;
    double _blurFadeAnimationDuration;
    double _reduceMotionBlurFadeAnimationDuration;
    SBFFluidBehaviorSettings *_medusaAnimationSettings;
    SBFFluidBehaviorSettings *_resizeAnimationSettings;
    SBFFluidBehaviorSettings *_platterAnimationSettings;
    double _dropAnimationUnblurThresholdPercentage;
    double _movePanGestureThresholdPercentage;
    double _movePanGesturePositiveVelocityThreshold;
    double _movePanGestureNegativeVelocityThreshold;
    double _iconPlatterScale;
    double _windowPlatterScale;
    double _draggingPlatterSideActivationGutterPadding;
    double _draggingPlatterFullscreenActivationRegionWidth;
    double _draggingPlatterFullscreenActivationRegionHeight;
    double _contentDraggingCommandeerGutterWidth;
    double _contentDraggingSideActivationGutterWidth;
    double _contentDraggingFloatingActivationGutterWidth;
    double _windowTearOffDraggingSideActivationGutterWidth;
    double _windowTearOffDraggingFloatingActivationGutterWidth;
    PTOutlet *_killSpringBoardOutlet;
    double _cornerRadiusForInnerCorners;
    double _cornerRadiusForCompatibilityAppOuterCorners;
    double _cornerRadiusForFloatingApps;
    double _cornerRadiusFallbackForOldApps;
    double _vibrantColorMatrixM11;
    double _vibrantColorMatrixM12;
    double _vibrantColorMatrixM13;
    double _vibrantColorMatrixM14;
    double _vibrantColorMatrixM15;
    double _vibrantColorMatrixM21;
    double _vibrantColorMatrixM22;
    double _vibrantColorMatrixM23;
    double _vibrantColorMatrixM24;
    double _vibrantColorMatrixM25;
    double _vibrantColorMatrixM31;
    double _vibrantColorMatrixM32;
    double _vibrantColorMatrixM33;
    double _vibrantColorMatrixM34;
    double _vibrantColorMatrixM35;
    double _vibrantColorMatrixM41;
    double _vibrantColorMatrixM42;
    double _vibrantColorMatrixM43;
    double _vibrantColorMatrixM44;
    double _vibrantColorMatrixM45;
}

@property (nonatomic) double vibrantColorMatrixM11;
@property (nonatomic) double vibrantColorMatrixM12;
@property (nonatomic) double vibrantColorMatrixM13;
@property (nonatomic) double vibrantColorMatrixM14;
@property (nonatomic) double vibrantColorMatrixM15;
@property (nonatomic) double vibrantColorMatrixM21;
@property (nonatomic) double vibrantColorMatrixM22;
@property (nonatomic) double vibrantColorMatrixM23;
@property (nonatomic) double vibrantColorMatrixM24;
@property (nonatomic) double vibrantColorMatrixM25;
@property (nonatomic) double vibrantColorMatrixM31;
@property (nonatomic) double vibrantColorMatrixM32;
@property (nonatomic) double vibrantColorMatrixM33;
@property (nonatomic) double vibrantColorMatrixM34;
@property (nonatomic) double vibrantColorMatrixM35;
@property (nonatomic) double vibrantColorMatrixM41;
@property (nonatomic) double vibrantColorMatrixM42;
@property (nonatomic) double vibrantColorMatrixM43;
@property (nonatomic) double vibrantColorMatrixM44;
@property (nonatomic) double vibrantColorMatrixM45;
@property (retain, nonatomic) SBMedusa1oSettings *medusa1oSettings;
@property (nonatomic) _Bool persistentDock;
@property (nonatomic) double numberOfRecents;
@property (nonatomic) double dismissHitTestTopPadding;
@property (retain, nonatomic) SBFFluidBehaviorSettings *dockAnimationSettings;
@property (retain, nonatomic) SBFFluidBehaviorSettings *dockWithPresentedFolderAnimationSettings;
@property (nonatomic) double diffuseShadowOpacity;
@property (nonatomic) double horizontalDiffuseShadowOffset;
@property (nonatomic) double verticalDiffuseShadowOffset;
@property (nonatomic) double diffuseShadowRadius;
@property (nonatomic) double rimShadowOpacity;
@property (nonatomic) double rimShadowRadius;
@property (nonatomic) double narrowEdgeSwipeHitTestWidth;
@property (nonatomic) double wideEdgeSwipeHitTestWidth;
@property (nonatomic) double coronaDiffuseShadowOpacity;
@property (nonatomic) double coronaRimShadowOpacity;
@property (nonatomic) double blurFadeAnimationDuration;
@property (nonatomic) double reduceMotionBlurFadeAnimationDuration;
@property (retain, nonatomic) SBFFluidBehaviorSettings *medusaAnimationSettings;
@property (retain, nonatomic) SBFFluidBehaviorSettings *resizeAnimationSettings;
@property (retain, nonatomic) SBFFluidBehaviorSettings *platterAnimationSettings;
@property (nonatomic) double dropAnimationUnblurThresholdPercentage;
@property (nonatomic) double movePanGestureThresholdPercentage;
@property (nonatomic) double movePanGesturePositiveVelocityThreshold;
@property (nonatomic) double movePanGestureNegativeVelocityThreshold;
@property (nonatomic) double iconPlatterScale;
@property (nonatomic) double windowPlatterScale;
@property (nonatomic) double draggingPlatterSideActivationGutterPadding;
@property (nonatomic) double draggingPlatterFullscreenActivationRegionWidth;
@property (nonatomic) double draggingPlatterFullscreenActivationRegionHeight;
@property (nonatomic) double contentDraggingCommandeerGutterWidth;
@property (nonatomic) double contentDraggingSideActivationGutterWidth;
@property (nonatomic) double contentDraggingFloatingActivationGutterWidth;
@property (nonatomic) double windowTearOffDraggingSideActivationGutterWidth;
@property (nonatomic) double windowTearOffDraggingFloatingActivationGutterWidth;
@property (retain, nonatomic) PTOutlet *killSpringBoardOutlet;
@property (nonatomic) double cornerRadiusForInnerCorners;
@property (nonatomic) double cornerRadiusForCompatibilityAppOuterCorners;
@property (nonatomic) double cornerRadiusForFloatingApps;
@property (nonatomic) double cornerRadiusFallbackForOldApps;
@property (nonatomic) _Bool statusBarDebugBackgroundColorsEnabled;
@property (nonatomic) _Bool statusBarDebugOffsettingEnabled;

+ (id)settingsControllerModule;

- (void)setDefaultValues;
- (struct CAColorMatrix)coronaVibrantColorMatrixInput;
- (double)effectiveBlurFadeAnimationDuration;

@end
