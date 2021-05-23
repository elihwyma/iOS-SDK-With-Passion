/*
 Image: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
 */

#import <Foundation/NSObject.h>

@class CLLocationManager, NSMutableArray, NSString, NSUUID;

@protocol OS_dispatch_queue;

@interface CLSLocationManager : NSObject

{
    double _desiredAccuracy;
    NSObject<OS_dispatch_queue> *_queue;
    unsigned long long _minimumDelayReached;
    _Bool _isBrowsing;
    NSMutableArray *_pendingBlocks;
    CLLocationManager *_locationManager;
    _Bool _isUpdatingLocation;
    NSUUID *_shutdownUUID;
}

@property (nonatomic) double desiredAccuracy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)defaultManager;

- (id)init;
- (void)dealloc;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (id)currentLocation;
- (void)locationResult:(CDUnknownBlockType)arg1;
- (void)_dispatchProximityPendingBlocks:(_Bool)arg1;

@end
