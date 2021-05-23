/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol HKGraphSeriesBlockCoordinateInfo;

@interface HKAnnotationBlockPoint : NSObject

{
    long long _pointType;
    id <HKGraphSeriesBlockCoordinateInfo> _userInfo;
    struct CGPoint _point;
}

@property (nonatomic, readonly) struct CGPoint point;
@property (nonatomic, readonly) long long pointType;
@property (nonatomic, readonly) id <HKGraphSeriesBlockCoordinateInfo> userInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) double startXValue;
@property (nonatomic, readonly) double endXValue;

- (id)copyWithTransform:(struct CGAffineTransform)arg1 roundToViewScale:(_Bool)arg2;
- (id)initWithChartPoint:(id)arg1 xAxisTransform:(id)arg2 yAxisTransform:(id)arg3;
- (id)initWithTransform:(struct CGAffineTransform)arg1 blockPoint:(id)arg2;

@end
