/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <ChatKit/CKAttachmentMessagePartChatItem.h>

@interface CKExpirableMessageChatItem : CKAttachmentMessagePartChatItem

@property (nonatomic, readonly) _Bool isPlayed;
@property (nonatomic, readonly) _Bool isSaved;

- (_Bool)canCopy;
- (_Bool)canExport;
- (_Bool)canSendAsTextMessage;
- (_Bool)canForward;

@end
