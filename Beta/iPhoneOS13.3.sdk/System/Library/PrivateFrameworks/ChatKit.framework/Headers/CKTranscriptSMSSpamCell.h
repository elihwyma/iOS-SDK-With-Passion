/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <ChatKit/CKTranscriptLabelCell.h>

@class NSAttributedString;

__attribute__((visibility("hidden")))
@interface CKTranscriptSMSSpamCell : CKTranscriptLabelCell

{
    NSAttributedString *_attributedButtonText;
}

@property (copy, nonatomic) NSAttributedString *attributedButtonText;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)clearFilters;
- (void)addFilter:(id)arg1;
- (void)layoutSubviewsForAlignmentContents;
- (void)configureForChatItem:(id)arg1;

@end
