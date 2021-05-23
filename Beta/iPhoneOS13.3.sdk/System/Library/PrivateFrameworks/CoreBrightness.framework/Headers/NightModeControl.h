/*
 Image: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSMutableArray, NSMutableDictionary, NSString, SunriseSunsetProvider;

@protocol OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface NightModeControl : NSObject

{
    NSMutableDictionary *_properties;
    SunriseSunsetProvider *_sunriseSunsetProvider;
    int _sunriseSunsetInfoQueryTimeout;
    NSDictionary *_sunriseSunsetInfo;
    NSMutableArray *_supportObjs;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_nextTransitionTimer;
    NSObject<OS_dispatch_source> *_transitionTimer;
    NSObject<OS_dispatch_source> *_aggdUpdateTimer;
    struct BLRAggdInfo _aggdKeysInfo;
    int _algoState;
    float _transitionLength;
    float _transitionLengthActual;
    float _transitionsTimesCoeff;
    float _transitionRate;
    float _minFactor;
    float _maxFactor;
    struct NMFactorState _factorState;
    struct __CFTimeZone *_currentTimeZone;
    double _sunsetAbsolute;
    double _sunsetPreviousAbsolute;
    double _sunriseAbsolute;
    double _sunrisePreviousAbsolute;
    double _offTransitionTimeAbsoluteUnrestricted;
    double _offTransitionTimeAbsoluteUnrestrictedPrev;
    _Bool _transitionTimesValid;
    _Bool _isDaylight;
    int _currentScheduledTransitionType;
    double _displayOffTimestamp;
    double _untilNexTransitionTimestamp;
    float _inactivityTimeout;
    _Bool _checkInactivity;
    _Bool _displayOff;
    int _logLevel;
    CDUnknownBlockType _callbackBlock;
    CDStruct_fcaf372b _status;
    CDStruct_6cee55f3 _backupSchedule;
    _Bool _statusUpdated;
    NSString *_currentSunriseKey;
    NSString *_currentSunsetKey;
    NSString *_previousSunriseKey;
    NSString *_previousSunsetKey;
    NSString *_nextSunriseKey;
    NSString *_nextSunsetKey;
    NSString *_isDaylightKey;
    int _notifyUserAboutScheduleCounter;
    struct __CFUserNotification *_enableNotification;
    _Bool _notificationInProgress;
    _Bool _revertToSunriseSunset;
}

- (void)dealloc;
- (_Bool)setProperty:(id)arg1 forKey:(id)arg2;
- (void)setMode:(int)arg1;
- (void)setSchedule:(id)arg1;
- (void)cancelTransition;
- (void)timeZoneChanged;
- (void)saveStatusToPrefs:(id)arg1;
- (void)updateSunriseSunsetInfo:(id)arg1;
- (void)reevaluateCurrentState;
- (void)clockChanged;
- (id)copyStatusDictionaryFromPrefs;
- (id)copyLowPowerModeState;
- (void)updateLowPowerModeState:(id)arg1;
- (_Bool)parseStatusDictionary:(id)arg1 intoStruct:(CDStruct_fcaf372b *)arg2 shouldUpdatePrefs:(_Bool *)arg3;
- (id)copyDictionaryFromStatus:(CDStruct_fcaf372b *)arg1;
- (void)updateStatusDictionaryWithValue:(id)arg1 forKey:(id)arg2;
- (id)getPropertyForKey:(id)arg1;
- (void)setNightShiftFactorDictionary:(id)arg1;
- (void)tearDownAllTimers;
- (void)aggdKeysUpdate;
- (void)scheduleAggdKeysUpdate;
- (void)reevaluateCurrentStateWithFactorFadeOption:(float)arg1;
- (void)updateOptionTimestamp:(double)arg1;
- (void)enableBlueLightReduction:(_Bool)arg1 withOption:(int)arg2;
- (void)setNightModeFactor:(float)arg1;
- (void)setAlgoState:(int)arg1;
- (void)displayAlertInteractive:(_Bool)arg1;
- (void)transitionTimerHandler;
- (void)setNightModeFactor:(float)arg1 withFadePeriod:(float)arg2;
- (_Bool)updateTransitionTimesFromSunriseSunset:(double)arg1;
- (_Bool)updateTransitionTimesFromSchedule:(double)arg1;
- (void)initiateTransitionTo:(float)arg1 andRampLength:(float)arg2;
- (void)cancelSchedule;
- (void)updateTransitionTimes:(double)arg1;
- (void)initiateRestrictedMaxTransition;
- (void)scheduleNextTransition:(double)arg1 withType:(int)arg2;
- (void)initiateFullMinTransition;
- (void)setSunPermitted:(_Bool)arg1;
- (void)updateSunriseSunsetBackup;
- (void)retrieveSunriseSunsetTimesFromBackup:(double)arg1;
- (void)cancelAggdPeriodicUpdate;
- (id)copyTimeStringWithHour:(int)arg1 minute:(int)arg2 second:(int)arg3;
- (id)copyPreferenceForKey:(id)arg1 user:(id)arg2;
- (void)setPreference:(id)arg1 forKey:(id)arg2 user:(id)arg3;
- (id)initWithSupportObject:(id)arg1 queue:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)addSupportObject:(id)arg1;
- (void)removeSupportObject:(id)arg1;
- (void)initiateFullMaxTransition;

@end
