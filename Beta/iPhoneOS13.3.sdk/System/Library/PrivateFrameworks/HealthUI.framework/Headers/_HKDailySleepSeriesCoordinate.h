/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@protocol HKGraphSeriesBlockCoordinateInfo;

@interface _HKDailySleepSeriesCoordinate : NSObject

{
    NSArray *_yValues;
    double _xValue;
    id <HKGraphSeriesBlockCoordinateInfo> _userInfo;
}

@property (nonatomic, readonly) NSArray *yValues;
@property (nonatomic, readonly) double xValue;
@property (nonatomic, readonly) id <HKGraphSeriesBlockCoordinateInfo> userInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) double startXValue;
@property (nonatomic, readonly) double endXValue;

- (id)copyWithTransform:(struct CGAffineTransform)arg1 roundToViewScale:(_Bool)arg2;
- (id)initWithXValue:(double)arg1 yValues:(id)arg2 userInfo:(id)arg3;

@end
