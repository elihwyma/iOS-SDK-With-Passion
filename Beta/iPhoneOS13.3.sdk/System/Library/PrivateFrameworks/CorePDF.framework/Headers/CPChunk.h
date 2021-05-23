/*
 Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import <CorePDF/CPObject.h>

__attribute__((visibility("hidden")))
@interface CPChunk : CPObject

{
    struct CGRect bounds;
    _Bool shrinksWithChildren;
    _Bool dirtyBounds;
    unsigned int position;
    long long insertionOrder;
}

+ (float)chooseReferenceFontSizeFrom:(float)arg1 and:(float)arg2;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)remove:(id)arg1;
- (void)sortUsingSelector:(SEL)arg1;
- (double)left;
- (struct CGRect)bounds;
- (void)setBounds:(struct CGRect)arg1;
- (double)center;
- (float)fontSize;
- (void)setChildren:(id)arg1;
- (double)top;
- (double)bottom;
- (struct CGPoint)anchor;
- (void)removeAll;
- (void)setAnchor:(struct CGPoint)arg1;
- (double)right;
- (double)rotationAngle;
- (struct CGSize)advance;
- (long long)compareTopDescending:(id)arg1;
- (id)copyAndSplitChildrenAtIndex:(unsigned int)arg1;
- (void)add:(id)arg1;
- (void)resizeWith:(id)arg1;
- (void)add:(id)arg1 atIndex:(unsigned int)arg2;
- (void)addChildrenOf:(id)arg1;
- (void)fitBoundsToChildren;
- (id)newTakeChildren;
- (id)newTakeChildrenAmong:(id)arg1;
- (struct CGRect)renderedBounds;
- (float)absoluteGapTo:(id)arg1;
- (float)advanceDeltaAfterSpace;
- (long long)compareCommonAnchorX:(id)arg1;
- (long long)insertionOrder;
- (unsigned int)chunkPosition;
- (void)accept:(id)arg1;
- (float)opticalLeading;
- (struct CGRect)adjustToPointBoundary:(struct CGRect)arg1;
- (id)describeBounds;
- (float)clusterGapTo:(id)arg1;
- (float)referenceAdvanceWidth;
- (void)setInsertionOrder:(long long)arg1;
- (long long)compareAnchorY:(id)arg1;
- (long long)compareAnchorX:(id)arg1;
- (long long)compareAnchorYDescending:(id)arg1;
- (long long)compareX:(id)arg1;
- (long long)compareInsertionOrder:(id)arg1;
- (long long)compareZ:(id)arg1;
- (long long)compareZDescending:(id)arg1;
- (long long)compareXBounds:(id)arg1;
- (long long)compareLinearBounds:(id)arg1;
- (long long)compareY:(id)arg1;
- (long long)compareYBounds:(id)arg1;
- (long long)compareYDescending:(id)arg1;
- (long long)compareYDescendingX:(id)arg1;
- (long long)compareChunkPosition:(id)arg1;
- (int)clusterLevelHint;
- (void)orderedInsert:(id)arg1 usingSelector:(SEL)arg2;
- (_Bool)overlapsHorizontallyWith:(id)arg1;
- (_Bool)overlapsVerticallyWith:(id)arg1;
- (_Bool)geometricallyContains:(id)arg1;
- (_Bool)boundsEqualsRect:(struct CGRect)arg1 accuracy:(double)arg2;
- (_Bool)shrinksWithChildren;
- (void)setShrinksWithChildren:(_Bool)arg1;
- (_Bool)intersectsChild:(struct CGRect)arg1;
- (void)translateObjectYBy:(double)arg1;
- (void)setChunkPosition:(unsigned int)arg1;

@end
