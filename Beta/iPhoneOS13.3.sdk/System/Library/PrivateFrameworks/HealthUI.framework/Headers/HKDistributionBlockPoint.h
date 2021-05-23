/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@protocol HKGraphSeriesBlockCoordinateInfo;

@interface HKDistributionBlockPoint : NSObject

{
    NSArray *_distributionSegments;
    id <HKGraphSeriesBlockCoordinateInfo> _userInfo;
    struct CGPoint _minPoint;
    struct CGPoint _maxPoint;
}

@property (nonatomic, readonly) struct CGPoint minPoint;
@property (nonatomic, readonly) struct CGPoint maxPoint;
@property (nonatomic, readonly) NSArray *distributionSegments;
@property (nonatomic, readonly) id <HKGraphSeriesBlockCoordinateInfo> userInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) double startXValue;
@property (nonatomic, readonly) double endXValue;

- (id)copyWithTransform:(struct CGAffineTransform)arg1 roundToViewScale:(_Bool)arg2;
- (id)initWithChartPoint:(id)arg1 xAxisTransform:(id)arg2 yAxisTransform:(id)arg3;
- (id)_quickDate:(id)arg1;
- (id)_segmentsFromChartPoint:(id)arg1 forX:(double)arg2 minY:(double)arg3 maxY:(double)arg4;
- (id)_applyTransformToSegments:(id)arg1 transform:(struct CGAffineTransform)arg2;
- (id)initWithTransform:(struct CGAffineTransform)arg1 blockPoint:(id)arg2;

@end
