//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoardHome/SBIconIndexNodeObserver-Protocol.h>

@class NSMapTable, NSMutableArray;
@protocol SBIconIndexMutableListObserver, SBIconIndexNode;

@interface SBIconIndexMutableList : NSObject <SBIconIndexNodeObserver, NSFastEnumeration>
{
    NSMutableArray *_nodes;
    NSMapTable *_index;
    id <SBIconIndexMutableListObserver> _observer;
}

@property(nonatomic) __weak id <SBIconIndexMutableListObserver> observer; // @synthesize observer=_observer;
// - (void).cxx_destruct;
- (id)indexDescriptionWithPrefix:(id)arg1;
- (NSUInteger)countByEnumeratingWithState:(CDStruct_70511ce9 )arg1 objects:(id )arg2 count:(NSUInteger)arg3;
- (void)nodeDidMoveContainedNodes:(id)arg1;
- (void)node:(id)arg1 didRemoveContainedNodeIdentifiers:(id)arg2;
- (void)node:(id)arg1 didAddContainedNodeIdentifiers:(id)arg2;
- (void)sortUsingSelector:(SEL)arg1;
- (void)enumerateNodesWithOptions:(NSUInteger)arg1 usingBlock:(id /* CDUnknownBlockType */)arg2;
- (void)enumerateNodesUsingBlock:(id /* CDUnknownBlockType */)arg1;
- (void)moveNodes:(id)arg1 toContiguousIndicesStartingAt:(NSUInteger)arg2;
- (void)moveNode:(id)arg1 toIndex:(NSUInteger)arg2;
- (void)removeAllNodes;
- (void)removeLastNode;
- (void)removeNodesAtIndexes:(id)arg1;
- (void)removeNodeAtIndex:(NSUInteger)arg1;
- (void)removeNode:(id)arg1;
- (void)replaceNodeAtIndex:(NSUInteger)arg1 withNode:(id)arg2;
- (void)addNode:(id)arg1;
- (void)insertNode:(id)arg1 atIndex:(NSUInteger)arg2;
@property(readonly, nonatomic) id <SBIconIndexNode> lastNode;
@property(readonly, nonatomic) id <SBIconIndexNode> firstNode;
- (id)nodeAtIndex:(NSUInteger)arg1;
- (BOOL)containsNode:(id)arg1;
- (id)indexesOfNodesPassingTest:(id /* CDUnknownBlockType */)arg1;
- (NSUInteger)indexOfNodePassingTest:(id /* CDUnknownBlockType */)arg1;
- (NSUInteger)indexOfNode:(id)arg1;
- (NSUInteger)count;
- (id)nodes;
- (id)nodesAlongIndexPath:(id)arg1 consumedIndexes:(NSUInteger)arg2;
- (id)indexPathsForContainedNodeIdentifier:(id)arg1 prefixPath:(id)arg2;
- (id)containedNodeIdentifiers;
- (id)nodesContainingNodeIdentifier:(id)arg1;
- (BOOL)containsNodeIdentifier:(id)arg1;
- (void)dealloc;
- (id)init;

@end

