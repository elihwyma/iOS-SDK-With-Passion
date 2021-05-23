/*
 Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

#import <Foundation/NSObject.h>

@class GKListNode;

@interface GKLinkedList : NSObject

{
    GKListNode *_headNode;
    GKListNode *_tailNode;
}

@property (nonatomic) GKListNode *headNode;
@property (nonatomic) GKListNode *tailNode;

- (id)init;
- (void)dealloc;
- (id)description;
- (void)removeNode:(id)arg1;
- (void)insertNode:(id)arg1 before:(id)arg2;
- (void)removeAllNodes;
- (_Bool)isConsistent;
- (id)nodeForInsertionWithValue:(id)arg1;
- (void)insertNodeAtBeginning:(id)arg1;
- (id)insertNodeAtBeginningWithValue:(id)arg1 forKey:(id)arg2;
- (_Bool)hasCycle;

@end
