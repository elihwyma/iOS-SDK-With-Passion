/*
 Image: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
 */

#import <Foundation/NSObject.h>

@class CLLocation, CLLocationManager, NSMutableArray, NSString;

@protocol OS_dispatch_queue, WiFiLocationManagerDelegate;

@interface WiFiLocationManager : NSObject

{
    unsigned char _shouldMonitorVisits;
    unsigned char _isAuthorized;
    int _locationManagerState;
    id <WiFiLocationManagerDelegate> _delegate;
    CLLocation *_latestLocation;
    CLLocationManager *_clLocationManager;
    NSMutableArray *_clientsDataArray;
    NSMutableArray *_visitClientsDataArray;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (retain, nonatomic) CLLocationManager *clLocationManager;
@property (retain, nonatomic) NSMutableArray *clientsDataArray;
@property (retain, nonatomic) NSMutableArray *visitClientsDataArray;
@property int locationManagerState;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain) CLLocation *latestLocation;
@property unsigned char isAuthorized;
@property (weak, nonatomic) id <WiFiLocationManagerDelegate> delegate;
@property (nonatomic) unsigned char shouldMonitorVisits;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedWiFiLocationManager;
+ (unsigned char)isLocationValid:(id)arg1 uptoSeconds:(double)arg2 isHighAccuracy:(unsigned char)arg3;
+ (id)getStringOfCallbackType:(int)arg1;
+ (id)getStringOfState:(int)arg1;
+ (void)logLocation:(id)arg1 addPrefixString:(id)arg2;

- (id)init;
- (void)dealloc;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)locationManager:(id)arg1 didVisit:(id)arg2;
- (void)registerVisitCallbackFunctionPtr:(CDUnknownFunctionPointerType)arg1 withContext:(void *)arg2;
- (void)requestLowAccuracyLocationUpdate;
- (void)createCoreLocationObjects;
- (void)destroyCoreLocationObjects;
- (void)invokeClientsCallbackType:(int)arg1 withLocation:(id)arg2 withError:(id)arg3;
- (void)setCLLocationUpdateParams:(id)arg1;
- (void)requestLeechedAccuracyLocationUpdate;
- (void)locationRequestDidTimeOut;
- (void)cancelLocationRequestTimeOut;
- (void)registerCallbackFunctionPtr:(CDUnknownFunctionPointerType)arg1 withContext:(void *)arg2;
- (void)requestHighAccuracyLocationUpdate;
- (void)stopQueryingLocation;

@end
