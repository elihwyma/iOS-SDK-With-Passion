/*
 Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

#import <Foundation/NSArray.h>

@class IMMessage, IMMessageItem;

@interface NSArray (IMItems)

@property (nonatomic, readonly) IMMessageItem *firstMessageItem;
@property (nonatomic, readonly) IMMessageItem *lastMessageItem;
@property (nonatomic, readonly) IMMessage *firstMessage;
@property (nonatomic, readonly) IMMessage *lastMessage;
@property (nonatomic, readonly) IMMessage *lastFinishedMessage;
@property (nonatomic, readonly) IMMessage *lastIncomingMessage;
@property (nonatomic, readonly) IMMessage *lastIncomingFinishedMessage;
@property (nonatomic, readonly) IMMessageItem *__imLastMessageItem;

- (id)messages;
- (void)enumerateMessagesWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (_Bool)equivalentToRecipients:(id)arg1;
- (id)indexesOfPartsOfMessage:(id)arg1;
- (id)indexesOfPartsOfMessageItem:(id)arg1;
- (void)__enumerateItemsWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)__imItems;
- (id)__itemForChatItemAtIndex:(unsigned long long)arg1;
- (id)messageForChatItemAtIndex:(unsigned long long)arg1;

@end
