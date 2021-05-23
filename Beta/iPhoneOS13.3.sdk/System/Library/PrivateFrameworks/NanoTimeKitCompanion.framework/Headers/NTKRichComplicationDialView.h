/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <UIKit/UIView.h>

@class CALayer, CAReplicatorLayer;

@interface NTKRichComplicationDialView : UIView

{
    CAReplicatorLayer *_largeTicksReplicatorLayer;
    CALayer *_largeTickLayer;
    double _largeTickPositionY;
    CAReplicatorLayer *_smallTicksReplicatorLayer;
    CALayer *_smallTickLayer;
    double _smallTickPositionY;
    long long _largeTickCount;
    long long _smallTickCountPerLargeTick;
    double _largeTicksTransformAngle;
    float _progress;
    float _progressDirection;
}

@property (nonatomic, readonly) CALayer *largeTickLayer;
@property (nonatomic, readonly) CALayer *smallTickLayer;
@property (nonatomic) float progress;
@property (nonatomic) float progressDirection;

- (void)layoutSubviews;
- (id)initWithLargeTickCount:(long long)arg1 smallTickCountPerLargeTick:(long long)arg2 largeTickSize:(struct CGSize)arg3 smallTickSize:(struct CGSize)arg4 dialRange:(double)arg5 startAngle:(double)arg6;
- (void)setLargeTicksTransformAngle:(double)arg1;
- (void)_updateTicksRotationTransform;
- (id)initWithTickCount:(long long)arg1 tickSize:(struct CGSize)arg2 dialRange:(double)arg3 startAngle:(double)arg4;

@end
