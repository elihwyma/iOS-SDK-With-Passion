/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <HealthUI/HKGraphSeriesBlockCoordinateList.h>

@class HKValueRange, NSArray;

@interface _HKCompoundBlockCoordinateList : HKGraphSeriesBlockCoordinateList

{
    NSArray *_subCoordinates;
    HKValueRange *_chartableValueRange;
}

- (id)coordinates;
- (void)enumerateCoordinatesWithTransform:(struct CGAffineTransform)arg1 roundToViewScale:(_Bool)arg2 block:(CDUnknownBlockType)arg3;
- (long long)numCoordinates;
- (void)_enumerateCoordinatesWithTransform:(struct CGAffineTransform)arg1 chartableValueRange:(id)arg2 roundToViewScale:(_Bool)arg3 block:(CDUnknownBlockType)arg4;
- (id)_coordinatesInChartableRange:(id)arg1;
- (long long)_numCoordinatesInChartableRange:(id)arg1;
- (CDStruct_6ca94699)blockPathStart;
- (CDStruct_6ca94699)blockPathEnd;
- (id)firstCoordinateWithTransform:(struct CGAffineTransform)arg1 roundToViewScale:(_Bool)arg2;
- (id)lastCoordinateWithTransform:(struct CGAffineTransform)arg1 roundToViewScale:(_Bool)arg2;
- (id)initWithSubCoordinates:(id)arg1 chartableValueRange:(id)arg2;

@end
