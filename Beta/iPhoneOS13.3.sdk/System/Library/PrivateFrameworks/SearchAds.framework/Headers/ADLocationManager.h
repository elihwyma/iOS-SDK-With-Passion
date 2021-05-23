/*
 Image: /System/Library/PrivateFrameworks/SearchAds.framework/SearchAds
 */

#import <Foundation/NSObject.h>

@class CLLocation, CLLocationManager, CLPlacemark, NSMutableArray, NSString;

@protocol OS_dispatch_queue;

@interface ADLocationManager : NSObject

{
    NSObject<OS_dispatch_queue> *_locationQueue;
    _Bool _updatingPlacemark;
    _Bool _isLocationUpdating;
    _Bool _isLocationInitialized;
    int _callerStatus;
    CLPlacemark *_currentPlacemark;
    CLLocation *_lastPlacemarkLocation;
    NSMutableArray *_listeners;
    CLLocationManager *_locationManager;
    CLLocation *_actualLocation;
}

@property (retain, nonatomic) NSMutableArray *listeners;
@property (retain, nonatomic) CLLocationManager *locationManager;
@property _Bool updatingPlacemark;
@property (nonatomic) _Bool isLocationUpdating;
@property (nonatomic) _Bool isLocationInitialized;
@property (retain, nonatomic) CLLocation *actualLocation;
@property (nonatomic) int callerStatus;
@property (retain) CLPlacemark *currentPlacemark;
@property (retain, nonatomic) CLLocation *lastPlacemarkLocation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void)stop;
- (void)start;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (id)currentLocation;
- (void)addListener:(id)arg1;
- (_Bool)isLocationBasedAdsEnabled;
- (_Bool)locationEnabledFor:(int)arg1;
- (id)obfuscatedLocation;
- (void)updatePlacemark;

@end
