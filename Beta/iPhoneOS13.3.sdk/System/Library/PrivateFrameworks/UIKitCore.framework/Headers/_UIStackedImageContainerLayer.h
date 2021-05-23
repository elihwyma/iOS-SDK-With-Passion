/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <QuartzCore/CALayer.h>

#import <UIKitCore/Swift-Protocol.h>

@class CATransformLayer, NSArray, NSString, UIView, _UIStackedImageConfiguration, _UIStackedImageLayerDelegate;

@protocol UINamedLayerStack;

@interface _UIStackedImageContainerLayer : CALayer <Swift>

{
    _Bool _animatingToNormalState;
    _Bool _animatingStateChange;
    double _selectionStartTime;
    double _selectionDuration;
    long long _selectionStyle;
    double _idleModeFocusSizeOffset;
    struct CGSize _radiosityImageScale;
    _Bool _radiosityNeedsLayout;
    double _scale;
    NSString *_imageStackContentsGravity;
    double _radiosityRequestTime;
    double _rotationAmount;
    struct CGPoint _translationOffset;
    double _maximumParallaxDepth;
    _Bool _nonOpaqueShadow;
    _Bool _singleLayerNoMask;
    _Bool _layerStackSupportsInflation;
    _Bool _layerStackInflated;
    unsigned long long _layerStackInflationSeed;
    _Bool _deferredInflationPending;
    id _flatImage;
    NSArray *_parallaxImages;
    NSArray *_parallaxLayerDepths;
    CALayer *_imageLayersContainer;
    NSArray *_imageLayers;
    CALayer *_flatLayer;
    CALayer *_maskLayer;
    CALayer *_radiosityLayer;
    CALayer *_selectedPlaceholderLayer;
    CALayer *_shadowLayer;
    CALayer *_unfocusedShadowLayer;
    CALayer *_specularLayer;
    CALayer *_cursorLayer;
    CALayer *_cursorLayerContainer;
    CALayer *_focusKeylineStrokeLayer;
    CALayer *_overlayLayer;
    CALayer *_overlayContainerLayer;
    CALayer *_unmaskedOverlayLayer;
    CALayer *_unmaskedOverlayContainerLayer;
    CATransformLayer *_imagePerspectiveTransformLayer;
    CATransformLayer *_imageRotationTransformLayer;
    CATransformLayer *_maskPerspectiveTransformLayer;
    CATransformLayer *_maskRotationTransformLayer;
    CATransformLayer *_unmaskedOverlayPerspectiveTransformLayer;
    CATransformLayer *_unmaskedOverlayRotationTransformLayer;
    CATransformLayer *_cursorRotationTransformLayer;
    CALayer *_frontmostPerspectiveTransformLayer;
    CATransformLayer *_frontmostRotationTransformLayer;
    _UIStackedImageLayerDelegate *_layoutDelegate;
    UIView *_animationView;
    _UIStackedImageConfiguration *_configuration;
    id <UINamedLayerStack> _layerStack;
    unsigned long long _controlState;
    struct CGPoint _focusDirection;
}

@property (retain, nonatomic) _UIStackedImageConfiguration *configuration;
@property (retain, nonatomic) id <UINamedLayerStack> layerStack;
@property (nonatomic) unsigned long long controlState;
@property (nonatomic, getter=isPressed) _Bool pressed;
@property (nonatomic, getter=isSelected) _Bool selected;
@property (nonatomic) struct CGPoint focusDirection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_layerStackObservingKeys;
+ (struct CGSize)_scaledSizeForSize:(struct CGSize)arg1 focusSizeIncrease:(double)arg2 selectionStyle:(long long)arg3;

- (id)init;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setBounds:(struct CGRect)arg1;
- (_Bool)_isSelected;
- (_Bool)_isHighlighted;
- (_Bool)_isFocused;
- (void)removeAllAnimations;
- (void)setRasterizationScale:(double)arg1;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (void)setContentsScale:(double)arg1;
- (void)setControlState:(unsigned long long)arg1 animated:(_Bool)arg2;
- (double)_unfocusedShadowRadius;
- (long long)_selectionStyle;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)layoutSublayers;
- (id)_contentLayers;
- (void)_updateShadowWithAnimationCoordinator:(id)arg1;
- (void)_updateSpecularLayerContents;
- (void)_setDefaultParallaxLayerDepths;
- (void)_updateNonOpaqueShadowStateFromLayerStack;
- (id)_preferredLayoutDelegateForLayer:(id)arg1;
- (struct CGRect)_positionAndSizeForLayerImage:(id)arg1;
- (struct CGRect)_displayFrameForModelFrame:(struct CGRect)arg1;
- (struct CGRect)_cursorBounds;
- (void)_updateShadowBounds;
- (void)_updateShadowPositionWithOffset:(struct CGPoint)arg1;
- (void)_updateOverlayLayout;
- (_Bool)_isFocusedOrFocusedIdle;
- (void)_updateLayerForSelection;
- (_Bool)_radiosityEnabled;
- (void)_layoutRadiosityLayer;
- (struct CGSize)_scaledSizeForCurrentState;
- (void)_updateCornerRadiusFromConfig;
- (void)_updateRadiosityFromLayerStack;
- (void)_setFlatImage:(id)arg1;
- (void)_updateSingleLayerNoMaskFromLayerStack;
- (void)_setImageStackContentsGravity:(id)arg1;
- (void)_setupFrontmostTransformLayers;
- (void)_resetAnimatingToNormalState;
- (void)_setParallaxImages:(id)arg1;
- (_Bool)_isNormal;
- (void)_setLayerStackInflated:(_Bool)arg1 seed:(unsigned long long)arg2;
- (_Bool)_aspectMatchesLayerStack;
- (struct CATransform3D)_scaleTransformForCurrentState;
- (struct CATransform3D)_specularTransformForCurrentState;
- (void)_setControlState:(unsigned long long)arg1 animated:(_Bool)arg2 focusAnimationCoordinator:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (unsigned long long)_primaryControlStateForState:(unsigned long long)arg1;
- (struct CGSize)_roundedBoundsSize;
- (struct CGSize)_focusCursorInsetSizeForSize:(struct CGSize)arg1;
- (void)_applyFocusDirectionTransform;
- (void)_deselect;
- (void)_showImageLayers;
- (double)_focusedScaleFactorForCurrentBounds;
- (void)_updateImageLayerFilterChains;
- (void)_updateLayerForSelectionWithAnimationCoordinator:(id)arg1;
- (void)setPressed:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setPressed:(_Bool)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2 focusAnimationCoordinator:(id)arg3;
- (void)setControlState:(unsigned long long)arg1 animated:(_Bool)arg2 focusAnimationCoordinator:(id)arg3;
- (void)_setFocusDirection:(struct CGPoint)arg1 duration:(double)arg2;
- (_Bool)_isFocusedIdle;
- (double)_idleModeFocusSizeOffset;
- (void)_removeLayerFromSuperlayer:(id)arg1;
- (void)_wrapLayerInView:(id)arg1;
- (void)_applyFocusDirectionTransformWithAnimationCoordinator:(id)arg1;
- (struct CGImage *)_cgImageForLayeredImage:(id)arg1;
- (struct CGPoint)_layerStackToDisplayScaleFactor;
- (id)_imageStackContentsGravity;
- (void)_updatePerspective;
- (void)_updateRotationAndTranslation:(id)arg1;
- (void)_updateFocusKeylineStrokeScale;
- (void)_updateFullBleedImageLayers;
- (void)_updateNormalImageLayers;
- (void)_updateContentProviderLayerFocusDirection;
- (void)_updateImageLayerFilterValues;
- (void)_updateOverlayContainerLayerHierarchy:(_Bool)arg1;
- (id)_randomImage;
- (struct CATransform3D)_perspectiveTransformForCurrentState;
- (struct CATransform3D)_rotationTransformForCurrentFocusDirection;
- (void)_updateFocusKeylineStrokeTranslation:(struct CGPoint)arg1;
- (void)_updateSpecularLayerContentsRect;
- (struct CATransform3D)_fixedFrameTransformForDepth:(double)arg1 fudgeFactor:(double)arg2;
- (double)_focusedShadowRadius;
- (double)_getShadowOpacity;
- (_Bool)_configuredForNonOpaqueShadow;
- (void)setFocusDirection:(struct CGPoint)arg1 animated:(_Bool)arg2;
- (id)_imageLayersContainer;
- (id)_layerBelowTitles;
- (id)_flatLayer;
- (id)_shadowLayer;
- (void)_setSelectionStyle:(long long)arg1;
- (id)_overlayLayer;
- (void)_setOverlayLayer:(id)arg1;
- (id)_unmaskedOverlayLayer;
- (void)_setUnmaskedOverlayLayer:(id)arg1;
- (id)_parallaxLayerDepths;
- (void)_setParallaxLayerDepths:(id)arg1;
- (void)_setIdleModeFocusSizeOffset:(double)arg1;

@end
