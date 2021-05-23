/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/TSDShapeLayout.h>

@class TSDWrapPolygon, TSWPLayout, TSWPPadding;

@protocol TSWPShapeLayoutDelegate;

@interface TSWPShapeLayout : TSDShapeLayout

{
    TSWPLayout *_containedLayout;
    TSDWrapPolygon *_cachedInteriorWrapPolygon;
    id <TSWPShapeLayoutDelegate> _delegate;
    _Bool _observingStorage;
}

@property (nonatomic, readonly) TSWPLayout *containedLayout;
@property (nonatomic, readonly) _Bool autosizes;
@property id <TSWPShapeLayoutDelegate> delegate;
@property (nonatomic, readonly) struct CGSize adjustedInsets;
@property (nonatomic, readonly) TSWPPadding *layoutMargins;
@property (nonatomic, readonly) unsigned long long columnCount;
@property (nonatomic, readonly) _Bool alwaysStartsNewTarget;
@property (nonatomic, readonly) _Bool shrinkTextToFit;
@property (nonatomic, readonly) _Bool columnsAreLeftToRight;
@property (nonatomic, readonly) double textScaleFactor;

- (void)dealloc;
- (void)addChild:(id)arg1;
- (id)initWithInfo:(id)arg1;
- (id)children;
- (void)setChildren:(id)arg1;
- (void)setGeometry:(id)arg1;
- (void)insertChild:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)invalidatePath;
- (unsigned int)autosizeFlagsForTextLayout:(id)arg1;
- (unsigned int)verticalAlignmentForTextLayout:(id)arg1;
- (void)invalidateForAutosizingTextLayout:(id)arg1;
- (struct CGRect)nonAutosizedFrameForTextLayout:(id)arg1;
- (struct CGRect)autosizedFrameForTextLayout:(id)arg1 textSize:(struct CGSize)arg2;
- (id)dependentsOfTextLayout:(id)arg1;
- (Class)repClassForTextLayout:(id)arg1;
- (_Bool)textLayoutShouldWrapAroundExternalDrawables:(id)arg1;
- (_Bool)textLayoutShouldLayoutVertically:(id)arg1;
- (_Bool)allowsLastLineTruncation:(id)arg1;
- (unsigned int)maxLineCountForTextLayout:(id)arg1;
- (double)widthForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2;
- (double)gapForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2;
- (double)positionForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2 outWidth:(double *)arg3 outGap:(double *)arg4;
- (id)textWrapper;
- (void)invalidateSize;
- (id)interiorWrapPolygon;
- (void)updateChildrenFromInfo;
- (id)interiorClippingPath;
- (void)processChangedProperty:(int)arg1;
- (id)childSearchTargets;
- (_Bool)supportsRotation;
- (id)dependentLayouts;
- (void)willBeAddedToLayoutController:(id)arg1;
- (void)willBeRemovedFromLayoutController:(id)arg1;
- (_Bool)resizeMayChangeAspectRatio;
- (_Bool)canAspectRatioLockBeChangedByUser;
- (void)replaceChild:(id)arg1 with:(id)arg2;
- (void)insertChild:(id)arg1 below:(id)arg2;
- (void)insertChild:(id)arg1 above:(id)arg2;
- (id)interiorWrapPath;
- (id)pathSource;
- (struct CGAffineTransform)computeLayoutTransform;
- (_Bool)isInvisibleAutosizingShape;
- (void)storage:(id)arg1 didChangeRange:(struct _NSRange)arg2 delta:(long long)arg3 broadcastKind:(int)arg4;
- (void)createContainedLayoutForEditing;
- (void)createContainedLayoutForInstructionalText;
- (id)instructionalStorageForContainedStorage:(id)arg1 storageKind:(int)arg2;
- (void)destroyContainedLayoutForInstructionalText;
- (struct CGAffineTransform)autosizedTransform;
- (struct CGAffineTransform)autosizedTransformForInfoGeometry:(id)arg1;
- (struct CGPoint)autosizePositionOffsetForFixedWidth:(_Bool)arg1 height:(_Bool)arg2;
- (unsigned int)cropLine:(struct CGRect)arg1 lineSegmentRects:(struct CGRect [128])arg2;
- (struct CGPoint)autosizePositionOffset;

@end
