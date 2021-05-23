/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <Foundation/NSObject.h>

@class NSNumber, NSString;

@protocol HKGraphSeriesBlockCoordinateInfo;

@interface HKHeartbeatSequencePoint : NSObject

{
    NSNumber *_xValue;
    NSNumber *_yValue;
    id <HKGraphSeriesBlockCoordinateInfo> _userInfo;
}

@property (nonatomic, readonly) NSNumber *xValue;
@property (nonatomic, readonly) NSNumber *yValue;
@property (nonatomic, readonly) id <HKGraphSeriesBlockCoordinateInfo> userInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)minYValue;
- (id)maxYValue;
- (id)xValueAsGenericType;
- (id)minXValueAsGenericType;
- (id)maxXValueAsGenericType;
- (id)yValueForKey:(id)arg1;
- (id)allYValues;
- (id)initWithTimeInterval:(double)arg1 beatsPerMinute:(double)arg2;

@end
