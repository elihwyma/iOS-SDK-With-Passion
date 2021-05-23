/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <ChatKit/CKStampChatItem.h>

@class NSDate;

@interface CKDateChatItem : CKStampChatItem

@property (nonatomic, readonly) NSDate *date;

- (id)now;
- (id)loadTranscriptText;
- (struct CGSize)loadSizeThatFits:(struct CGSize)arg1 textAlignmentInsets:(out struct UIEdgeInsets *)arg2;

@end
