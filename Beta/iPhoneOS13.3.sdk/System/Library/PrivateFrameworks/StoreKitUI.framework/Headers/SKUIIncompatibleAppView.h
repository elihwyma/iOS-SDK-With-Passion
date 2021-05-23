/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UIView.h>

@class NSMutableArray, NSString, UIImage, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface SKUIIncompatibleAppView : UIView

{
    NSMutableArray *_buttons;
    UIImageView *_iconView;
    UILabel *_messageLabel;
    UILabel *_titleLabel;
}

@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) UIImage *iconImage;

- (void)setBackgroundColor:(id)arg1;
- (void)layoutSubviews;
- (id)addButtonWithTitle:(id)arg1;
- (void)removeButtonTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned long long)arg3;

@end
