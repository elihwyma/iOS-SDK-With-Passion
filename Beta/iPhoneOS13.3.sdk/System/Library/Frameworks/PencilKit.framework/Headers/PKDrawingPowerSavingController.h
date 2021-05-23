/*
 Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

#import <Foundation/NSObject.h>

@interface PKDrawingPowerSavingController : NSObject

{
    vector_b67dfe3a _movementDistanceHistoryBuffer;
    struct CGPoint _previousDrawingLocation;
    double _currentMovement;
    double _accumulatedMovement;
    double _previousRenderTimestamp;
    _Bool _valid;
    double _minimumMovementDistancePencil;
    double _minimumMovementDistanceFinger;
    double _minimumMovementDistanceTimeout;
    _Bool _isDrawingWithPencil;
    _Bool _isDrawingWithMarkerOrEraser;
}

@property (nonatomic) _Bool isDrawingWithPencil;
@property (nonatomic) _Bool isDrawingWithMarkerOrEraser;

- (id)init;
- (void)invalidate;
- (_Bool)isValid;
- (id).cxx_construct;
- (void)accumulateMovementForCurrentFrame;
- (_Bool)shouldSkipFrameWithFrameStartTimestamp:(double)arg1 framesAfterStart:(unsigned long long)arg2;
- (void)registerFrameStartTimestamp:(double)arg1;
- (void)drawingBeganAtLocation:(struct CGPoint)arg1;
- (void)drawingMovedToLocation:(struct CGPoint)arg1;
- (double)averageMovementDistance;

@end
