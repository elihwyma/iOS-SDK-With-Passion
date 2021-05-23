/*
 Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

#import <UIKit/UIView.h>

@class FIUIShapeView;

@interface FIUIGradientView : UIView

{
    FIUIShapeView *_maskView;
}

+ (Class)layerClass;

- (id)init;
- (void)setMask:(id)arg1;
- (void)layoutSubviews;
- (void)setColors:(id)arg1;
- (void)setLocations:(id)arg1;
- (id)gradientLayer;

@end
