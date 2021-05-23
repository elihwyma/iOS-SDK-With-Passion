/*
 Image: /System/Library/PrivateFrameworks/IOAccessoryManager.framework/IOAccessoryManager
 */

#import <Foundation/NSObject.h>

@class HalogenMeasurement, NSCondition, NSData;

@protocol OS_dispatch_queue, OS_dispatch_source;

@interface HalogenWrapper : NSObject

{
    _Bool _attachDelayTimerRunning;
    _Bool _isWet;
    _Bool _wasTapToRadarShown;
    _Bool _isTapToRadarPending;
    _Bool _isReceptacleEmpty;
    _Bool _isTimestampValid;
    _Bool _isMeasurementEnabled;
    _Bool _isMeasurementActive;
    _Bool _didNotify;
    _Bool _didConfidentNotify;
    _Bool _didHighConfidentNotify;
    _Bool _didWetDuration;
    _Bool _accessoryConnectedWhileWet;
    _Bool _didWetTooLong;
    _Bool _isHeadsetConnected;
    _Bool _isDebugAccessoryConnected;
    _Bool _isBlacklistedAccessoryConnected;
    _Bool _justDetached;
    _Bool _justAttachedCase;
    _Bool _isPowerAssertionHeld;
    unsigned int _service;
    int _portID;
    int _eventBasedOrientation;
    int _connectedAccessoryOrientation;
    int _pinID;
    unsigned int _sleepAssertionID;
    NSObject<OS_dispatch_queue> *_halogenMeasurementDispatchQueue;
    NSObject<OS_dispatch_queue> *_halogenTtrDispatchQueue;
    NSObject<OS_dispatch_source> *_timer;
    unsigned long long _wetPollingIntervalNs;
    unsigned long long _dryPollingIntervalNs;
    unsigned long long _ldcmArbiterRetryNs;
    unsigned long long _ldcmStartMeasurementsDelayNs;
    unsigned long long _ldcmStartMeasurementsRetryNs;
    unsigned long long _minDryReadings;
    unsigned long long _dryCnt;
    unsigned long long _firstDryTimestamp;
    unsigned long long _wetDryTransitionTimestamp;
    NSCondition *_cond;
    HalogenMeasurement *_halogenMeasurement;
    NSData *_eventBasedPDigitalID;
    unsigned long long _eventBasedDigitalID;
    NSData *_connectedAccessoryPDigitalID;
    unsigned long long _connectedAccessoryDigitalID;
    unsigned long long _wetAccessoryAttachTimestamp;
}

@property (nonatomic) NSObject<OS_dispatch_queue> *halogenMeasurementDispatchQueue;
@property (nonatomic) NSObject<OS_dispatch_queue> *halogenTtrDispatchQueue;
@property (nonatomic) NSObject<OS_dispatch_source> *timer;
@property (nonatomic) _Bool attachDelayTimerRunning;
@property (nonatomic) unsigned long long wetPollingIntervalNs;
@property (nonatomic) unsigned long long dryPollingIntervalNs;
@property (nonatomic) unsigned long long ldcmArbiterRetryNs;
@property (nonatomic) unsigned long long ldcmStartMeasurementsDelayNs;
@property (nonatomic) unsigned long long ldcmStartMeasurementsRetryNs;
@property (nonatomic) unsigned long long minDryReadings;
@property (nonatomic) unsigned long long dryCnt;
@property (nonatomic) unsigned long long firstDryTimestamp;
@property (nonatomic) _Bool isWet;
@property (nonatomic) _Bool wasTapToRadarShown;
@property (nonatomic) _Bool isTapToRadarPending;
@property (nonatomic) _Bool isReceptacleEmpty;
@property (nonatomic) unsigned long long wetDryTransitionTimestamp;
@property (nonatomic) _Bool isTimestampValid;
@property (nonatomic) NSCondition *cond;
@property (nonatomic) _Bool isMeasurementEnabled;
@property (nonatomic) _Bool isMeasurementActive;
@property (nonatomic) HalogenMeasurement *halogenMeasurement;
@property (nonatomic) unsigned int service;
@property (nonatomic) int portID;
@property (nonatomic) NSData *eventBasedPDigitalID;
@property (nonatomic) unsigned long long eventBasedDigitalID;
@property (nonatomic) int eventBasedOrientation;
@property (nonatomic) NSData *connectedAccessoryPDigitalID;
@property (nonatomic) unsigned long long connectedAccessoryDigitalID;
@property (nonatomic) int connectedAccessoryOrientation;
@property (nonatomic) int pinID;
@property (nonatomic) _Bool didNotify;
@property (nonatomic) _Bool didConfidentNotify;
@property (nonatomic) _Bool didHighConfidentNotify;
@property (nonatomic) _Bool didWetDuration;
@property (nonatomic) _Bool accessoryConnectedWhileWet;
@property (nonatomic) unsigned long long wetAccessoryAttachTimestamp;
@property (nonatomic) _Bool didWetTooLong;
@property (nonatomic) _Bool isHeadsetConnected;
@property (nonatomic) _Bool isDebugAccessoryConnected;
@property (nonatomic) _Bool isBlacklistedAccessoryConnected;
@property (nonatomic) _Bool justDetached;
@property (nonatomic) _Bool justAttachedCase;
@property (nonatomic) _Bool isPowerAssertionHeld;
@property (nonatomic) unsigned int sleepAssertionID;

- (id)init;
- (void)dealloc;

@end
