/*
 Image: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
 */

#import <Foundation/NSObject.h>

@class NSDateFormatter, NSString, WiFiLocationManager;

@protocol OS_dispatch_queue, OS_dispatch_source, WiFiLocaleManagerDelegate;

@interface WiFiLocaleManager : NSObject

{
    struct __CTServerConnection *_ctServerConnectionRef;
    unsigned char _isWaitingForLocationUpdate;
    unsigned char _testModeEnabled;
    int _localeSource;
    int _testMcc;
    id <WiFiLocaleManagerDelegate> _delegate;
    NSString *_localeCountryCode;
    double _localeTimeout;
    double _localeLastUpdatedTime;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_localeTimer;
    NSDateFormatter *_dateFormatter;
    WiFiLocationManager *_locationManager;
    NSString *_testHost11d;
    NSString *_testPeer;
}

@property (retain) NSString *localeCountryCode;
@property int localeSource;
@property double localeTimeout;
@property double localeLastUpdatedTime;
@property (retain) NSObject<OS_dispatch_queue> *queue;
@property (retain) NSObject<OS_dispatch_source> *localeTimer;
@property (retain) NSDateFormatter *dateFormatter;
@property (retain) WiFiLocationManager *locationManager;
@property unsigned char isWaitingForLocationUpdate;
@property unsigned char testModeEnabled;
@property int testMcc;
@property (retain) NSString *testHost11d;
@property (retain) NSString *testPeer;
@property (weak, nonatomic) id <WiFiLocaleManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)getStringOfLocaleSource:(int)arg1;

- (id)init;
- (void)dealloc;
- (void)didUpdateLocations:(id)arg1;
- (void)didFailWithError:(id)arg1;
- (void)_determineAndSetLocale:(unsigned char)arg1;
- (id)getLocaleFromMcc;
- (id)getLocaleFromLocation:(id)arg1;
- (id)getLocaleFrom80211dInfo;
- (id)getLocaleFromPeer;
- (id)getLocaleFromTimezone;
- (void)setCountryCode:(id)arg1 source:(int)arg2;
- (id)getLocaleUsingBoundingBoxes:(id)arg1;
- (id)getLocaleUsingReverseGeocoder:(id)arg1;
- (unsigned char)getNetworkReachability;
- (id)applyCountryCodeExceptions:(id)arg1;
- (id)getRestrictedCountryCodeFromTimezone;
- (id)getRestrictedCountryCodeFromRegionInfo;
- (void)didChangeAuthorizationStatus;
- (void)determineAndSetLocale:(unsigned char)arg1;
- (void)setLocaleTestParams:(id)arg1;
- (int)getLocaleSource;
- (double)getLocaleLastUpdatedTime;
- (id)getLocaleCountryCode;
- (id)getLocaleFromCompanion;

@end
