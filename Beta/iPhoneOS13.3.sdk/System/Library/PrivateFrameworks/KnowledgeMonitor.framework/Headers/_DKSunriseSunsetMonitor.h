/*
 Image: /System/Library/PrivateFrameworks/KnowledgeMonitor.framework/KnowledgeMonitor
 */

#import <KnowledgeMonitor/_DKMonitor.h>

@class CLLocationManager, NSDictionary, NSObject, NSString;

@protocol OS_dispatch_source, OS_os_log;

@interface _DKSunriseSunsetMonitor : _DKMonitor

{
    _Bool _enabled;
    _Bool _awaitingLocationAfterDisabledAirplaneMode;
    int _authorizationStatus;
    NSObject<OS_dispatch_source> *_updateTimer;
    unsigned long long _updateInterval;
    CLLocationManager *_manager;
    NSDictionary *_previousDataDictionary;
    NSObject<OS_os_log> *_log;
    struct __SCPreferences *_radioPrefs;
}

@property (nonatomic) _Bool enabled;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *updateTimer;
@property (nonatomic) unsigned long long updateInterval;
@property (retain, nonatomic) CLLocationManager *manager;
@property (retain, nonatomic) NSDictionary *previousDataDictionary;
@property (nonatomic) _Bool awaitingLocationAfterDisabledAirplaneMode;
@property (nonatomic) int authorizationStatus;
@property (retain, nonatomic) NSObject<OS_os_log> *log;
@property struct __SCPreferences *radioPrefs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)entitlements;
+ (id)eventStream;

- (id)init;
- (void)dealloc;
- (void)stop;
- (void)start;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)deactivate;
- (_Bool)isAirplaneModeEnabled;
- (id)loadState;
- (void)saveState;
- (void)unprotectedUpdateSunriseSunsetTime:(id)arg1;
- (void)respondToTimeChange:(id)arg1;
- (id)contextDictionaryWithGeoAlmanac:(id)arg1 authorizationStatus:(int)arg2;
- (_Bool)currentSunriseSunsetTimes:(id)arg1 differsFromPreviousTimes:(id)arg2 byInterval:(double)arg3;
- (_Bool)isAirplaneModeEnabledWithPreferences:(struct __SCPreferences *)arg1;
- (void)respondToAirplaneModeStatusChanged;

@end
