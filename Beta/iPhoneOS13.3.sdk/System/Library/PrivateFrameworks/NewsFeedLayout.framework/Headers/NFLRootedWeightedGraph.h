/*
 Image: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout
 */

#import <Foundation/NSObject.h>

#import <NewsFeedLayout/Swift-Protocol.h>

@class FCSetValueMapTable, NSMutableDictionary, NSMutableSet;

@interface NFLRootedWeightedGraph : NSObject <Swift>

{
    id _rootNode;
    FCSetValueMapTable *_parentToChildren;
    FCSetValueMapTable *_childToParents;
    NSMutableSet *_childlessNodes;
    NSMutableSet *_parentlessNodes;
    NSMutableDictionary *_weightsByEdge;
}

@property (retain, nonatomic) id rootNode;
@property (retain, nonatomic) FCSetValueMapTable *parentToChildren;
@property (retain, nonatomic) FCSetValueMapTable *childToParents;
@property (retain, nonatomic) NSMutableSet *childlessNodes;
@property (retain, nonatomic) NSMutableSet *parentlessNodes;
@property (retain, nonatomic) NSMutableDictionary *weightsByEdge;

- (id)init;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)removeNode:(id)arg1;
- (_Bool)containsNode:(id)arg1;
- (id)initWithRootNode:(id)arg1;
- (id)parentsOfNode:(id)arg1;
- (void)_submitMaxPath:(id)arg1 withWeight:(double)arg2 toNode:(id)arg3 maxPathStore:(id)arg4;
- (void)_setWeight:(double)arg1 forEdgeFromNode:(id)arg2 toNode:(id)arg3;
- (id)childrenOfNode:(id)arg1;
- (void)debug_assertDataStructuresInSync;
- (id)_edgeRepresentationFromNode:(id)arg1 toNode:(id)arg2;
- (void)removeEdgeFromNode:(id)arg1 toNode:(id)arg2;
- (double)weightForEdgeFromNode:(id)arg1 toNode:(id)arg2;
- (id)highestAverageWeightedPathsFromRootToNode:(id)arg1 pathWeight:(double *)arg2;
- (void)addDirectedEdgeWithWeight:(double)arg1 fromNode:(id)arg2 toNode:(id)arg3;
- (void)removeChildlessNodesExhaustivelyButNode:(id)arg1;
- (void)removeParentlessNodesExhaustivelyButRootNode;

@end
