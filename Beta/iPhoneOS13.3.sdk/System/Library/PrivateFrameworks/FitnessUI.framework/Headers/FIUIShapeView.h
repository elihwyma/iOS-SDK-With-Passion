/*
 Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

#import <UIKit/UIView.h>

@interface FIUIShapeView : UIView

+ (Class)layerClass;

- (void)setPath:(id)arg1;
- (void)setLineWidth:(double)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (_Bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (id)shapeLayer;
- (void)setFillColor:(id)arg1;
- (void)setStrokeColor:(id)arg1;
- (void)setStrokeEnd:(double)arg1;

@end
