/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <QuartzCore/CALayer.h>

@interface PXProgressArcLayer : CALayer

{
    double _radius;
    double _startAngle;
    double _endAngle;
    double _lineWidth;
}

@property (nonatomic) double radius;
@property (nonatomic) double startAngle;
@property (nonatomic) double endAngle;
@property (nonatomic) double lineWidth;

- (id)init;
- (void)drawInContext:(struct CGContext *)arg1;

@end
