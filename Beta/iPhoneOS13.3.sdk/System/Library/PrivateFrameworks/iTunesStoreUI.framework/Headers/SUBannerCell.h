/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/SUTableCell.h>

@class NSString, UIButton;

@interface SUBannerCell : SUTableCell

{
    UIButton *_leftButton;
    UIButton *_rightButton;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)setConfiguration:(id)arg1;
- (void)layoutSubviews;
- (id)_newButton;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_buttonAction:(id)arg1;
- (void)reloadView;
- (void)_reloadButtons;

@end
