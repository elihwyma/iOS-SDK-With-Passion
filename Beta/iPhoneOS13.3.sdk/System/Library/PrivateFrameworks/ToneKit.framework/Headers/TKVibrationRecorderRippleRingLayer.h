/*
 Image: /System/Library/PrivateFrameworks/ToneKit.framework/ToneKit
 */

#import <QuartzCore/CAShapeLayer.h>

@interface TKVibrationRecorderRippleRingLayer : CAShapeLayer

{
    double _creationTimestamp;
    double _ringSpeed;
    struct CGPoint _normalizedRingLocation;
}

@property (nonatomic, readonly) struct CGPoint normalizedRingLocation;
@property (nonatomic, readonly) double ringSpeed;

- (id)init;
- (void)reset;
- (double)timeIntervalSinceCreation;
- (void)configureWithTimeIntervalSinceCreation:(double)arg1 normalizedRingLocation:(struct CGPoint)arg2 ringSpeed:(double)arg3;

@end
