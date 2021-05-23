/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UIButton.h>

@class UIView;

__attribute__((visibility("hidden")))
@interface SKUIGiftAmountButton : UIButton

{
    UIView *_borderView;
}

- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)setSelected:(_Bool)arg1;
- (void)_reloadBorderView;

@end
