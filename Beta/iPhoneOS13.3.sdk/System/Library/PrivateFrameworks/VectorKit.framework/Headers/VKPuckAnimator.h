/*
 Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import <Foundation/NSObject.h>

@class GEORouteMatch, VKPuckAnimatorLocationProjector, VKRunningCurve, VKTimedAnimation;

@protocol VKPuckAnimatorDelegate, VKPuckAnimatorTarget;

@interface VKPuckAnimator : NSObject

{
    id <VKPuckAnimatorTarget> _target;
    VKTimedAnimation *_animation;
    VKRunningCurve *_curve;
    VKPuckAnimatorLocationProjector *_locationProjector;
    double _vehicleHeading;
    id <VKPuckAnimatorDelegate> _delegate;
    long long _pausedCount;
    _Bool _suspended;
    double _tracePlaybackSpeedMultiplier;
    unsigned long long _behavior;
    Matrix_6e1d3589 _lastProjectedPosition;
    GEORouteMatch *_lastProjectedLocation;
}

@property (retain, nonatomic) GEORouteMatch *lastProjectedLocation;
@property (retain, nonatomic) id <VKPuckAnimatorTarget> target;
@property (nonatomic) id <VKPuckAnimatorDelegate> delegate;
@property (nonatomic) double tracePlaybackSpeedMultiplier;
@property (nonatomic) unsigned long long behavior;

- (id)init;
- (void)dealloc;
- (void)pause;
- (void)resume;
- (void)stop;
- (void)start;
- (id).cxx_construct;
- (void)_step;
- (id)detailedDescription;
- (void)updateLocation:(id)arg1 routeMatch:(id)arg2;
- (void)updateVehicleHeading:(double)arg1;

@end
