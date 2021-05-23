/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <ChatKit/CKTranscriptCell.h>

@class UIButton;

@interface CKTranscriptMessageCell : CKTranscriptCell

{
    _Bool _wantsContactImageLayout;
    UIButton *_failureButton;
}

@property (retain, nonatomic) UIButton *failureButton;
@property (nonatomic) _Bool wantsContactImageLayout;
@property (nonatomic) _Bool failed;
@property (nonatomic, readonly) _Bool failureButtonAdjustsContentAlignmentRect;

+ (double)failureButtonWidthPlusSpacing;

- (id)description;
- (struct UIEdgeInsets)safeAreaInsets;
- (id)contactImageView;
- (void)layoutSubviewsForContents;

@end
