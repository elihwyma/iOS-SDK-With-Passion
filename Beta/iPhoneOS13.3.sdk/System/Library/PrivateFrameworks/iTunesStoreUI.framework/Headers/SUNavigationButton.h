/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <UIKit/UINavigationButton.h>

@class UIView;

@interface SUNavigationButton : UINavigationButton

{
    UIView *_accessoryView;
    struct UIEdgeInsets _accessoryViewInsets;
}

@property (retain, nonatomic) UIView *accessoryView;
@property (nonatomic) struct UIEdgeInsets accessoryViewInsets;

- (void)dealloc;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (struct CGRect)titleRectForContentRect:(struct CGRect)arg1;
- (struct CGRect)_accessoryViewRectForContentRect:(struct CGRect)arg1;

@end
