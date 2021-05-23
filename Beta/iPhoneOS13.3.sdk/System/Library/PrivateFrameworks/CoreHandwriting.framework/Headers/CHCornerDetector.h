/*
 Image: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
 */

#import <Foundation/NSObject.h>

@class CHDrawing, NSMutableIndexSet;

@interface CHCornerDetector : NSObject

{
    _Bool _shouldUseDynamicSampling;
    double _minimumSignificantSegmentLength;
    CHDrawing *_drawing;
    CHDrawing *_resampledDrawing;
    unsigned long long _directionChangeCount;
    unsigned long long _highestDirectionChangeCount;
    unsigned long long __strawSize;
    NSMutableIndexSet *__cornerIndexSet;
    NSMutableIndexSet *__directionChangeCornerIndexes;
    vector_1dba4e4e __resampledDrawingPointMap;
}

@property (nonatomic, readonly) unsigned long long _strawSize;
@property (copy, nonatomic, readonly) NSMutableIndexSet *_cornerIndexSet;
@property (copy, nonatomic, readonly) NSMutableIndexSet *_directionChangeCornerIndexes;
@property (nonatomic, readonly) vector_1dba4e4e _resampledDrawingPointMap;
@property (nonatomic) _Bool shouldUseDynamicSampling;
@property (nonatomic) double minimumSignificantSegmentLength;
@property (copy, nonatomic) CHDrawing *drawing;
@property (copy, nonatomic, readonly) CHDrawing *resampledDrawing;
@property (nonatomic, readonly) unsigned long long directionChangeCount;
@property (nonatomic, readonly) unsigned long long highestDirectionChangeCount;

- (id)init;
- (void)dealloc;
- (id).cxx_construct;
- (void)_detectCorners;
- (id)cornerIndexes;
- (double)_distance:(id)arg1 p1:(long long)arg2 p2:(long long)arg3;
- (id)_resolveResampledDirectionChangePointIndexes:(id)arg1;
- (id)_resampleDrawing:(id)arg1 outputPointMap:(vector_1dba4e4e *)arg2;
- (id)_postProcessCorners:(id)arg1 corners:(id)arg2 straws:(id)arg3;
- (unsigned long long)_detectDirectionalChanges;
- (double)_resamplingDistance:(id)arg1;
- (_Bool)_isLine:(id)arg1 usingThreshold:(double)arg2 p1:(long long)arg3 p2:(long long)arg4;
- (long long)_strokeHalfwayCorner:(id)arg1 p1:(long long)arg2 p2:(long long)arg3;
- (void)_removeColinearCorners:(id)arg1 usingThreshold:(double)arg2 corners:(id)arg3;
- (void)_removeColinearCorners:(id)arg1 usingDistanceThreshold:(double)arg2 usingLowerThreshold:(double)arg3 usingUpperThreshold:(double)arg4 corners:(id)arg5;
- (void)_removeAdjacentCorners:(id)arg1 corners:(id)arg2 straws:(id)arg3;
- (double)_pathDistance:(id)arg1 p1:(long long)arg2 p2:(long long)arg3;
- (id)directionChangeCornerIndexes;

@end
