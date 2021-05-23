/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <Foundation/NSObject.h>

@class CADisplayLink, MISSING_TYPE;

@protocol NTKAstronomyRotationModelObserver, NURotatable;

@interface NTKAstronomyRotationModel : NSObject

{
    CADisplayLink *_displayLink;
    const struct NTKAstronomyInteractionSettings *_interactionSettings;
    id <NTKAstronomyRotationModelObserver> _observer;
    id <NURotatable> _rotatable;
    long long _state;
    struct CLLocationCoordinate2D _landingCoordinate;
    MISSING_TYPE *_accumulatedPushVector;
    float _effectivePushDeceleration;
    float _effectivePullAcceleration;
    double _pushStartTime;
    double _pullStartTime;
    double _previousDisplayLinkCallbackTime;
    _Bool _isPulling;
}

@property (nonatomic, readonly) const struct NTKAstronomyInteractionSettings *interactionSettings;
@property (weak, nonatomic) id <NURotatable> rotatable;
@property (weak, nonatomic) id <NTKAstronomyRotationModelObserver> observer;
@property (nonatomic, getter=isPulling) _Bool pulling;

- (id)init;
- (void)dealloc;
- (void)_update;
- (void)stop;
- (void)push: /* Error: Ran out of types for this method. */;
- (void)_handleDisplayLink;
- (_Bool)isAtHomeCoordinate;

@end
