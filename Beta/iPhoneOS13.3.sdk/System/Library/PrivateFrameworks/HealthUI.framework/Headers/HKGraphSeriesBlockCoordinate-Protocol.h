/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <HealthUI/Swift-Protocol.h>

@protocol HKGraphSeriesBlockCoordinateInfo;

@protocol HKGraphSeriesBlockCoordinate <Swift>

@property (nonatomic, readonly) double startXValue;
@property (nonatomic, readonly) double endXValue;
@property (nonatomic, readonly) id <HKGraphSeriesBlockCoordinateInfo> userInfo;

- (unsigned short)copyWithTransform:roundToViewScale: /* Error: Ran out of types for this method. */;

@end
