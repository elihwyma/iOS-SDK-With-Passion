/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <UIKit/UIView.h>

@interface SUFooterContainerView : UIView

{
    UIView *_contentView;
    UIView *_footerView;
    _Bool _footerVisible;
}

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIView *footerView;
@property (nonatomic, getter=isFooterVisible) _Bool footerVisible;

- (void)layoutSubviews;

@end
