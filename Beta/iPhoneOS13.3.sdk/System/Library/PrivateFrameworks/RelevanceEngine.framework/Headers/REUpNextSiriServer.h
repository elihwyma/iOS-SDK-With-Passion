/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <Foundation/NSObject.h>

@class NSHashTable, NSMutableSet, NSString, NSXPCListener;

@protocol OS_dispatch_queue;

@interface REUpNextSiriServer : NSObject

{
    NSHashTable *_observers;
    NSMutableSet *_connections;
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCListener *_listener;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)_removeConnection:(id)arg1;
- (void)completedRequestWithDomain:(id)arg1;
- (void)_onqueue_async:(CDUnknownBlockType)arg1;
- (void)_accessObservers:(CDUnknownBlockType)arg1;
- (void)_accessRemoteClients:(CDUnknownBlockType)arg1;

@end
