/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UIView.h>

__attribute__((visibility("hidden")))
@interface SKUIBarRatingView : UIView

{
    long long _barRatingStyle;
    long long _numberOfBars;
    float _ratingValue;
}

@property (nonatomic) long long barRatingStyle;
@property (nonatomic) long long numberOfBars;
@property (nonatomic) float ratingValue;

- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)drawRect:(struct CGRect)arg1;

@end
