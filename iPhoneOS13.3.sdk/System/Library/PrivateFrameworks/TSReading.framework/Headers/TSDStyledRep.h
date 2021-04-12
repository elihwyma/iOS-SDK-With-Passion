//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSReading/TSDRep.h>

#import <TSReading/TSDTilingLayerDelegate-Protocol.h>

@class CALayer, NSString, TSDMutableReflection, TSDReflection, TSDShadow;

@interface TSDStyledRep : TSDRep <TSDTilingLayerDelegate>
{
    CALayer *mShadowLayer;
    CALayer *mReflectionLayer;
    CGPoint mOriginalReflectionLayerPositionInScaledCanvas;
    BOOL mIsUpdatingReflectionOpacity;
    TSDMutableReflection *mDynamicReflection;
    BOOL mIsUpdatingShadow;
    TSDShadow *mDynamicShadow;
    struct {
        unsigned int shadowInvalid:1;
    } mFlags;
}

@property(readonly, nonatomic) CALayer *reflectionLayer; // @synthesize reflectionLayer=mReflectionLayer;
@property(readonly, nonatomic) CALayer *shadowLayer; // @synthesize shadowLayer=mShadowLayer;
- (id)textureForContext:(id)arg1;
- (id)pathSourceForSelectionHighlightBehavior;
- (BOOL)shouldShowSelectionHighlight;
- (BOOL)shouldHideSelectionHighlightDueToRectangularPath;
- (id)additionalLayersUnderLayer;
- (void)didUpdateLayer:(id)arg1;
- (void)willUpdateLayer:(id)arg1;
- (void)processChangedProperty:(int)arg1;
- (void)drawInContextWithoutEffectsOrChildrenForAlphaOnly:(CGContext )arg1;
- (void)drawInContextWithoutEffectsForAlphaOnly:(CGContext )arg1;
- (void)drawInContextWithoutEffectsOrChildren:(CGContext )arg1;
- (void)drawInContextWithoutEffects:(CGContext )arg1;
- (void)drawInContextWithoutEffects:(CGContext )arg1 withContent:(BOOL)arg2 withStroke:(BOOL)arg3 withOpacity:(BOOL)arg4 forAlphaOnly:(BOOL)arg5 drawChildren:(BOOL)arg6;
- (void)drawInContext:(CGContext )arg1;
- (void)drawReflectionInContext:(CGContext )arg1 drawChildren:(BOOL)arg2;
- (void)drawReflectionInContext:(CGContext )arg1 withTransparencyLayer:(BOOL)arg2 applyingOpacity:(BOOL)arg3 shouldClipGradient:(BOOL)arg4 withBlock:(id /* CDUnknownBlockType */)arg5;
- (void)drawShadowInContext:(CGContext )arg1 withChildren:(BOOL)arg2 withDrawableOpacity:(BOOL)arg3;
- (void)drawReflectionIntoReflectionFrameInContext:(CGContext )arg1 withTransparencyLayer:(BOOL)arg2 applyingOpacity:(BOOL)arg3 drawChildren:(BOOL)arg4;
- (void)p_drawReflectionIntoReflectionFrameInContext:(CGContext )arg1 withTransparencyLayer:(BOOL)arg2 applyingOpacity:(BOOL)arg3 shouldClipGradient:(BOOL)arg4 withBlock:(id /* CDUnknownBlockType */)arg5;
- (void)drawGradientWithAlphaOverReflection:(CGContext )arg1 applyingOpacity:(BOOL)arg2 reflectionSize:(CGSize)arg3;
- (CGImage )p_newReflectionImageWithSize:(CGSize)arg1 applyOpacity:(BOOL)arg2 viewScale:(double)arg3 withBlock:(id /* CDUnknownBlockType */)arg4;
- (CGImage )newShadowImageWithSize:(CGSize)arg1 unflipped:(BOOL)arg2 withChildren:(BOOL)arg3;
- (CGImage )newShadowImageWithSize:(CGSize)arg1 shadow:(id)arg2 drawSelector:(SEL)arg3 unflipped:(BOOL)arg4;
- (BOOL)canDrawShadowInOneStepWithChildren:(BOOL)arg1;
- (void)positionShadowLayer:(id)arg1 forShadow:(id)arg2 withNaturalBounds:(CGRect)arg3;
- (void)invalidateShadowLayer;
- (void)didUpdateEffectLayersForLayer:(id)arg1;
- (CGRect)reflectionLayerFrame;
- (CGRect)reflectionLayerFrameInRoot;
- (BOOL)isInvisible;
- (void)willUpdateEffectLayersForLayer:(id)arg1;
- (void)disposeReflectionLayer;
- (void)createReflectionLayer;
- (BOOL)shouldShowShadow;
- (BOOL)shouldShowReflection;
@property(readonly, nonatomic) TSDShadow *shadow;
@property(readonly, nonatomic) TSDReflection *reflection;
- (CGRect)p_rectWithEffectsAppliedToRect:(CGRect)arg1 additionalTransform:(CGAffineTransform)arg2;
- (CGRect)rectWithEffectsAppliedToRect:(CGRect)arg1;
@property(readonly, nonatomic) double opacity;
- (void)drawLayer:(id)arg1 inContext:(CGContext )arg2;
- (void)p_drawReflectionInContext:(CGContext )arg1;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (CGRect)p_clipRectInRootForTransform:(CGAffineTransform)arg1;
- (CGRect)clipRect;
- (CGRect)clipRectWithoutEffects;
- (void)viewScaleDidChange;
- (void)setNeedsDisplay;
- (id)styledLayout;
- (id)styledInfo;
@property(readonly, copy) NSString *description;
- (void)dealloc;

@end

