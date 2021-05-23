/*
 Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface IMItemsController : NSObject

{
    struct __CFArray *_items;
    unsigned long long _capacity;
}

@property (copy, nonatomic, readonly) NSArray *_items;
@property (nonatomic) unsigned long long capacity;
@property (nonatomic, readonly) _Bool isMoreToLoad;

+ (id)_charactersToIgnoreWhenParsingTextContent;

- (id)init;
- (void)dealloc;
- (void)_removeItem:(id)arg1;
- (void)_removeAllItems;
- (void)_itemsDidChange:(id)arg1;
- (id)_initWithItems:(id)arg1;
- (_Bool)_trimIfNeeded;
- (void)assignSortIDsToItems:(id)arg1 shouldRecalculateSortIDForAllMessages:(_Bool)arg2;
- (_Bool)_shouldPinUnsentMessagesToBottom;
- (void)assignSortIDsToItems:(id)arg1;
- (void)_replaceStaleTypingMessage;
- (void)_replaceItems:(id)arg1;
- (id)_lastIncomingFinishedMessageWithTextContent;
- (void)_handleItem:(id)arg1;
- (void)_resortItems;
- (void)_setSortID:(id)arg1;
- (unsigned long long)_indexOfItem:(id)arg1;
- (id)_member:(id)arg1;
- (id)_itemForGUID:(id)arg1;
- (id)_typingMessage;
- (id)_firstMessage;
- (id)_lastMessage;
- (id)_lastSentMessage;
- (id)_lastFinishedMessage;
- (id)_lastIncomingMessage;
- (id)_lastIncomingFinishedMessage;
- (id)_lastRelatedIncomingFinishedMessageTextContentWithLimit:(long long)arg1;

@end
