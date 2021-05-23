/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <Foundation/NSObject.h>

@interface HKPointLabelEngine : NSObject

{
    _Bool _isLabelShiftingEnabled;
    _Bool _lastRenderOverlapped;
    CDUnknownBlockType _sizeForValue;
    long long _state;
    struct CGPoint _previousTransformedPoint;
    struct CGPoint _previousUntransformedPoint;
    struct CGPoint _currentTransformedPoint;
    struct CGPoint _currentUntransformedPoint;
    struct CGRect _boundingRegion;
    CDStruct_d6e4b0bd _previousRenderingData;
    CDStruct_d6e4b0bd _currentRenderingData;
}

@property (nonatomic) long long state;
@property (nonatomic) struct CGPoint previousTransformedPoint;
@property (nonatomic) struct CGPoint previousUntransformedPoint;
@property (nonatomic) struct CGPoint currentTransformedPoint;
@property (nonatomic) struct CGPoint currentUntransformedPoint;
@property (nonatomic) CDStruct_d6e4b0bd previousRenderingData;
@property (nonatomic) CDStruct_d6e4b0bd currentRenderingData;
@property (nonatomic) _Bool lastRenderOverlapped;
@property (nonatomic, readonly) struct CGRect boundingRegion;
@property (nonatomic) _Bool isLabelShiftingEnabled;
@property (copy, nonatomic, readonly) CDUnknownBlockType sizeForValue;

- (long long)_slopeForPoint:(struct CGPoint)arg1 otherPoint:(struct CGPoint)arg2;
- (CDStruct_d6e4b0bd)_computeRenderingDataForValue:(double)arg1 transformedPoint:(struct CGPoint)arg2 previousSlope:(long long)arg3 nextSlope:(long long)arg4 previousOptions:(long long)arg5;
- (id)initWithBoundingRegion:(struct CGRect)arg1 isLabelShiftingEnabled:(_Bool)arg2 labelSizeBlock:(CDUnknownBlockType)arg3;
- (_Bool)processTransformedPoint:(struct CGPoint)arg1 untransformedPoint:(struct CGPoint)arg2;
- (_Bool)processLastPoint;
- (CDStruct_d6e4b0bd)renderingData;

@end
