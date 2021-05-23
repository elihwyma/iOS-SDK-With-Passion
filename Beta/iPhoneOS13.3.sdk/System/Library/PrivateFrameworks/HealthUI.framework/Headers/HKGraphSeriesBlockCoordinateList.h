/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface HKGraphSeriesBlockCoordinateList : NSObject

@property (nonatomic, readonly) NSArray *coordinates;
@property (nonatomic, readonly) long long numCoordinates;
@property (nonatomic, readonly) CDStruct_6ca94699 blockPathStart;
@property (nonatomic, readonly) CDStruct_6ca94699 blockPathEnd;

+ (id)coordinateListWithCoordinates:(id)arg1 blockPath:(CDStruct_6ca94699)arg2;
+ (id)coordinateListByCombiningSubCoordinates:(id)arg1 chartableValueRange:(id)arg2;

- (void)enumerateCoordinatesWithTransform:(struct CGAffineTransform)arg1 roundToViewScale:(_Bool)arg2 block:(CDUnknownBlockType)arg3;
- (void)_enumerateCoordinatesWithTransform:(struct CGAffineTransform)arg1 chartableValueRange:(id)arg2 roundToViewScale:(_Bool)arg3 block:(CDUnknownBlockType)arg4;
- (id)_coordinatesInChartableRange:(id)arg1;
- (long long)_numCoordinatesInChartableRange:(id)arg1;
- (id)firstCoordinateWithTransform:(struct CGAffineTransform)arg1 roundToViewScale:(_Bool)arg2;
- (id)lastCoordinateWithTransform:(struct CGAffineTransform)arg1 roundToViewScale:(_Bool)arg2;

@end
