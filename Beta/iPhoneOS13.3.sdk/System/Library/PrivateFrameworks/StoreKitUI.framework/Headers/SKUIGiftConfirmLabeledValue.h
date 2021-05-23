/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UIView.h>

@class NSString, SKUIGiftDashView, UILabel;

__attribute__((visibility("hidden")))
@interface SKUIGiftConfirmLabeledValue : UIView

{
    SKUIGiftDashView *_dashView;
    UILabel *_labelLabel;
    long long _style;
    UILabel *_valueLabel;
    UILabel *_subtitleLabel;
}

@property (nonatomic, readonly) long long giftConfirmLabelStyle;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSString *subtitleLabel;
@property (copy, nonatomic) NSString *value;

- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithGiftConfirmLabelStyle:(long long)arg1;

@end
