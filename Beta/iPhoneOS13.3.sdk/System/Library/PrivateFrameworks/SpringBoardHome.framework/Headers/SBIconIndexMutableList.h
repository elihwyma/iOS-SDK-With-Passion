/*
 Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

#import <Foundation/NSObject.h>

@class NSMapTable, NSMutableArray, NSString;

@protocol SBIconIndexMutableListObserver, SBIconIndexNode;

@interface SBIconIndexMutableList : NSObject

{
    NSMutableArray *_nodes;
    NSMapTable *_index;
    id <SBIconIndexMutableListObserver> _observer;
}

@property (weak, nonatomic) id <SBIconIndexMutableListObserver> observer;
@property (nonatomic, readonly) id <SBIconIndexNode> firstNode;
@property (nonatomic, readonly) id <SBIconIndexNode> lastNode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (unsigned long long)count;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (void)sortUsingSelector:(SEL)arg1;
- (void)addNode:(id)arg1;
- (id)nodes;
- (void)removeNode:(id)arg1;
- (_Bool)containsNode:(id)arg1;
- (void)removeAllNodes;
- (void)enumerateNodesUsingBlock:(CDUnknownBlockType)arg1;
- (void)node:(id)arg1 didAddContainedNodeIdentifiers:(id)arg2;
- (void)node:(id)arg1 didRemoveContainedNodeIdentifiers:(id)arg2;
- (void)nodeDidMoveContainedNodes:(id)arg1;
- (_Bool)containsNodeIdentifier:(id)arg1;
- (unsigned long long)indexOfNode:(id)arg1;
- (id)indexPathsForContainedNodeIdentifier:(id)arg1 prefixPath:(id)arg2;
- (id)nodeAtIndex:(unsigned long long)arg1;
- (id)nodesAlongIndexPath:(id)arg1 consumedIndexes:(unsigned long long)arg2;
- (id)containedNodeIdentifiers;
- (void)insertNode:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)removeNodesAtIndexes:(id)arg1;
- (void)moveNodes:(id)arg1 toContiguousIndicesStartingAt:(unsigned long long)arg2;
- (id)nodesContainingNodeIdentifier:(id)arg1;
- (unsigned long long)indexOfNodePassingTest:(CDUnknownBlockType)arg1;
- (id)indexesOfNodesPassingTest:(CDUnknownBlockType)arg1;
- (void)replaceNodeAtIndex:(unsigned long long)arg1 withNode:(id)arg2;
- (void)removeNodeAtIndex:(unsigned long long)arg1;
- (void)removeLastNode;
- (void)moveNode:(id)arg1 toIndex:(unsigned long long)arg2;
- (void)enumerateNodesWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)indexDescriptionWithPrefix:(id)arg1;

@end
