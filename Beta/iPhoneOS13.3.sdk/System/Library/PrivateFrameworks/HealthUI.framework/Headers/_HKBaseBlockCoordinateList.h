/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <HealthUI/HKGraphSeriesBlockCoordinateList.h>

@class NSArray;

@interface _HKBaseBlockCoordinateList : HKGraphSeriesBlockCoordinateList

{
    NSArray *_coordinates;
    CDStruct_6ca94699 _blockPath;
}

- (id)coordinates;
- (long long)numCoordinates;
- (void)_enumerateCoordinatesWithTransform:(struct CGAffineTransform)arg1 chartableValueRange:(id)arg2 roundToViewScale:(_Bool)arg3 block:(CDUnknownBlockType)arg4;
- (id)_coordinatesInChartableRange:(id)arg1;
- (long long)_numCoordinatesInChartableRange:(id)arg1;
- (CDStruct_6ca94699)blockPathStart;
- (CDStruct_6ca94699)blockPathEnd;
- (id)firstCoordinateWithTransform:(struct CGAffineTransform)arg1 roundToViewScale:(_Bool)arg2;
- (id)lastCoordinateWithTransform:(struct CGAffineTransform)arg1 roundToViewScale:(_Bool)arg2;
- (id)initWithCoordinates:(id)arg1 blockPath:(CDStruct_6ca94699)arg2;

@end
