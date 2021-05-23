/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class HDProfile, HDXPCListener, HKHealthStoreConfiguration, HKTaskConfiguration, NSString, NSUUID, NSXPCListenerEndpoint;

@protocol HDTaskServer, HDTaskServerDelegate;

@interface HDTaskServerEndpoint : NSObject

{
    Class _taskServerClass;
    NSUUID *_taskUUID;
    HKTaskConfiguration *_taskConfiguration;
    HKHealthStoreConfiguration *_healthStoreConfiguration;
    HDProfile *_profile;
    id <HDTaskServerDelegate> _delegate;
    id <HDTaskServer> _taskServer;
    HDXPCListener *_listener;
}

@property (retain, nonatomic) HDXPCListener *listener;
@property (nonatomic, readonly) Class taskServerClass;
@property (copy, nonatomic, readonly) NSUUID *taskUUID;
@property (copy, nonatomic, readonly) HKTaskConfiguration *taskConfiguration;
@property (copy, nonatomic, readonly) HKHealthStoreConfiguration *healthStoreConfiguration;
@property (weak, nonatomic, readonly) HDProfile *profile;
@property (weak, nonatomic, readonly) id <HDTaskServerDelegate> delegate;
@property (weak, nonatomic, readonly) id <HDTaskServer> taskServer;
@property (nonatomic, readonly) NSXPCListenerEndpoint *listenerEndpoint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)invalidate;
- (id)exportObjectForListener:(id)arg1 client:(id)arg2 error:(id *)arg3;
- (void)connectionConfiguredForListener:(id)arg1 client:(id)arg2 exportedObject:(id)arg3;
- (id)initWithTaskServerClass:(Class)arg1 taskConfiguration:(id)arg2 healthStoreConfiguration:(id)arg3 taskUUID:(id)arg4 profile:(id)arg5 connectionQueue:(id)arg6 delegate:(id)arg7;

@end
