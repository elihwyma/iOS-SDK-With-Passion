/*
 Image: /System/Library/PrivateFrameworks/IOAccessoryManager.framework/IOAccessoryManager
 */

#import <Foundation/NSObject.h>

@interface IOAccessoryUserLdcmParamClass : NSObject

{
    int _userBehaviorMask;
    int _fdpBehaviorMask;
    unsigned long long _minVhiDurationSec;
    unsigned long long _maxVhiDurationSec;
    unsigned long long _maxUpFluctuationMv;
    unsigned long long _numEisHalogenSamples;
    unsigned long long _wetPollingIntervalSec;
    unsigned long long _dryPollingIntervalSec;
    unsigned long long _ldcmArbiterRetrySec;
    unsigned long long _ldcmStartMeasurementsDelayMs;
    unsigned long long _ldcmStartMeasurementsRetryMs;
    unsigned long long _minDryReadings;
    unsigned long long _enableHalogenSnrTtr;
    unsigned long long _enableHalogenMitigationsAndUI;
    double _wetTransitionCapacitanceThreshold;
    double _dryTransitionCapacitanceThreshold;
}

@property unsigned long long minVhiDurationSec;
@property unsigned long long maxVhiDurationSec;
@property unsigned long long maxUpFluctuationMv;
@property int userBehaviorMask;
@property int fdpBehaviorMask;
@property unsigned long long numEisHalogenSamples;
@property unsigned long long wetPollingIntervalSec;
@property unsigned long long dryPollingIntervalSec;
@property unsigned long long ldcmArbiterRetrySec;
@property unsigned long long ldcmStartMeasurementsDelayMs;
@property unsigned long long ldcmStartMeasurementsRetryMs;
@property unsigned long long minDryReadings;
@property unsigned long long enableHalogenSnrTtr;
@property unsigned long long enableHalogenMitigationsAndUI;
@property double wetTransitionCapacitanceThreshold;
@property double dryTransitionCapacitanceThreshold;

- (id)init;

@end
