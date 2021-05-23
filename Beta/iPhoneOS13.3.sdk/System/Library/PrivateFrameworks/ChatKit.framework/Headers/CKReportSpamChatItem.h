/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <ChatKit/CKStampChatItem.h>

@class NSAttributedString;

@interface CKReportSpamChatItem : CKStampChatItem

{
    NSAttributedString *_transcriptButtonText;
}

@property (copy, nonatomic) NSAttributedString *transcriptButtonText;
@property (copy, nonatomic, readonly) NSAttributedString *internalPhishingWarning;

- (Class)cellClass;
- (id)loadTranscriptText;
- (struct CGSize)loadSizeThatFits:(struct CGSize)arg1 textAlignmentInsets:(out struct UIEdgeInsets *)arg2;
- (_Bool)isGroupChat;
- (_Bool)showReportSMSSpam;
- (_Bool)hasMultipleMessages;
- (id)transcriptTextForSpam:(_Bool)arg1;

@end
