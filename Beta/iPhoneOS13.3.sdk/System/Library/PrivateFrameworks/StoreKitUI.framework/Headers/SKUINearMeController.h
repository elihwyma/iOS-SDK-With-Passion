/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

@class CLLocationManager, NSArray, NSDictionary, NSString, SKUIClientContext, SSLookupRequest;

@protocol OS_dispatch_source;

@interface SKUINearMeController : NSObject

{
    NSArray *_items;
    long long _status;
    _Bool _isMonitoring;
    SSLookupRequest *_lookupRequest;
    CLLocationManager *_locationManager;
    int _authorizationStatus;
    NSObject<OS_dispatch_source> *_locationTimeoutTimer;
    long long _locationTimeoutCount;
    NSObject<OS_dispatch_source> *_refreshTimer;
    NSDictionary *_responseDictionary;
    SKUIClientContext *_clientContext;
}

@property (retain, nonatomic) SKUIClientContext *clientContext;
@property (nonatomic, readonly) NSArray *items;
@property (nonatomic, readonly) NSDictionary *responseDictionary;
@property (nonatomic, readonly) long long status;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedController;

- (id)init;
- (void)disable;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)_applicationWillEnterForeground:(id)arg1;
- (void)itemStateCenterRestrictionsChanged:(id)arg1;
- (void)_startMonitoringLocation;
- (void)_disableNearMe;
- (void)_setItems:(id)arg1 responseDictionary:(id)arg2 error:(id)arg3 status:(long long)arg4;
- (void)_lookupItemsForLocation:(id)arg1;
- (void)_stopRefreshTimer;
- (void)_monitorLocationTimeout;
- (void)_stopMonitoringLocation;
- (void)_startRefreshTimer;
- (void)_finishLookupWithItems:(id)arg1 response:(id)arg2 error:(id)arg3;
- (void)_refreshTimeout;
- (void)getItems;
- (_Bool)isNearMeLocationStatusEnabled;

@end
