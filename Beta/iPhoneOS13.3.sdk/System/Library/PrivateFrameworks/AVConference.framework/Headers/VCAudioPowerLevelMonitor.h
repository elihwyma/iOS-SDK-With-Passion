/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

@protocol VCAudioPowerLevelMonitorDelegate;

__attribute__((visibility("hidden")))
@interface VCAudioPowerLevelMonitor : NSObject

{
    unsigned int startDetectRemoteAudioLowPowerTime;
    float audioPowerThreshold;
    unsigned int audioLowPowerTimeInterval;
    _Bool isAudioPowerBelowThreshold;
    _Bool isAudioPowerMovingAverage;
    float audioPowerMovingAverageCoefficient;
    float currentAudioAverage;
    NSObject<VCAudioPowerLevelMonitorDelegate> *delegate;
}

@property (nonatomic) NSObject<VCAudioPowerLevelMonitorDelegate> *delegate;

- (id)init;
- (void)detectRemoteAveragePowerLevel:(float)arg1 timestamp:(unsigned int)arg2;

@end
