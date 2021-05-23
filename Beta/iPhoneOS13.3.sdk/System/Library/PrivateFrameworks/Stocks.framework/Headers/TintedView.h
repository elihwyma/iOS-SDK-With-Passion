/*
 Image: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
 */

#import <UIKit/UIView.h>

@class UIColor, UIImage;

@interface TintedView : UIView

{
    UIImage *_image;
    UIColor *_tintColor;
}

@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) UIColor *tintColor;

- (id)init;
- (void)drawRect:(struct CGRect)arg1;

@end
