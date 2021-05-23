/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <ChatKit/CKTranscriptLabelCell.h>

@class NSAttributedString, UIButton, UILabel;

__attribute__((visibility("hidden")))
@interface CKTranscriptReportSpamCell : CKTranscriptLabelCell

{
    _Bool _showReportSMSSpam;
    UIButton *_reportSpamButton;
    UILabel *_internalPhishingWarningLabel;
}

@property (nonatomic, readonly) UILabel *internalPhishingWarningLabel;
@property (copy, nonatomic) NSAttributedString *attributedButtonText;
@property (retain, nonatomic) UIButton *reportSpamButton;
@property (nonatomic) _Bool showReportSMSSpam;

+ (id)reportSpamButton;
+ (id)internalPhishingWarning;
+ (id)internalPhishingWarningLabel;

- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)clearFilters;
- (void)addFilter:(id)arg1;
- (void)layoutSubviewsForAlignmentContents;
- (void)configureForChatItem:(id)arg1;

@end
