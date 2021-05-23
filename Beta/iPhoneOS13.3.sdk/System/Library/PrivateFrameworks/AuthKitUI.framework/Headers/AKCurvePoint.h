/*
 Image: /System/Library/PrivateFrameworks/AuthKitUI.framework/AuthKitUI
 */

#import <Foundation/NSObject.h>

@interface AKCurvePoint : NSObject

{
    double _x;
    double _y;
    double _roundness;
    double _smoothness;
    struct CGPoint _leftTangentPoint;
    struct CGPoint _rightTangentPoint;
}

@property double x;
@property double y;
@property struct CGPoint leftTangentPoint;
@property struct CGPoint rightTangentPoint;
@property double roundness;
@property double smoothness;
@property struct CGPoint CGPoint;

+ (id)pointWithX:(double)arg1 y:(double)arg2;
+ (id)pointWithCGPoint:(struct CGPoint)arg1;

- (id)initWithX:(double)arg1 y:(double)arg2;

@end
