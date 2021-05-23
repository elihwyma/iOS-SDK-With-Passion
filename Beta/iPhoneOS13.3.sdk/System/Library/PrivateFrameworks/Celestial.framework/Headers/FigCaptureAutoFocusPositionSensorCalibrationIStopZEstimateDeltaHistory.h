/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@interface FigCaptureAutoFocusPositionSensorCalibrationIStopZEstimateDeltaHistory : NSObject

{
    int _lastPassingIStopZEstimateDelta;
    int _previousIStopZEstimateDelta;
    int _currentIStopZEstimateDelta;
    int _previousIStopZEstimate;
    int _currentIStopZEstimate;
}

@property (nonatomic) int lastPassingIStopZEstimateDelta;
@property (nonatomic) int previousIStopZEstimateDelta;
@property (nonatomic) int currentIStopZEstimateDelta;

@end
