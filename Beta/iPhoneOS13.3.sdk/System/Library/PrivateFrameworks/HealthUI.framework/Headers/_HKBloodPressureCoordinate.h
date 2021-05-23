/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <Foundation/NSObject.h>

@class HKMinMaxCoordinate, NSString;

@protocol HKGraphSeriesBlockCoordinateInfo;

@interface _HKBloodPressureCoordinate : NSObject

{
    id <HKGraphSeriesBlockCoordinateInfo> _userInfo;
    HKMinMaxCoordinate *_systolicCoordinate;
    HKMinMaxCoordinate *_diastolicCoordinate;
}

@property (nonatomic, readonly) HKMinMaxCoordinate *systolicCoordinate;
@property (nonatomic, readonly) HKMinMaxCoordinate *diastolicCoordinate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) double startXValue;
@property (nonatomic, readonly) double endXValue;
@property (nonatomic, readonly) id <HKGraphSeriesBlockCoordinateInfo> userInfo;

- (id)copyWithTransform:(struct CGAffineTransform)arg1 roundToViewScale:(_Bool)arg2;
- (id)initWithSystolicCoordinate:(id)arg1 diastolicCoordinate:(id)arg2 userInfo:(id)arg3;

@end
