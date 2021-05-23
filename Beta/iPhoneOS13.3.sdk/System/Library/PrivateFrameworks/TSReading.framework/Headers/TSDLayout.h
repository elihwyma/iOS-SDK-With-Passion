/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/TSDAbstractLayout.h>

@class NSMutableSet, NSObject, NSSet, NSString, TSDLayoutGeometry;

@protocol TSDInfo;

@interface TSDLayout : TSDAbstractLayout

{
    NSObject<TSDInfo> *mInfo;
    int mLayoutState;
    struct CGPoint mBaseAlignmentFrameOriginForFixingInterimPosition;
    struct CGPoint mBaseCapturedAlignmentFrameOriginForInline;
    struct CGRect mDirtyRect;
    struct {
        unsigned int position:1;
        unsigned int size:1;
    } mInvalidFlags;
    TSDLayoutGeometry *mBaseGeometry;
    struct CGRect mInitialBoundsForStandardKnobs;
    struct CGPoint mCapturedInfoGeometryPositionForInline;
    struct CGPoint mCapturedAlignmentFrameOriginForInline;
    NSMutableSet *mConnectedLayouts;
    _Bool mHasFinishedIterativePositioning;
    id mIterativePositioningState;
}

@property (nonatomic, readonly) NSObject<TSDInfo> *info;
@property (copy, nonatomic) TSDLayoutGeometry *dynamicGeometry;
@property (nonatomic, readonly) TSDLayoutGeometry *originalGeometry;
@property (nonatomic, readonly) int layoutState;
@property (nonatomic, readonly) NSSet *connectedLayouts;
@property (nonatomic, readonly) _Bool invalidGeometry;
@property (retain, nonatomic) id iterativePositioningState;
@property (nonatomic, readonly) _Bool hasFinishedIterativePositioning;
@property (nonatomic, readonly) _Bool isStrokeBeingManipulated;
@property (nonatomic, readonly) _Bool canAspectRatioLockBeChangedByUser;
@property (nonatomic, readonly) _Bool resizeMayChangeAspectRatio;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool attachmentLayoutDisplacedByDropCap;

+ (id)descendentWrappablesOfLayout:(id)arg1;

- (void)dealloc;
- (void)invalidate;
- (void)setParent:(id)arg1;
- (struct CGSize)minimumSize;
- (id)initWithInfo:(id)arg1;
- (void)setNeedsDisplayInRect:(struct CGRect)arg1;
- (void)setNeedsDisplay;
- (id)stroke;
- (void)validate;
- (struct CGRect)rectForSelection:(id)arg1;
- (_Bool)canFlip;
- (_Bool)isBeingManipulated;
- (id)rootLayout;
- (void)invalidateFrame;
- (Class)repClassOverride;
- (id)computeLayoutGeometry;
- (id)layoutController;
- (void)invalidateSize;
- (void)invalidatePosition;
- (void)updateChildrenFromInfo;
- (void)invalidateChildren;
- (struct CGPoint)capturedInfoPositionForAttachment;
- (id)layoutGeometryFromInfo;
- (_Bool)shouldDisplayGuides;
- (_Bool)shouldProvideSizingGuides;
- (id)i_wrapPath;
- (void)dragBy:(struct CGPoint)arg1;
- (void)invalidateExteriorWrap;
- (void)processChangedProperty:(int)arg1;
- (void)parentDidChange;
- (id)i_externalWrapPath;
- (_Bool)allowsConnections;
- (id)childSearchTargets;
- (void)layoutSearchForAnnotationWithHitBlock:(CDUnknownBlockType)arg1;
- (_Bool)orderedBefore:(id)arg1;
- (void)processChanges:(id)arg1;
- (void)beginDynamicOperation;
- (void)endDynamicOperation;
- (struct CGRect)boundsForStandardKnobs;
- (_Bool)isInTopLevelContainerForEditing;
- (struct CGRect)i_takeDirtyRect;
- (struct CGAffineTransform)originalPureTransformInRoot;
- (struct CGAffineTransform)pureTransformInRoot;
- (struct CGAffineTransform)originalTransformInRoot;
- (void)beginRotate;
- (struct CGPoint)centerForRotation;
- (_Bool)isInGroup;
- (id)dependentLayouts;
- (void)p_invalidateConnectedLayouts;
- (_Bool)dependentsRelyOnSize;
- (void)p_unregisterWithLayoutController:(id)arg1;
- (void)parentWillChangeTo:(id)arg1;
- (void)p_registerWithLayoutController:(id)arg1;
- (void)p_recursiveInvalidate;
- (id)i_layoutGeometryProvider;
- (_Bool)i_useBaseCapturedAlignmentFrameOriginForInline;
- (struct CGPoint)alignmentFrameOriginForFixingInterimPosition;
- (id)originalPureGeometry;
- (void)i_setBaseCapturedAlignmentFrameOriginForInline;
- (struct CGRect)initialBoundsForStandardKnobs;
- (id)pureGeometry;
- (id)layoutGeometryFromProvider;
- (double)scaleForInlineClampingUnrotatedSize:(struct CGSize)arg1 withGeometry:(id)arg2;
- (struct CGSize)maximumFrameSizeForChild:(id)arg1;
- (id)additionalDependenciesForChildLayout:(id)arg1;
- (struct CGPoint)calculatePointFromSearchReference:(id)arg1;
- (_Bool)shouldValidate;
- (void)finishIterativePositioning;
- (void)unregisterFromLayoutController;
- (void)willBeAddedToLayoutController:(id)arg1;
- (void)wasAddedToLayoutController:(id)arg1;
- (void)willBeRemovedFromLayoutController:(id)arg1;
- (void)wasRemovedFromLayoutController:(id)arg1;
- (id)computeInfoGeometryFromLayoutGeometry:(id)arg1;
- (struct CGPoint)infoGeometryPositionForCurrentAttachedLayoutGeometry;
- (_Bool)shouldBeDisplayedInShowMode;
- (void)dynamicStrokeWidthChangeDidBegin;
- (void)dynamicStrokeWidthUpdateToValue:(double)arg1;
- (void)dynamicStrokeWidthChangeDidEnd;
- (void)pauseDynamicTransformation;
- (_Bool)isBeingTransformed;
- (void)beginDrag;
- (void)dragByUnscaled:(struct CGPoint)arg1;
- (void)endDrag;
- (struct CGAffineTransform)originalTransformForProvidingGuides;
- (struct CGAffineTransform)layoutTransformInInfoSpace:(struct CGAffineTransform)arg1;
- (_Bool)shouldProvideGuidesDuringExclusiveAlignmentOperation;
- (void)takeRotationFromTracker:(id)arg1;
- (void)endRotate;
- (void)beginResize;
- (struct CGSize)maximumSizeForChildLayout:(id)arg1;
- (void)resizeWithTransform:(struct CGAffineTransform)arg1 asChild:(_Bool)arg2;
- (id)initialInfoGeometry;
- (id)pureGeometryInRoot;
- (id)inspectorGeometry;
- (void)validateFromLastInterimPosition;
- (struct CGPoint)centerForConnecting;
- (id)computeInfoGeometryDuringResize;
- (id)searchTarget;
- (id)reliedOnLayouts;
- (id)additionalLayoutsForRepCreation;
- (id)additionalGuides;
- (double)inlineVerticalOffset;
- (double)inlineCenteredAlignmentOffset;
- (void)willLayoutInlineWithTextAttributes:(struct __CFDictionary *)arg1 columnWidth:(double)arg2;
- (_Bool)wantsRoundedInlinePosition;
- (void)i_accumulateLayoutsIntoSet:(id)arg1;
- (struct CGRect)rectForPresentingAnnotationPopoverForSelection:(id)arg1;
- (void)addConnectedLayout:(id)arg1;
- (void)removeConnectedLayout:(id)arg1;
- (void)setAdjustedInterimPositionX:(double)arg1;
- (void)setAdjustedInterimPositionY:(double)arg1;

@end
