/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIViewReuseView.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface SKUINavigationBarMenusView : SKUIViewReuseView

{
    SEL _buttonAction;
    id _buttonTarget;
    struct UIEdgeInsets _contentInset;
    NSArray *_menuViewElements;
}

@property (nonatomic) struct UIEdgeInsets contentInset;

+ (id)_attributedStringWithMenuItem:(id)arg1 context:(id)arg2;
+ (void)requestLayoutWithMenus:(id)arg1 width:(long long)arg2 context:(id)arg3;

- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)reloadWithMenus:(id)arg1 width:(long long)arg2 context:(id)arg3;
- (void)setButtonTarget:(id)arg1 action:(SEL)arg2;

@end
