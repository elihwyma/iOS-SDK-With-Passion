/*
 Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import <UIKit/UIView.h>

@class PSCapacityBarData, UIColor;

@interface PSCapacityBarView : UIView

{
    PSCapacityBarData *_barData;
    UIColor *_barBackgroundColor;
    UIColor *_barSeparatorColor;
    UIColor *_barOtherDataColor;
}

@property (retain, nonatomic) PSCapacityBarData *barData;
@property (retain, nonatomic) UIColor *barBackgroundColor;
@property (retain, nonatomic) UIColor *barSeparatorColor;
@property (retain, nonatomic) UIColor *barOtherDataColor;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (id)bezierPathWithLineFrom:(struct CGPoint)arg1 to:(struct CGPoint)arg2;

@end
