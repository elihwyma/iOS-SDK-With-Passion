/*
 Image: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

#import <ScreenReaderCore/SCRCPhotoEvaluatorResult.h>

@interface SCRCPhotoEvaluatorResultLuminance : SCRCPhotoEvaluatorResult

{
    double _darknessLevel;
    double _brightnessLevel;
    double _averageLevel;
}

@property (nonatomic, readonly) double darknessLevel;
@property (nonatomic, readonly) double brightnessLevel;
@property (nonatomic, readonly) double averageLevel;

- (id)humanReadableResult;
- (id)initWithDarknessLevel:(double)arg1 brightnessLevel:(double)arg2 averageLevel:(double)arg3;

@end
