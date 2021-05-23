/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UIView.h>

@class NSArray, SKUIClientContext, SKUIColorScheme, UIButton, UIControl, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface SKUIReviewsFacebookView : UIView

{
    SKUIClientContext *_clientContext;
    SKUIColorScheme *_colorScheme;
    NSArray *_friendNames;
    UILabel *_friendsLabel;
    UIButton *_likeButton;
    UIImageView *_logoImageView;
    UILabel *_titleLabel;
    _Bool _userLiked;
    UIView *_separatorView;
    struct UIEdgeInsets _contentInsets;
}

@property (retain, nonatomic) SKUIColorScheme *colorScheme;
@property (nonatomic) struct UIEdgeInsets contentInsets;
@property (copy, nonatomic) NSArray *friendNames;
@property (nonatomic, readonly) UIControl *likeToggleButton;
@property (nonatomic, getter=isUserLiked) _Bool userLiked;

- (void)setBackgroundColor:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithClientContext:(id)arg1;
- (void)_reloadFriendNamesLabel;
- (void)_reloadLikeButtonState;
- (id)_composedStringForNames:(id)arg1 userLiked:(_Bool)arg2;

@end
