/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/TSDStyledRep.h>

#import <TSReading/Swift-Protocol.h>

@class NSString;

@interface TSDShapeRep : TSDStyledRep <Swift>

{
    struct CGRect mFrameInUnscaledCanvasRelativeToSuper;
    _Bool mFrameInUnscaledCanvasIsValid;
    _Bool mDirectlyManagesLayerContent;
    struct CGRect mOriginalAliasedAlignmentFrameInLayerFrame;
    _Bool mShadowOnChildrenDisabled;
}

@property (nonatomic) _Bool shadowOnChildrenDisabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (double)magicMoveAttributeMatchPercentBetweenOutgoingObject:(id)arg1 incomingObject:(id)arg2;

- (_Bool)containsPoint:(struct CGPoint)arg1;
- (_Bool)shouldShowShadow;
- (_Bool)isInvisible;
- (void)willBeRemoved;
- (_Bool)isDraggable;
- (_Bool)directlyManagesLayerContent;
- (struct CGRect)frameInUnscaledCanvas;
- (void)didUpdateLayer:(id)arg1;
- (void)processChangedProperty:(int)arg1;
- (struct CGRect)targetRectForEditMenu;
- (void)willUpdateLayer:(id)arg1;
- (id)additionalLayersOverLayer;
- (id)overlayLayers;
- (void)drawInLayerContext:(struct CGContext *)arg1;
- (struct CGRect)layerFrameInScaledCanvas;
- (void)layoutInRootChangedFrom:(id)arg1 to:(id)arg2 translatedOnly:(_Bool)arg3;
- (struct CGRect)layerFrameInScaledCanvasRelativeToParent;
- (struct CGRect)clipRect;
- (void)recursivelyDrawChildrenInContext:(struct CGContext *)arg1;
- (void)updatePositionsOfKnobs:(id)arg1;
- (unsigned long long)enabledKnobMask;
- (_Bool)directlyManagesVisibilityOfKnob:(id)arg1;
- (void)addSelectionKnobsToArray:(id)arg1;
- (_Bool)isEditingPath;
- (_Bool)shouldShowSelectionHighlight;
- (_Bool)canDrawInParallel;
- (id)initWithLayout:(id)arg1 canvas:(id)arg2;
- (_Bool)shouldExpandHitRegionWhenSmall;
- (double)shortestDistanceToPoint:(struct CGPoint)arg1 countAsHit:(_Bool *)arg2;
- (_Bool)intersectsUnscaledRect:(struct CGRect)arg1;
- (void)addBitmapsToRenderingQualityInfo:(id)arg1 inContext:(struct CGContext *)arg2;
- (_Bool)canUseSpecializedHitRegionForKnob:(id)arg1;
- (id)shapeInfo;
- (id)shapeLayout;
- (_Bool)p_canApplyStrokeToLayer;
- (_Bool)p_canApplyFillToLayer;
- (_Bool)p_beginApplyOpacity:(struct CGContext *)arg1 forDrawingInOneStep:(_Bool)arg2;
- (void)p_endApplyOpacity:(struct CGContext *)arg1 apply:(_Bool)arg2;
- (void)p_drawInContext:(struct CGContext *)arg1 withContent:(_Bool)arg2 withStroke:(_Bool)arg3 withOpacity:(_Bool)arg4;
- (void)p_drawChildrenWithoutOpacityInContext:(struct CGContext *)arg1;
- (_Bool)p_drawsSelfInOneStep;
- (void)p_drawLineEndForHead:(_Bool)arg1 withDelta:(struct CGPoint)arg2 andStroke:(id)arg3 inContext:(struct CGContext *)arg4 useFastDrawing:(_Bool)arg5;
- (_Bool)i_editMenuOverlapsEndKnobs;
- (_Bool)shouldHideSelectionHighlightDueToRectangularPath;
- (_Bool)shouldShowSmartShapeKnobs;
- (_Bool)shouldShowAdvancedGradientKnobs;
- (_Bool)shouldShowAdditionalKnobs;
- (id)editablePathSource;
- (_Bool)p_pathIsAxisAlignedRect;
- (_Bool)isEditingChildRep;
- (void)drawInContextWithoutEffects:(struct CGContext *)arg1 withContent:(_Bool)arg2 withStroke:(_Bool)arg3 withOpacity:(_Bool)arg4 forAlphaOnly:(_Bool)arg5 drawChildren:(_Bool)arg6;
- (id)imageOfStroke:(struct CGRect *)arg1;
- (id)pathSourceForSelectionHighlightBehavior;
- (_Bool)canBeUsedForImageMask;
- (void)invalidateEffectLayersForChildren;
- (_Bool)isPathEditable;
- (_Bool)canMakePathEditable;
- (struct CGAffineTransform)naturalToEditablePathSpaceTransform;
- (struct CGPoint)centerForGuideLayerPlacement;
- (void)p_beginDynamicallyResizingOrMovingLineEnd;
- (void)p_endDynamicallyResizingOrMovingLineEnd;
- (_Bool)canDrawShadowInOneStepWithChildren:(_Bool)arg1;

@end
