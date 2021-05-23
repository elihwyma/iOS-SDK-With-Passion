/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UIView.h>

@class NSAttributedString, NSString, UIButton, UILabel;

@protocol SKUIMessageBannerDelegate;

@interface SKUIMessageBanner : UIView

{
    id <SKUIMessageBannerDelegate> _delegate;
    UILabel *_label;
    UIButton *_button;
    UIView *_borderView;
    UIButton *_clearButton;
    NSAttributedString *_attributedMessage;
}

@property (weak, nonatomic) id <SKUIMessageBannerDelegate> delegate;
@property (retain, nonatomic) NSString *message;
@property (retain, nonatomic) NSAttributedString *attributedMessage;
@property (nonatomic) _Bool showsClearButton;

- (id)value;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)_buttonAction:(id)arg1;
- (void)_clearButtonAction:(id)arg1;

@end
