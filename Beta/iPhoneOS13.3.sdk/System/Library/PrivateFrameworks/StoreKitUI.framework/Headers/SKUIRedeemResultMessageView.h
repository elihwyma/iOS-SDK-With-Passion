/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UIView.h>

@class NSString, UILabel;

__attribute__((visibility("hidden")))
@interface SKUIRedeemResultMessageView : UIView

{
    UILabel *_messageLabel;
    UILabel *_titleLabel;
}

@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) NSString *title;

- (void)setBackgroundColor:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;

@end
