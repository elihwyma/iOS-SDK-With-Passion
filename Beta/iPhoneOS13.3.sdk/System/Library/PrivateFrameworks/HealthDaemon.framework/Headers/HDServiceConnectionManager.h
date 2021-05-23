/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class HDHealthServiceManager, HDProfile, NSMutableDictionary, NSString;

@protocol OS_dispatch_queue;

@interface HDServiceConnectionManager : NSObject

{
    HDProfile *_profile;
    HDHealthServiceManager *_serviceManager;
    _Bool _connecting;
    _Bool _BTLEEnabled;
    NSMutableDictionary *_activeServices;
    NSObject<OS_dispatch_queue> *_deviceQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (id)initWithProfile:(id)arg1;
- (id)diagnosticDescription;
- (void)daemonReady:(id)arg1;
- (void)database:(id)arg1 protectedDataDidBecomeAvailable:(_Bool)arg2;
- (void)disconnectFromServices;
- (void)_connectToServices;
- (void)_disconnectFromServicesStopConnecting:(_Bool)arg1;
- (void)_disconnectFromService:(id)arg1;
- (void)_connectToService:(id)arg1;
- (void)_handleBluetoothUpdates:(long long)arg1;
- (void)_subscribeBluetoothStateUpdates;
- (void)reconnectToServices;
- (void)disconnectFromService:(id)arg1;
- (void)connectToService:(id)arg1;

@end
