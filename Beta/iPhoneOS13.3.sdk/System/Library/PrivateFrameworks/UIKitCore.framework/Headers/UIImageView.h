/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSArray, NSString, UIColor, UIImage, UIImageSymbolConfiguration, UILayoutGuide, UITraitCollection, _UIStackedImageContainerView;

@interface UIImageView : UIView <Swift>

{
    id _storage;
    struct UIEdgeInsets _cachedEdgeInsetsForEffects;
    UITraitCollection *_lastResolvedTraitCollection;
    long long _lastResolvedLayoutDirectionTrait;
    double _previousBaselineOffsetFromBottom;
    double _previousFirstBaselineOffsetFromTop;
    struct {
        unsigned int canDrawContentIsValid:1;
        unsigned int canDrawContent:1;
    } _imageViewFlags;
    _Bool _templateSettingsAreInvalid;
    _Bool _edgeInsetsForEffectsAreValid;
    _Bool _adjustsImageWhenAncestorFocused;
    _Bool _masksFocusEffectToContents;
    _Bool __symbolImagesIgnoreAccessibilitySizes;
    _Bool __animatesContents;
    UILayoutGuide *_focusedFrameGuide;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) _Bool adjustsImageSizeForAccessibilityContentSizeCategory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) _Bool adjustsImageSizeForAccessibilityContentSizeCategory;
@property (nonatomic, setter=_setDefaultRenderingMode:) long long _defaultRenderingMode;
@property (nonatomic, readonly) struct UIEdgeInsets _edgeInsetsForEffects;
@property (nonatomic, setter=_setEdgeInsetsForEffectsAreValid:) _Bool _edgeInsetsForEffectsAreValid;
@property (nonatomic, setter=_setMasksTemplateImages:) _Bool _masksTemplateImages;
@property (nonatomic, readonly) _Bool _templateSettingsAreInvalid;
@property (nonatomic, setter=_setSymbolImagesIgnoreAccessibilitySizes:) _Bool _symbolImagesIgnoreAccessibilitySizes;
@property (retain, nonatomic, setter=_setOverridingSymbolConfiguration:) UIImageSymbolConfiguration *_overridingSymbolConfiguration;
@property (nonatomic) unsigned int drawMode;
@property (nonatomic, setter=_setTemplateImageRenderingEffects:) unsigned long long _templateImageRenderingEffects;
@property (nonatomic, setter=_setAnimatesContents:) _Bool _animatesContents;
@property (nonatomic, setter=_setLayeredImageCornerRadius:) double _layeredImageCornerRadius;
@property (nonatomic, readonly) _UIStackedImageContainerView *_layeredImageContainer;
@property (readonly) UILayoutGuide *imageContentGuide;
@property (retain, nonatomic) UIImageSymbolConfiguration *symbolConfiguration;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) UIImage *highlightedImage;
@property (retain, nonatomic) UIImageSymbolConfiguration *preferredSymbolConfiguration;
@property (nonatomic, getter=isUserInteractionEnabled) _Bool userInteractionEnabled;
@property (nonatomic, getter=isHighlighted) _Bool highlighted;
@property (copy, nonatomic) NSArray *animationImages;
@property (copy, nonatomic) NSArray *highlightedAnimationImages;
@property (nonatomic) double animationDuration;
@property (nonatomic) long long animationRepeatCount;
@property (retain, nonatomic) UIColor *tintColor;
@property (nonatomic, readonly, getter=isAnimating) _Bool animating;
@property (nonatomic) _Bool adjustsImageWhenAncestorFocused;
@property (readonly) UILayoutGuide *focusedFrameGuide;
@property (nonatomic, readonly) UIView *overlayContentView;
@property (nonatomic) _Bool masksFocusEffectToContents;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) long long semanticContentAttribute;
@property (nonatomic, readonly) long long contentMode;
@property (nonatomic, readonly) _Bool _hasContentGravity;
@property (nonatomic, readonly) double preferredContentScaleFactor;
@property (nonatomic, readonly) _Bool _layoutShouldFlipHorizontalOrientations;

+ (id)_surfacePropertiesForRenderingCIImageWithSize:(struct CGSize)arg1 pixelFormat:(unsigned int)arg2 bytesPerElement:(unsigned long long)arg3;
+ (_Bool)_canReuseIOSurface:(struct __IOSurface *)arg1 forRenderingCIImageWithIOSurfaceProperties:(id)arg2;

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (id)initWithImage:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setTranslatesAutoresizingMaskIntoConstraints:(_Bool)arg1;
- (void)setContentCompressionResistancePriority:(float)arg1 forAxis:(long long)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (unsigned long long)defaultAccessibilityTraits;
- (_Bool)isAccessibilityElementByDefault;
- (_Bool)isElementAccessibilityExposedToInterfaceBuilder;
- (double)_scaleFactorForImage;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)largeContentImage;
- (_Bool)scalesLargeContentImage;
- (void)setContentMode:(long long)arg1;
- (void)layoutSubviews;
- (struct UIEdgeInsets)alignmentRectInsets;
- (void)tintColorDidChange;
- (void)setSemanticContentAttribute:(long long)arg1;
- (_Bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (void)setContentScaleFactor:(double)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2;
- (struct CGSize)_intrinsicSizeWithinSize:(struct CGSize)arg1;
- (double)_baselineOffsetFromBottom;
- (_Bool)_canDrawContent;
- (double)_firstBaselineOffsetFromTop;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (void)startAnimating;
- (void)_updateState;
- (id)_currentImage;
- (CDStruct_c3b9c2ee)_baselineOffsetsAtSize:(struct CGSize)arg1;
- (id)_resolvedImageFromImage:(id)arg1;
- (id)_checkImageForAdaptation:(id)arg1 hasAdapted:(_Bool *)arg2;
- (_Bool)useBlockyMagnificationInClassic;
- (void)setAnimating:(_Bool)arg1;
- (void)stopAnimating;
- (void)_ancestorWillUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (_Bool)_hasBaseline;
- (struct CGImage *)imageRef;
- (void)_applySettingsForLegibilityStyle:(long long)arg1;
- (id)_effectForRenderingSource:(id)arg1;
- (id)_renditionForSource:(id)arg1 size:(struct CGSize)arg2 withCGImageProvider:(CDUnknownBlockType)arg3 lazy:(_Bool)arg4;
- (id)_generateBackdropMaskImage;
- (id)_currentAnimationKeyframeImage;
- (_Bool)_shouldInvalidateBaselineConstraintsForSize:(struct CGSize)arg1 oldSize:(struct CGSize)arg2;
- (_Bool)_isHasBaselinePropertyChangeable;
- (void)_cleanUpForStopAnimating;
- (id)_layoutForImage:(id)arg1 inSize:(struct CGSize)arg2 cachePerSize:(_Bool)arg3 forBaselineOffset:(_Bool)arg4;
- (void)_baselineOffsetParametersDidChangeHasBaselinePropertyChanged:(_Bool)arg1;
- (_Bool)_setImageViewContentsForCIImageBackedImage:(id)arg1;
- (_Bool)_setImageViewContentsForAnimatedImage:(id)arg1;
- (id)_cachedPretiledImageForImage:(id)arg1;
- (id)_layoutForImage:(id)arg1 inSize:(struct CGSize)arg2;
- (void)_updateContentsMultiplyColorAndSwizzleFromLayout:(id)arg1;
- (_Bool)_needsImageEffectsForImage:(id)arg1;
- (id)_effectiveTintColorWithImage:(id)arg1;
- (id)_contentsMultiplyColorForEffectiveTintColor:(id)arg1;
- (_Bool)_needsImageEffectsForImage:(id)arg1 suppressColorizing:(_Bool)arg2;
- (void)_drawImageEffectsForImage:(id)arg1 inRect:(struct CGRect)arg2 suppressColor:(_Bool)arg3;
- (void)_invalidateImageLayouts;
- (id)_currentHighlightedImage;
- (_Bool)_setImageViewContents:(id)arg1;
- (_Bool)_displayImageAsLayered:(id)arg1;
- (void)_configureForLayeredImage:(id)arg1;
- (void)_teardownLayeredImage;
- (void)_setDecompressingImage:(id)arg1 forType:(unsigned long long)arg2;
- (_Bool)_shouldTreatImageAsTemplate:(id)arg1;
- (void)_invalidateTemplateSettings;
- (void)_clearPretiledImageCacheForImage:(id)arg1;
- (_Bool)_resolveImageForTrait:(id)arg1 previouslyDisplayedImage:(id)arg2;
- (void)_updateImageViewForOldImage:(id)arg1 newImage:(id)arg2;
- (void)_updatePretiledImageCacheForImage:(id)arg1;
- (void)_updateTemplateProperties;
- (_Bool)_recomputePretilingState;
- (void)_imageContentParametersDidChange;
- (void)_setViewGeometry:(struct CGRect)arg1 forMetric:(int)arg2;
- (id)_imageContentGuideAllowingCreation:(_Bool)arg1;
- (id)_activeImage;
- (id)_decompressingImageForType:(unsigned long long)arg1;
- (_Bool)_resolveImageForTrait:(id)arg1;
- (void)_updateMasking;
- (void)_templateSettingsDidChange;
- (_Bool)_getDrawModeCompositeOperation:(int *)arg1 whiteComponent:(double *)arg2 drawingAlpha:(double *)arg3;
- (id)_adaptiveImageForImage:(id)arg1 assignedImage:(id)arg2 currentImage:(id)arg3 hasAdapted:(_Bool *)arg4;
- (id)_symbolConfigurationForImage:(id)arg1;
- (id)_imageResolvingTraitCollectionForTraitCollection:(id)arg1 layoutDirection:(long long)arg2;
- (id)_resolvedImageFromImage:(id)arg1 forTrait:(id)arg2;
- (void)_updateLayeredImageIsFocusedWithFocusedView:(id)arg1 focusAnimationCoordinator:(id)arg2;
- (id)_existingOverlayView;
- (void)_setOverlayContentView:(id)arg1;
- (id)_applyImageEffectsToCIImage:(id)arg1 effectiveTintColor:(id)arg2;
- (id)initWithImage:(id)arg1 highlightedImage:(id)arg2;
- (id)midlineGuide;
- (void)setCGImageRef:(struct CGImage *)arg1;
- (id)_checkHighlightedImageForAdaptation:(id)arg1 hadAdapted:(_Bool *)arg2;
- (void)_setLayeredImageContainer:(id)arg1;

@end
