/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/TSDPathSource.h>

@class NSArray, NSMutableArray, TSDBezierNode;

@interface TSDEditableBezierPathSource : TSDPathSource

{
    NSMutableArray *mSubpaths;
    unsigned long long mActiveSubpath;
    _Bool mHasLockedFlipTransform;
    struct CGAffineTransform mLockedFlipTransform;
}

@property (retain, nonatomic) NSMutableArray *subpaths;
@property (retain, nonatomic) NSMutableArray *nodes;
@property (retain, nonatomic) NSArray *nodeTypes;
@property (nonatomic, readonly) TSDBezierNode *firstNode;
@property (nonatomic, readonly) TSDBezierNode *lastNode;
@property (nonatomic, getter=isClosed) _Bool closed;
@property (nonatomic, readonly) _Bool isOpen;
@property (nonatomic, readonly) _Bool closeIfEndpointsAreEqual;
@property (nonatomic, readonly) _Bool hasSelectedNode;
@property (nonatomic, readonly) _Bool allNodesSelected;
@property (nonatomic, readonly) _Bool canDeleteSelectedNodes;
@property (nonatomic, readonly) _Bool deletingSelectedNodesWillDeleteShape;
@property (nonatomic, readonly) struct CGRect nodeBounds;
@property (nonatomic, readonly) _Bool isCompound;
@property (nonatomic, readonly) struct CGPath *subpathForSelection;

+ (id)editableBezierPathSourceWithPathSource:(id)arg1;
+ (id)editableBezierPathSourceWithBezierPath:(id)arg1;
+ (id)editableBezierPathSource;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)addNode:(id)arg1;
- (void)moveToPoint:(struct CGPoint)arg1;
- (void)closePath;
- (void)lineToPoint:(struct CGPoint)arg1;
- (void)removeNode:(id)arg1;
- (struct CGSize)naturalSize;
- (void)setNaturalSize:(struct CGSize)arg1;
- (_Bool)isCircular;
- (_Bool)isRectangular;
- (void)setBezierPath:(id)arg1;
- (void)curveToPoint:(struct CGPoint)arg1 controlPoint1:(struct CGPoint)arg2 controlPoint2:(struct CGPoint)arg3;
- (void)transformUsingAffineTransform:(struct CGAffineTransform)arg1;
- (void)removeLastNode;
- (long long)mixingTypeWithObject:(id)arg1;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (id)bezierPathWithoutFlips;
- (struct CGAffineTransform)pathFlipTransform;
- (struct CGPath *)pathWithoutFlips;
- (void)alignToOrigin;
- (id)nodePriorToNode:(id)arg1;
- (id)nodeAfterNode:(id)arg1;
- (void)reverseDirection;
- (void)offsetSelectedNodesByDelta:(struct CGPoint)arg1;
- (void)offsetSelectedEdgesByDelta:(struct CGPoint)arg1;
- (void)deleteSelectedNodes;
- (void)selectAllNodes;
- (void)deselectAllNodes;
- (id)bezierNodeUnderPoint:(struct CGPoint)arg1 withTransform:(struct CGAffineTransform)arg2 andTolerance:(double)arg3 returningType:(long long *)arg4;
- (id)insertNodeAtPoint:(struct CGPoint)arg1 tolerance:(double)arg2;
- (void)sharpenAllNodes;
- (void)smoothNode:(id)arg1;
- (void)convertToHobby;
- (void)deleteSelectedNodesForced:(_Bool)arg1;
- (void)toggleNode:(id)arg1 toType:(int)arg2 prevNode:(id)arg3 nextNode:(id)arg4;
- (void)smoothAllNodes;
- (id)subpathsForConnectingUsingFirstSubpathFirstNode:(_Bool *)arg1 andSecondPathFirstNode:(_Bool *)arg2;
- (id)splitEdge:(long long)arg1 at:(double)arg2 fromSubpath:(long long)arg3;
- (void)adjustGeometryForAlignToOrigin:(id)arg1;
- (void)setLockedFlipTransform:(_Bool)arg1;
- (Class)preferredRepClass;
- (double)distanceToPoint:(struct CGPoint)arg1 subpathIndex:(unsigned long long *)arg2 elementIndex:(unsigned long long *)arg3 tValue:(double *)arg4 threshold:(double)arg5;
- (_Bool)bezierPathUnderPoint:(struct CGPoint)arg1 withTransform:(struct CGAffineTransform)arg2 tolerance:(double)arg3;
- (void)toggleSelectedNodesToType:(int)arg1;
- (void)selectSubpathForNode:(id)arg1 toggle:(_Bool)arg2;
- (_Bool)canConnectSelectedNodes;
- (void)connectSelectedNodes;
- (_Bool)canCloseSelectedNodes;
- (void)closeSelectedNodes;
- (void)deleteSelectedEdges;
- (void)splitSelectedEdges;
- (void)splitSelectedNodes;
- (_Bool)canCutAtSelectedNodes;
- (void)cutAtSelectedNodes;
- (void)smoothCurveToPoint:(struct CGPoint)arg1 controlPoint1:(struct CGPoint)arg2 controlPoint2:(struct CGPoint)arg3;

@end
