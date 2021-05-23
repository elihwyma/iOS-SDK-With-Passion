/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <ChatKit/CKMultilineStampChatItem.h>

@interface CKMessageActionChatItem : CKMultilineStampChatItem

- (id)handle;
- (id)sender;
- (long long)actionType;
- (id)loadTranscriptText;

@end
