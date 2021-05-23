/*
 Image: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
 */

#import <UIKit/UIView.h>

@class UIActivityIndicatorView, UILabel, UINavigationItem;

@interface CNFRegNavigationBarTitleView : UIView

{
    UINavigationItem *_item;
    UILabel *_titleLabel;
    UIActivityIndicatorView *_activityIndicator;
}

@property (nonatomic) UINavigationItem *item;

- (void)dealloc;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithNavigationItem:(id)arg1;
- (id)_defaultFont;
- (id)_currentTextColorForBarStyle:(long long)arg1;
- (struct CGSize)_currentTextShadowOffsetForBarStyle:(long long)arg1;
- (id)_currentTextShadowColorForBarStyle:(long long)arg1;
- (_Bool)_useSilverLookForBarStyle:(long long)arg1;
- (void)_updateTitleLabel;
- (id)_titleTextColorForBarStyle:(long long)arg1;

@end
