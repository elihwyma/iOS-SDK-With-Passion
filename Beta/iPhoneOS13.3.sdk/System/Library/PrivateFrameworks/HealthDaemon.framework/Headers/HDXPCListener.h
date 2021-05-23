/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableDictionary, NSString, NSXPCListener, NSXPCListenerEndpoint;

@protocol HDXPCListenerDelegate, OS_dispatch_queue;

@interface HDXPCListener : NSObject

{
    NSXPCListener *_underlyingListener;
    struct os_unfair_lock_s _lock;
    NSMutableDictionary *_exportedObjectsByClient;
    id <HDXPCListenerDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_connectionQueue;
}

@property (copy, readonly) NSArray *allClients;
@property (weak, nonatomic) id <HDXPCListenerDelegate> delegate;
@property (readonly) NSXPCListenerEndpoint *endpoint;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *connectionQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)serviceListener;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (void)resume;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)initWithMachServiceName:(id)arg1;
- (id)initWithUnderlyingListener:(id)arg1;
- (id)newClientWithConnection:(id)arg1 error:(id *)arg2;

@end
