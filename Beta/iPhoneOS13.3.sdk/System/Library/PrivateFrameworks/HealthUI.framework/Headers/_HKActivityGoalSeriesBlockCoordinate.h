/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol HKGraphSeriesBlockCoordinateInfo;

@interface _HKActivityGoalSeriesBlockCoordinate : NSObject

{
    id <HKGraphSeriesBlockCoordinateInfo> _userInfo;
    struct CGPoint _coordinate;
}

@property (nonatomic, readonly) struct CGPoint coordinate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) double startXValue;
@property (nonatomic, readonly) double endXValue;
@property (nonatomic, readonly) id <HKGraphSeriesBlockCoordinateInfo> userInfo;

- (double)minYValue;
- (double)maxYValue;
- (id)copyWithTransform:(struct CGAffineTransform)arg1 roundToViewScale:(_Bool)arg2;
- (id)initWithCoordinate:(struct CGPoint)arg1 userInfo:(id)arg2;

@end
