/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol HKGraphSeriesBlockCoordinateInfo;

@interface _HKHorizontalSingleLineSeriesCoordinate : NSObject

{
    _Bool _groupToPrevious;
    double _xValue;
    long long _yValue;
    long long _markStyle;
    id <HKGraphSeriesBlockCoordinateInfo> _userInfo;
}

@property (nonatomic, readonly) double xValue;
@property (nonatomic, readonly) long long yValue;
@property (nonatomic, readonly) _Bool groupToPrevious;
@property (nonatomic, readonly) long long markStyle;
@property (nonatomic, readonly) id <HKGraphSeriesBlockCoordinateInfo> userInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) double startXValue;
@property (nonatomic, readonly) double endXValue;

- (id)copyWithTransform:(struct CGAffineTransform)arg1 roundToViewScale:(_Bool)arg2;
- (id)initWithXValue:(double)arg1 yValue:(long long)arg2 groupToPrevious:(_Bool)arg3 markStyle:(long long)arg4 userInfo:(id)arg5;

@end
