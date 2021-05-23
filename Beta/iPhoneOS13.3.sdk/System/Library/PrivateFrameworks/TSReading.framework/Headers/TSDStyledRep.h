/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/TSDRep.h>

@class CALayer, NSString, TSDMutableReflection, TSDReflection, TSDShadow;

@interface TSDStyledRep : TSDRep

{
    CALayer *mShadowLayer;
    CALayer *mReflectionLayer;
    struct CGPoint mOriginalReflectionLayerPositionInScaledCanvas;
    _Bool mIsUpdatingReflectionOpacity;
    TSDMutableReflection *mDynamicReflection;
    _Bool mIsUpdatingShadow;
    TSDShadow *mDynamicShadow;
    struct {
        unsigned int shadowInvalid:1;
    } mFlags;
}

@property (nonatomic, readonly) CALayer *shadowLayer;
@property (nonatomic, readonly) CALayer *reflectionLayer;
@property (nonatomic, readonly) TSDReflection *reflection;
@property (nonatomic, readonly) double opacity;
@property (nonatomic, readonly) TSDShadow *shadow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (_Bool)shouldShowShadow;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext *)arg2;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (void)setNeedsDisplay;
- (void)drawInContext:(struct CGContext *)arg1;
- (_Bool)isInvisible;
- (void)viewScaleDidChange;
- (void)didUpdateLayer:(id)arg1;
- (void)processChangedProperty:(int)arg1;
- (void)willUpdateLayer:(id)arg1;
- (id)additionalLayersUnderLayer;
- (struct CGRect)clipRect;
- (_Bool)shouldShowSelectionHighlight;
- (id)textureForContext:(id)arg1;
- (_Bool)shouldHideSelectionHighlightDueToRectangularPath;
- (void)invalidateShadowLayer;
- (void)drawInContextWithoutEffects:(struct CGContext *)arg1 withContent:(_Bool)arg2 withStroke:(_Bool)arg3 withOpacity:(_Bool)arg4 forAlphaOnly:(_Bool)arg5 drawChildren:(_Bool)arg6;
- (id)pathSourceForSelectionHighlightBehavior;
- (_Bool)canDrawShadowInOneStepWithChildren:(_Bool)arg1;
- (id)styledLayout;
- (void)disposeReflectionLayer;
- (void)createReflectionLayer;
- (_Bool)shouldShowReflection;
- (void)drawGradientWithAlphaOverReflection:(struct CGContext *)arg1 applyingOpacity:(_Bool)arg2 reflectionSize:(struct CGSize)arg3;
- (id)styledInfo;
- (struct CGRect)clipRectWithoutEffects;
- (struct CGRect)rectWithEffectsAppliedToRect:(struct CGRect)arg1;
- (struct CGRect)p_rectWithEffectsAppliedToRect:(struct CGRect)arg1 additionalTransform:(struct CGAffineTransform)arg2;
- (struct CGRect)reflectionLayerFrameInRoot;
- (void)drawReflectionIntoReflectionFrameInContext:(struct CGContext *)arg1 withTransparencyLayer:(_Bool)arg2 applyingOpacity:(_Bool)arg3 drawChildren:(_Bool)arg4;
- (void)p_drawReflectionInContext:(struct CGContext *)arg1;
- (void)positionShadowLayer:(id)arg1 forShadow:(id)arg2 withNaturalBounds:(struct CGRect)arg3;
- (struct CGImage *)newShadowImageWithSize:(struct CGSize)arg1 unflipped:(_Bool)arg2 withChildren:(_Bool)arg3;
- (void)drawInContextWithoutEffectsForAlphaOnly:(struct CGContext *)arg1;
- (void)drawInContextWithoutEffectsOrChildrenForAlphaOnly:(struct CGContext *)arg1;
- (struct CGImage *)newShadowImageWithSize:(struct CGSize)arg1 shadow:(id)arg2 drawSelector:(SEL)arg3 unflipped:(_Bool)arg4;
- (void)p_drawReflectionIntoReflectionFrameInContext:(struct CGContext *)arg1 withTransparencyLayer:(_Bool)arg2 applyingOpacity:(_Bool)arg3 shouldClipGradient:(_Bool)arg4 withBlock:(CDUnknownBlockType)arg5;
- (struct CGImage *)p_newReflectionImageWithSize:(struct CGSize)arg1 applyOpacity:(_Bool)arg2 viewScale:(double)arg3 withBlock:(CDUnknownBlockType)arg4;
- (void)drawReflectionInContext:(struct CGContext *)arg1 withTransparencyLayer:(_Bool)arg2 applyingOpacity:(_Bool)arg3 shouldClipGradient:(_Bool)arg4 withBlock:(CDUnknownBlockType)arg5;
- (void)drawShadowInContext:(struct CGContext *)arg1 withChildren:(_Bool)arg2 withDrawableOpacity:(_Bool)arg3;
- (void)drawReflectionInContext:(struct CGContext *)arg1 drawChildren:(_Bool)arg2;
- (void)willUpdateEffectLayersForLayer:(id)arg1;
- (void)didUpdateEffectLayersForLayer:(id)arg1;
- (struct CGRect)p_clipRectInRootForTransform:(struct CGAffineTransform)arg1;
- (struct CGRect)reflectionLayerFrame;
- (void)drawInContextWithoutEffects:(struct CGContext *)arg1;
- (void)drawInContextWithoutEffectsOrChildren:(struct CGContext *)arg1;

@end
