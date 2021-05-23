/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <UIKit/UIView.h>

@class MKVibrantView, UIColor;

@interface MKViewWithHairline : UIView

{
    MKVibrantView *_bottomHairline;
    MKVibrantView *_topHairline;
    UIColor *_hairlineColor;
    double _leftHairlineInset;
    double _rightHairlineInset;
}

@property (retain, nonatomic) UIColor *hairlineColor;
@property (nonatomic) double leftHairlineInset;
@property (nonatomic) double rightHairlineInset;
@property (nonatomic, getter=isTopHairlineHidden) _Bool topHairlineHidden;
@property (nonatomic, getter=isBottomHairlineHidden) _Bool bottomHairlineHidden;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;

@end
