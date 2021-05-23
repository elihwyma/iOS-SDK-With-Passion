/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UIView.h>

@class UILabel;

__attribute__((visibility("hidden")))
@interface SKUIDeveloperInfoLineItemView : UIView

{
    struct UIEdgeInsets _contentInset;
    UILabel *_labelLabel;
    UIView *_separatorView;
    UILabel *_valueLabel;
}

@property (nonatomic) struct UIEdgeInsets contentInset;

- (void)setBackgroundColor:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithLabel:(id)arg1 value:(id)arg2;

@end
