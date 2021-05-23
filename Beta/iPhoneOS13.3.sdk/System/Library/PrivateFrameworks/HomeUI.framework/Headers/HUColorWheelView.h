/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <UIKit/UIView.h>

@protocol HUColorWheelSpace;

@interface HUColorWheelView : UIView

{
    double _wheelHoleRadius;
    id <HUColorWheelSpace> _colorWheelSpace;
}

@property (nonatomic) double wheelHoleRadius;
@property (retain, nonatomic) id <HUColorWheelSpace> colorWheelSpace;

+ (double)_colorWheelRenderingScale;

- (void)drawRect:(struct CGRect)arg1;
- (double)_outerRadius;
- (id)wheelBezierPath;
- (id)initWithColorWheelSpace:(id)arg1;
- (struct CGPoint)pointForColorWheelCoordinate:(CDStruct_c3b9c2ee)arg1;
- (CDStruct_c3b9c2ee)colorWheelCoordinateForPoint:(struct CGPoint)arg1 boundedToWheel:(_Bool)arg2;

@end
