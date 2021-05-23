/*
 Image: /System/Library/PrivateFrameworks/CarPlayServices.framework/CarPlayServices
 */

#import <Foundation/NSObject.h>

@class BSServiceConnectionListener, NSHashTable, NSMutableDictionary, NSString;

@protocol OS_dispatch_queue;

@interface CRSInCallAssertionService : NSObject

{
    NSHashTable *_observers;
    BSServiceConnectionListener *_listener;
    NSObject<OS_dispatch_queue> *_connectionQueue;
    NSMutableDictionary *_connections;
    NSHashTable *_activatedConnections;
    NSHashTable *_bannersAllowedConnections;
}

@property (retain, nonatomic) NSHashTable *observers;
@property (retain, nonatomic) BSServiceConnectionListener *listener;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *connectionQueue;
@property (retain, nonatomic) NSMutableDictionary *connections;
@property (retain, nonatomic) NSHashTable *activatedConnections;
@property (retain, nonatomic) NSHashTable *bannersAllowedConnections;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;

- (id)_init;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)listener:(id)arg1 didReceiveConnection:(id)arg2 withContext:(id)arg3;
- (oneway void)setAllowsBanners:(id)arg1;
- (void)_connectionQueue_removeConnection:(id)arg1;
- (void)_connectionQueue_addConnection:(id)arg1;
- (void)addObserver:(id)arg1 notifyIfNeeded:(_Bool)arg2;
- (oneway void)presentInCallService;

@end
