/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UIView.h>

@class UIColor;

@interface SKUISeparatorView : UIView

{
    UIColor *_color1;
    UIColor *_color2;
    long long _separatorStyle;
}

@property (copy, nonatomic) UIColor *color1;
@property (copy, nonatomic) UIColor *color2;
@property (nonatomic) long long separatorStyle;

- (void)drawRect:(struct CGRect)arg1;

@end
