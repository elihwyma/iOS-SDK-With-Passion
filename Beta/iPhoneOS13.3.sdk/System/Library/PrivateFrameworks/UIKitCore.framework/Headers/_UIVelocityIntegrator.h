/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface _UIVelocityIntegrator : NSObject

{
    _Bool _hasMemoizedVelocity;
    double _minimumRequiredMovement;
    double _hysteresisTimeInterval;
    NSMutableArray *_samples;
    double _resetHysteresisOnSampleThetaDiff;
    CDUnknownBlockType _didResetHysteresisOnThetaDiffHandler;
    struct CGVector _offset;
    struct CGVector _totalTranslation;
    struct CGVector _memoizedVelocity;
}

@property (nonatomic) struct CGVector offset;
@property (retain, nonatomic) NSMutableArray *samples;
@property (nonatomic) struct CGVector totalTranslation;
@property (nonatomic) _Bool hasMemoizedVelocity;
@property (nonatomic) struct CGVector memoizedVelocity;
@property (nonatomic) double resetHysteresisOnSampleThetaDiff;
@property (copy, nonatomic) CDUnknownBlockType didResetHysteresisOnThetaDiffHandler;
@property (nonatomic) double minimumRequiredMovement;
@property (nonatomic, readonly) struct CGVector velocity;
@property (nonatomic) double hysteresisTimeInterval;

- (id)init;
- (void)reset;
- (void)addSample:(struct CGPoint)arg1;
- (_Bool)hasVelocity;
- (long long)_sampleCount;
- (struct CGVector)_computedVelocity;

@end
