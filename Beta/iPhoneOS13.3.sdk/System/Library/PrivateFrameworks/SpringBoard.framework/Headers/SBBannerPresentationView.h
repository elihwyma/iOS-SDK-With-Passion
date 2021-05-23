/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <UIKit/UIView.h>

@interface SBBannerPresentationView : UIView

{
    UIView *_contentView;
}

@property (weak, nonatomic) UIView *contentView;

- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end
