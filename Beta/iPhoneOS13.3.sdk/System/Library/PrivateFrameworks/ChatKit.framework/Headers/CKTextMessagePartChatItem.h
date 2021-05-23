/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <ChatKit/CKMessagePartChatItem.h>

@class NSAttributedString, UIItemProvider;

@interface CKTextMessagePartChatItem : CKMessagePartChatItem

{
    UIItemProvider *_dragItemProvider;
}

@property (copy, nonatomic, readonly) NSAttributedString *text;
@property (copy, nonatomic, readonly) NSAttributedString *fallbackCorruptText;
@property (copy, nonatomic, readonly) NSAttributedString *subject;
@property (nonatomic, readonly) _Bool containsHyperlink;
@property (nonatomic, readonly) _Bool containsExcessiveLineHeightCharacters;

- (id)_time;
- (id)composition;
- (Class)balloonViewClass;
- (id)pasteboardItems;
- (id)loadTranscriptText;
- (id)dragItemProvider;
- (id)_attributedTextWithTextColor:(id)arg1;
- (_Bool)shouldUseBigEmoji;
- (id)_fallbackCorruptMessageTextWithTextColor:(id)arg1;
- (_Bool)showMoneyResults;
- (Class)impactBalloonViewClass;
- (id)sendAnimationTextWithColor:(id)arg1;

@end
