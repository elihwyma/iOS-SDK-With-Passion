/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class _UISearchBarSearchContainerLayout;

__attribute__((visibility("hidden")))
@interface _UISearchBarSearchContainerView : UIView

{
    _UISearchBarSearchContainerLayout *_layout;
}

@property (retain, nonatomic) _UISearchBarSearchContainerLayout *layout;

- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setNeedsLayout;
- (void)layoutSubviews;
- (_Bool)_isKnownUISearchBarComponentContainer;

@end
