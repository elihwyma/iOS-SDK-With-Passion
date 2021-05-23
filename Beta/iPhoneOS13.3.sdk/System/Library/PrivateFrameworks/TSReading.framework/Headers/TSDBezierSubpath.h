/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, TSDBezierNode, TSDBezierPath;

@interface TSDBezierSubpath : NSObject

{
    NSMutableArray *mNodes;
    _Bool mClosed;
}

@property (retain, nonatomic) NSMutableArray *nodes;
@property (nonatomic, getter=isClosed) _Bool closed;
@property (nonatomic, readonly) _Bool isRectangular;
@property (nonatomic, readonly) TSDBezierPath *bezierPath;
@property (nonatomic, readonly) TSDBezierNode *firstNode;
@property (nonatomic, readonly) TSDBezierNode *lastNode;
@property (nonatomic, readonly) _Bool allNodesSelected;
@property (nonatomic, readonly) _Bool hasSelectedNode;
@property (nonatomic, readonly) _Bool canDeleteSelectedNodes;
@property (nonatomic, readonly) struct CGRect nodeBounds;
@property (nonatomic, readonly) _Bool closeIfEndpointsAreEqual;

- (id)init;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)addNode:(id)arg1;
- (void)removeNode:(id)arg1;
- (_Bool)isCircular;
- (void)transformUsingAffineTransform:(struct CGAffineTransform)arg1;
- (void)removeLastNode;
- (double)distanceToPoint:(struct CGPoint)arg1 elementIndex:(unsigned long long *)arg2 tValue:(double *)arg3 threshold:(double)arg4;
- (void)updateReflectedState;
- (void)appendToBezierPath:(id)arg1 selectedNodesOnly:(_Bool)arg2 fromIndex:(unsigned long long)arg3;
- (id)nodePriorToNode:(id)arg1;
- (id)nodeAfterNode:(id)arg1;
- (id)splitEdgeAtIndex:(unsigned long long)arg1;
- (void)appendToBezierPath:(id)arg1;
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
- (void)addNodesToArray:(id)arg1;
- (void)convertToHobby;

@end
