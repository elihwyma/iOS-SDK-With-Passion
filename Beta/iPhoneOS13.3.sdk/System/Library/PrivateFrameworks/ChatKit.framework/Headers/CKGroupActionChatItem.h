/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <ChatKit/CKMultilineStampChatItem.h>

@interface CKGroupActionChatItem : CKMultilineStampChatItem

- (id)sender;
- (long long)actionType;
- (id)loadTranscriptText;

@end
