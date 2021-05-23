/*
 Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

#import <Foundation/NSObject.h>

@class NSString, PKStroke, PKStrokeProviderSliceIdentifier;

@protocol CHStrokeIdentifier;

@interface PKStrokeProviderSlice : NSObject

{
    PKStrokeProviderSliceIdentifier *_identifier;
    PKStroke *_stroke;
    struct CGRect _bounds;
}

@property (nonatomic, readonly) PKStrokeProviderSliceIdentifier *identifier;
@property (nonatomic, readonly) PKStroke *stroke;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic, readonly) id <CHStrokeIdentifier> strokeIdentifier;
@property (nonatomic, readonly) struct CGRect bounds;
@property (nonatomic, readonly) double startTimestamp;
@property (nonatomic, readonly) double endTimestamp;

- (_Bool)isEqual:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (long long)compareTo:(id)arg1;
- (struct CGPoint)_splineControlPoint:(long long)arg1;
- (double)_lengthOfSplineSegment:(unsigned long long)arg1;
- (void)enumeratePointsWithDistanceStep:(double)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (struct CGPoint)_interpolatedPointForSplineSegment:(long long)arg1 t:(double)arg2;
- (double)_strokeLength;
- (double)_interpolatedTimeForSplineSegment:(long long)arg1 t:(double)arg2;
- (void)enumeratePointsWithTimestep:(double)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)initWithStroke:(id)arg1 tStart:(double)arg2 tEnd:(double)arg3;

@end
