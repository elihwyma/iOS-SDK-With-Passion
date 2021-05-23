/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <UIKit/UIScrollView.h>

@class UIView;

@interface GKCenteringScrollView : UIScrollView

{
    UIView *_contentView;
    UIView *_footerView;
}

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIView *footerView;

- (void)dealloc;
- (void)layoutSubviews;
- (void)centerContentViewIfDesirable;

@end
