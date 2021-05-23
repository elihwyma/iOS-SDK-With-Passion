/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
 */

#import <QuartzCore/CALayer.h>

@interface OKProgressArcLayer : CALayer

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
