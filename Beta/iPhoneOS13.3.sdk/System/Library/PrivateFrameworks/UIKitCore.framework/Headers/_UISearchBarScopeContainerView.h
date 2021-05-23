/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class _UISearchBarScopeContainerLayout;

__attribute__((visibility("hidden")))
@interface _UISearchBarScopeContainerView : UIView

{
    _UISearchBarScopeContainerLayout *_layout;
}

@property (retain, nonatomic) _UISearchBarScopeContainerLayout *layout;

- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setNeedsLayout;
- (void)layoutSubviews;
- (_Bool)_isKnownUISearchBarComponentContainer;

@end
