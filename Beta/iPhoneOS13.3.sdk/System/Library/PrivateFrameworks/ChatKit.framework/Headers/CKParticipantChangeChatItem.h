/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <ChatKit/CKMultilineStampChatItem.h>

@interface CKParticipantChangeChatItem : CKMultilineStampChatItem

- (id)handle;
- (long long)changeType;
- (id)sender;
- (id)loadTranscriptText;

@end
