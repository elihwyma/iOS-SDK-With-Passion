/*
 Image: /System/Library/PrivateFrameworks/ActivitySharingUI.framework/ActivitySharingUI
 */

#import <UIKit/UIView.h>

@class UIImageView;

@interface ASCompetitionMessageBubbleView : UIView

{
    UIImageView *_backgroundView;
    UIImageView *_messageBubbleView;
}

- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;

@end
