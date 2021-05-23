/*
 Image: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
 */

#import <UIKit/UIImageView.h>

@class UIColor;

@interface StocksListBoxView : UIImageView

{
    UIColor *_imageMaskColor;
}

@property (retain, nonatomic) UIColor *imageMaskColor;

- (id)initWithBackgroundMask:(id)arg1;

@end
