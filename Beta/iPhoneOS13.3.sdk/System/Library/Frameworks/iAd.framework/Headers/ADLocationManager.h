/*
 Image: /System/Library/Frameworks/iAd.framework/iAd
 */

#import <NSObject.h>

@class CLLocation, CLLocationManager, NSString;

@protocol OS_dispatch_queue;

@interface ADLocationManager : NSObject

{
    _Bool _isLocationInitialized;
    _Bool _isUpdatingLocation;
    int _authorizationStatus;
    NSString *_bundleID;
    NSString *_locality;
    NSString *_administrativeArea;
    NSString *_subAdministrativeArea;
    NSString *_ISOcountryCode;
    NSString *_postalCode;
    NSObject<OS_dispatch_queue> *_readWriteQueue;
    CLLocation *_previousLocation;
    CLLocationManager *_locationManager;
    double _requestedLocationAccuracy;
}

@property (nonatomic) _Bool isLocationInitialized;
@property (retain, nonatomic) NSString *locality;
@property (retain, nonatomic) NSString *administrativeArea;
@property (retain, nonatomic) NSString *subAdministrativeArea;
@property (retain, nonatomic) NSString *ISOcountryCode;
@property (retain, nonatomic) NSString *postalCode;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *readWriteQueue;
@property (nonatomic) int authorizationStatus;
@property (copy, nonatomic) CLLocation *previousLocation;
@property (retain, nonatomic) CLLocationManager *locationManager;
@property (nonatomic) _Bool isUpdatingLocation;
@property (nonatomic) double requestedLocationAccuracy;
@property (retain, nonatomic) NSString *bundleID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedManager;

- (id)init;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)setLocation:(id)arg1;
- (void)_createLocationManager;
- (void)_considerRefreshingLocation;
- (void)_startUpdatingLocation;
- (void)_stopUpdatingLocation;
- (_Bool)isAdLocationServicesEnabled;
- (_Bool)isLocationBasedAdsEnabled;
- (_Bool)locationEnabledFor:(int)arg1;

@end
