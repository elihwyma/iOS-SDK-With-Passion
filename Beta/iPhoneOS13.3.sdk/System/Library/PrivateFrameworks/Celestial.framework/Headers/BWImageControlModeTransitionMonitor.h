/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@class NSDictionary, NSMutableDictionary;

@interface BWImageControlModeTransitionMonitor : NSObject

{
    NSDictionary *_expectedSphereModesByPortType;
    NSDictionary *_expectedMinimumFrameRatesByPortType;
    double _coarseFocusCheckTimeout;
    _Bool _waitForTorchToRampUp;
    NSMutableDictionary *_currentSphereModesByPortType;
    NSMutableDictionary *_currentFrameRatesByPortType;
    CDStruct_1b6d18a9 _firstFramePTS;
    int _frameWaitCount;
    _Bool _coarseFocusHasSettled;
}

@property (copy, nonatomic) NSDictionary *expectedSphereModesByPortType;
@property (copy, nonatomic) NSDictionary *expectedMinimumFrameRatesByPortType;
@property (nonatomic) double coarseFocusCheckTimeout;
@property (nonatomic) _Bool waitForTorchToRampUp;

+ (void)initialize;

- (id)init;
- (void)dealloc;
- (_Bool)isTransitionCompleteWithSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 masterCaptureStreamPortType:(id)arg2 activeSlaveStreamPortType:(id)arg3;

@end
