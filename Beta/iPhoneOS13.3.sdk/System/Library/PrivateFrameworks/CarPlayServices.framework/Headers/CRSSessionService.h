/*
 Image: /System/Library/PrivateFrameworks/CarPlayServices.framework/CarPlayServices
 */

#import <Foundation/NSObject.h>

@class BSServiceConnectionListener, NSHashTable, NSString;

@protocol OS_dispatch_queue, OS_os_transaction;

@interface CRSSessionService : NSObject

{
    BSServiceConnectionListener *_listener;
    NSObject<OS_dispatch_queue> *_connectionQueue;
    NSHashTable *_connections;
    NSObject<OS_os_transaction> *_idleExitTransaction;
}

@property (retain, nonatomic) BSServiceConnectionListener *listener;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *connectionQueue;
@property (retain, nonatomic) NSHashTable *connections;
@property (retain, nonatomic) NSObject<OS_os_transaction> *idleExitTransaction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)listener:(id)arg1 didReceiveConnection:(id)arg2 withContext:(id)arg3;
- (void)_connectionQueue_removeConnection:(id)arg1;
- (void)_connectionQueue_addConnection:(id)arg1;

@end
