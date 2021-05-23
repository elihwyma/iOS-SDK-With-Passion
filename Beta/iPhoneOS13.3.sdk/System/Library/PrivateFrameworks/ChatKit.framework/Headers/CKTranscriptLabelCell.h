/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <ChatKit/CKTranscriptCell.h>

@class NSAttributedString, UILabel;

@interface CKTranscriptLabelCell : CKTranscriptCell

{
    _Bool _wantsContactImageLayout;
    UILabel *_label;
}

@property (copy, nonatomic) NSAttributedString *attributedText;
@property (nonatomic) _Bool wantsContactImageLayout;
@property (retain, nonatomic) UILabel *label;

+ (id)label;

- (void)setOrientation:(BOOL)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)clearFilters;
- (void)addFilter:(id)arg1;
- (void)layoutSubviewsForAlignmentContents;
- (void)layoutSubviewsForContents;
- (void)configureForChatItem:(id)arg1;

@end
