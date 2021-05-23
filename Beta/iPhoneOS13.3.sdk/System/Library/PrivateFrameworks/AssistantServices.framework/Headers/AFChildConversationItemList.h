/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <Foundation/NSObject.h>

@class AFConversation, NSUUID;

@interface AFChildConversationItemList : NSObject

{
    AFConversation *_conversation;
    NSUUID *_parentItemIdentifier;
}

@property (nonatomic, readonly, getter=_conversation) AFConversation *conversation;
@property (nonatomic, readonly, getter=_parentItemIdentifier) NSUUID *parentItemIdentifier;

- (id)init;
- (long long)numberOfItems;
- (id)itemWithIdentifier:(id)arg1;
- (id)itemAtIndex:(long long)arg1;
- (void)removeItemsWithIdentifiers:(id)arg1;
- (id)initWithConversation:(id)arg1 parentItemIdentifier:(id)arg2;
- (id)_indexPathForItemAtIndex:(long long)arg1;
- (void)_addItemsForAceObjects:(id)arg1 type:(long long)arg2 dialogPhase:(id)arg3 asChildrenOfItemWithIdentifier:(id)arg4;
- (id)_identifierOfItemAtIndex:(long long)arg1;
- (id)_indexPathForLastRestoredItem;
- (void)addItemsForAceObjects:(id)arg1 type:(long long)arg2 dialogPhase:(id)arg3;
- (void)addItemsForAceObjects:(id)arg1 type:(long long)arg2 dialogPhase:(id)arg3 asChildrenOfItemAtIndex:(long long)arg4;
- (id)identifiersForItemsAtIndexes:(id)arg1;
- (void)removeItemsAtIndexes:(id)arg1;
- (_Bool)itemIsRestoredAtIndex:(long long)arg1;

@end
