/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface _CKAcknowledgmentVoteCountView : UIView

{
    UILabel *_voteCountLabel;
    UIImageView *_ackIconImageView;
}

@property (retain, nonatomic) UILabel *voteCountLabel;
@property (retain, nonatomic) UIImageView *ackIconImageView;

- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)configureWithAcknowledgmentTally:(id)arg1;

@end
