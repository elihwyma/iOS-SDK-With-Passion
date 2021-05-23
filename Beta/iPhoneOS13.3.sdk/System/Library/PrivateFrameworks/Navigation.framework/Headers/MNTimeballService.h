/*
 Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

#import <Foundation/NSObject.h>

@class MNObserverHashTable, NSLock, NSMapTable, NSMutableDictionary, NSString;

@protocol MNTimeballServiceProxyInterface;

@interface MNTimeballService : NSObject

{
    id <MNTimeballServiceProxyInterface> _proxy;
    NSMapTable *_handlerMap;
    NSLock *_subscribersLock;
    NSMutableDictionary *_subscribersPerDestination;
    MNObserverHashTable *_leechers;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)initWithClientID:(id)arg1;
- (void)invokeHandlerWithID:(id)arg1 forDestination:(id)arg2 update:(id)arg3 error:(id)arg4;
- (void)completedUpdateForHandlerID:(id)arg1;
- (void)didReceiveError:(id)arg1 forDestination:(id)arg2;
- (void)didReceiveUpdate:(id)arg1 forDestination:(id)arg2;
- (void)requestRoutingOptions:(long long)arg1 forDestinations:(id)arg2 freshness:(id)arg3 callbackBlock:(CDUnknownBlockType)arg4;
- (id)_addHandler:(CDUnknownBlockType)arg1;
- (void)removeSubscriber:(id)arg1 forDestination:(id)arg2;
- (CDUnknownBlockType)_handlerForID:(id)arg1;
- (void)_removeHandlerWithID:(id)arg1;
- (void)requestRoutingOptions:(long long)arg1 forDestination:(id)arg2 freshness:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)addSubscriber:(id)arg1 forDestination:(id)arg2 options:(long long)arg3 refreshPolicy:(unsigned long long)arg4;
- (void)removeSubscriberForAllDestinations:(id)arg1;
- (void)startLeechingDestinationUpdates:(id)arg1;
- (void)stopLeechingDestinationUpdates:(id)arg1;

@end
