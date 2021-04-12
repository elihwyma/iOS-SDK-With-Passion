//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CarPlayServices/BSServiceConnectionListenerDelegate-Protocol.h>
#import <CarPlayServices/CRSInCallClientToServerInterface-Protocol.h>

@class BSServiceConnectionListener, NSHashTable, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface CRSInCallAssertionService : NSObject <BSServiceConnectionListenerDelegate, CRSInCallClientToServerInterface>
{
    NSHashTable *_observers;
    BSServiceConnectionListener *_listener;
    NSObject<OS_dispatch_queue> *_connectionQueue;
    NSMutableDictionary *_connections;
    NSHashTable *_activatedConnections;
    NSHashTable *_bannersAllowedConnections;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSHashTable *bannersAllowedConnections; // @synthesize bannersAllowedConnections=_bannersAllowedConnections;
@property(retain, nonatomic) NSHashTable *activatedConnections; // @synthesize activatedConnections=_activatedConnections;
@property(retain, nonatomic) NSMutableDictionary *connections; // @synthesize connections=_connections;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *connectionQueue; // @synthesize connectionQueue=_connectionQueue;
@property(retain, nonatomic) BSServiceConnectionListener *listener; // @synthesize listener=_listener;
@property(retain, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
// - (void).cxx_destruct;
- (void)_connectionQueue_removeConnection:(id)arg1;
- (void)_connectionQueue_addConnection:(id)arg1;
- (oneway void)setAllowsBanners:(id)arg1;
- (oneway void)presentInCallService;
- (void)listener:(id)arg1 didReceiveConnection:(id)arg2 withContext:(id)arg3;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1 notifyIfNeeded:(BOOL)arg2;
- (void)addObserver:(id)arg1;
- (id)_init;

@end

