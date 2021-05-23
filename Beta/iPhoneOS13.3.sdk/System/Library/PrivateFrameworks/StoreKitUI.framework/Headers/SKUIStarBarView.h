/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UIView.h>

@class UIColor, UIImage;

__attribute__((visibility("hidden")))
@interface SKUIStarBarView : UIView

{
    UIColor *_emptyColor;
    UIImage *_emptyStarImage;
    UIColor *_filledColor;
    UIImage *_filledStarImage;
    long long _numberOfStars;
    double _value;
}

@property (copy, nonatomic) UIColor *emptyColor;
@property (copy, nonatomic) UIColor *filledColor;
@property (nonatomic) long long numberOfStars;
@property (nonatomic) double value;

- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)setColoringUsingStyle:(id)arg1;

@end
