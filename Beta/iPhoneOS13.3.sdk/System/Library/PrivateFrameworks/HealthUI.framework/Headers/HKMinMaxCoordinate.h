/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol HKGraphSeriesBlockCoordinateInfo;

@interface HKMinMaxCoordinate : NSObject

{
    id <HKGraphSeriesBlockCoordinateInfo> _userInfo;
    struct CGPoint _min;
    struct CGPoint _max;
}

@property (nonatomic, readonly) struct CGPoint min;
@property (nonatomic, readonly) struct CGPoint max;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) double startXValue;
@property (nonatomic, readonly) double endXValue;
@property (nonatomic, readonly) id <HKGraphSeriesBlockCoordinateInfo> userInfo;

- (double)distanceToPoint:(struct CGPoint)arg1;
- (id)copyWithTransform:(struct CGAffineTransform)arg1 roundToViewScale:(_Bool)arg2;
- (id)initWithChartPoint:(id)arg1 xAxisTransform:(id)arg2 yAxisTransform:(id)arg3;
- (double)yAxisDifferenceToPoint:(struct CGPoint)arg1;
- (_Bool)isVisibleInChartRect:(struct CGRect)arg1;
- (id)initWithMin:(struct CGPoint)arg1 max:(struct CGPoint)arg2 userInfo:(id)arg3;

@end
