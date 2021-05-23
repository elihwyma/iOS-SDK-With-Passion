/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UIView.h>

@class NSString, UILabel;

__attribute__((visibility("hidden")))
@interface SKUIGiftTableSectionHeaderView : UIView

{
    struct UIEdgeInsets _contentInsets;
    UILabel *_label;
}

@property (nonatomic) struct UIEdgeInsets contentInsets;
@property (copy, nonatomic) NSString *label;

- (void)setBackgroundColor:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;

@end
