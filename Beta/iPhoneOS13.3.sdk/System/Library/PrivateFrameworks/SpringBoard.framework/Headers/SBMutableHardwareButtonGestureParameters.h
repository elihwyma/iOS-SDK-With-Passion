/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBHardwareButtonGestureParameters.h>

@interface SBMutableHardwareButtonGestureParameters : SBHardwareButtonGestureParameters

{
    long long _maximumPressCount;
    double _longPressTimeInterval;
    double _multiplePressTimeInterval;
}

@property (nonatomic) long long maximumPressCount;
@property (nonatomic) double longPressTimeInterval;
@property (nonatomic) double multiplePressTimeInterval;

@end
