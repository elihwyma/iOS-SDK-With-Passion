/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <ChatKit/CKTranscriptMultilineLabelCell.h>

@class UIView;

__attribute__((visibility("hidden")))
@interface CKUnreadCountLabelCell : CKTranscriptMultilineLabelCell

{
    UIView *_leftSeparator;
    UIView *_rightSeparator;
}

@property (retain, nonatomic) UIView *leftSeparator;
@property (retain, nonatomic) UIView *rightSeparator;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviewsForContents;

@end
