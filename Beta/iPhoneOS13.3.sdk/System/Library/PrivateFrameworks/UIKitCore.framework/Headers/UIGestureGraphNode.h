/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIGestureGraphElement.h>

@class NSMapTable, NSMutableSet, NSSet;

__attribute__((visibility("hidden")))
@interface UIGestureGraphNode : UIGestureGraphElement

{
    NSMutableSet *_inEdges;
    NSMutableSet *_outEdges;
    NSMutableSet *_inOutEdges;
    NSMapTable *_edgesByLabel;
}

@property (nonatomic, readonly) unsigned long long edgeCount;
@property (nonatomic, readonly) NSSet *allEdges;
@property (nonatomic, readonly) NSSet *inEdges;
@property (nonatomic, readonly) NSSet *outEdges;
@property (nonatomic, readonly) NSSet *inOutEdges;

- (id)description;
- (unsigned long long)edgeCountForLabel:(id)arg1;
- (void)_addEdge:(id)arg1;
- (void)_removeEdge:(id)arg1;
- (id)edgesForLabel:(id)arg1;
- (_Bool)isInEdge:(id)arg1;
- (_Bool)isOutEdge:(id)arg1;
- (unsigned long long)typeOfEdge:(id)arg1;
- (id)_edgesForType:(unsigned long long)arg1 createIfNeeded:(_Bool)arg2;
- (_Bool)hasEdgeTowardNode:(id)arg1;
- (_Bool)hasEdgeFromNode:(id)arg1;
- (_Bool)hasEdgeBetweenNode:(id)arg1;
- (_Bool)isInOutEdge:(id)arg1;
- (void)enumerateEdgesTowardNode:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateEdgesFromNode:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateEdgesBetweenNode:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateNeighborNodesUsingBlock:(CDUnknownBlockType)arg1;

@end
