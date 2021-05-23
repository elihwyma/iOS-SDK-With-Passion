/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol HKGraphSeriesBlockCoordinateInfo;

@interface HKStackedCategoryValueSeriesCoordinate : NSObject

{
    long long _pointStyle;
    id <HKGraphSeriesBlockCoordinateInfo> _userInfo;
    struct CGPoint _start;
    struct CGPoint _end;
}

@property (nonatomic, readonly) struct CGPoint start;
@property (nonatomic, readonly) struct CGPoint end;
@property (nonatomic, readonly) long long pointStyle;
@property (nonatomic, readonly) id <HKGraphSeriesBlockCoordinateInfo> userInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) double startXValue;
@property (nonatomic, readonly) double endXValue;

- (id)copyWithTransform:(struct CGAffineTransform)arg1 roundToViewScale:(_Bool)arg2;
- (id)initWithStart:(struct CGPoint)arg1 end:(struct CGPoint)arg2 pointStyle:(long long)arg3 userInfo:(id)arg4;

@end
