/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <UIKit/UIView.h>

@class UIControl, _UIBackdropView;

@interface SUSegmentedControlBar : UIView

{
    UIControl *_control;
    _UIBackdropView *_backdropView;
    UIView *_separatorView;
}

- (void)dealloc;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithSegmentedControl:(id)arg1;

@end
