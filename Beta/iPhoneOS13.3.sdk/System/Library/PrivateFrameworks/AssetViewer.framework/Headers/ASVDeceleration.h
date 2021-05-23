/*
 Image: /System/Library/PrivateFrameworks/AssetViewer.framework/AssetViewer
 */

#import <Foundation/NSObject.h>

@interface ASVDeceleration : NSObject

{
    _Bool _isDecelerating;
    float _velocity;
    float _minEndDelta;
    double _startTime;
    double _currentTime;
    double _previousTime;
    long long _frameCount;
}

@property (nonatomic) float velocity;
@property (nonatomic) float minEndDelta;
@property (nonatomic) double startTime;
@property (nonatomic) double currentTime;
@property (nonatomic) double previousTime;
@property (nonatomic) long long frameCount;
@property (nonatomic) _Bool isDecelerating;

- (id)initWithVelocity:(float)arg1 minEndDelta:(float)arg2;
- (float)decelerationDelta;

@end
