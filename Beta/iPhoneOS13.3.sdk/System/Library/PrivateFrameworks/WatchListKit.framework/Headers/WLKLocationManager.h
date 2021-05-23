/*
 Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
 */

#import <Foundation/NSObject.h>

@class CLLocationManager, NSDictionary, NSString, NSUserDefaults, NSXPCConnection;

@protocol OS_dispatch_queue;

@interface WLKLocationManager : NSObject

{
    int _didChangeNotificationToken;
    NSDictionary *_lastKnownLocation;
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_clQueue;
    CDUnknownBlockType _locationUpdateBlock;
    CLLocationManager *_clLocationManager;
    NSUserDefaults *_userDefaults;
    NSXPCConnection *_connection;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *accessQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *clQueue;
@property (copy, nonatomic) CDUnknownBlockType locationUpdateBlock;
@property (retain, nonatomic) CLLocationManager *clLocationManager;
@property (retain, nonatomic) NSUserDefaults *userDefaults;
@property (nonatomic) int didChangeNotificationToken;
@property (retain, nonatomic) NSXPCConnection *connection;
@property (nonatomic, readonly) NSDictionary *lastKnownLocation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)defaultLocationManager;

- (id)init;
- (void)dealloc;
- (id)_connection;
- (void)_writeToDisk:(id)arg1;
- (id)_dictionaryRepresentation;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (long long)authorizationStatus;
- (void)requestAuthorizationWithForcedPrompt:(_Bool)arg1;
- (void)updateLocationIfNeeded;
- (void)requestAuthorization;
- (void)_readFromDisk;
- (void)_locationAuthorizationStatus:(CDUnknownBlockType)arg1;
- (_Bool)_locationServicesEnabled;
- (id)_copyLastKnownLocation;
- (_Bool)_isLastKnownLocationFresh:(id)arg1;
- (void)_requestActiveLocationChangeUpdates;
- (void)_requestRecentCLLocation:(CDUnknownBlockType)arg1;
- (_Bool)_shouldLastKnownLocation:(id)arg1 beUpdatedTo:(id)arg2;
- (id)_dictionaryForCLLocation:(id)arg1;
- (void)_setLastKnownLocation:(id)arg1;
- (double)_getDistanceOfLastKnownLocationDictionary:(id)arg1 fromLocation:(id)arg2;
- (void)_requestCLLocationUpdates:(CDUnknownBlockType)arg1;
- (_Bool)_isLastKnownLocation:(id)arg1 freshForMaxAge:(double)arg2 fromNewTimestamp:(double)arg3;
- (_Bool)_isLastKnownLocation:(id)arg1 significantlyOlderThanNewLocation:(id)arg2;
- (id)_createLocationObjFromLocationDictionary:(id)arg1;
- (id)_dictionaryOnDisk;
- (id)_dictionaryOnDisk:(_Bool)arg1;
- (long long)_statusForCLAuthorizationStatus:(int)arg1;

@end
