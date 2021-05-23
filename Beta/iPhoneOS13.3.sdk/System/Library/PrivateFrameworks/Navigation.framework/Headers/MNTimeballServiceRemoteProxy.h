/*
 Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

#import <Foundation/NSObject.h>

@class MNTimeballSubscriberStore, NSString, NSXPCConnection;

@protocol MNTimeballServiceProxyDelegate;

__attribute__((visibility("hidden")))
@interface MNTimeballServiceRemoteProxy : NSObject

{
    NSXPCConnection *_connection;
    MNTimeballSubscriberStore *_subscriberStore;
    _Bool _requestLeeching;
    id <MNTimeballServiceProxyDelegate> _delegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) id <MNTimeballServiceProxyDelegate> delegate;

- (id)init;
- (void)dealloc;
- (void)_closeConnection;
- (id)_remoteObjectProxy;
- (void)_openConnection;
- (void)invokeHandlerWithID:(id)arg1 forDestination:(id)arg2 update:(id)arg3 error:(id)arg4;
- (void)completedUpdateForHandlerID:(id)arg1;
- (void)didReceiveError:(id)arg1 forDestination:(id)arg2;
- (void)didReceiveUpdate:(id)arg1 forDestination:(id)arg2;
- (void)requestRoutingOptions:(long long)arg1 forDestinations:(id)arg2 freshness:(id)arg3 handlerID:(id)arg4;
- (void)subscribeToDestination:(id)arg1 options:(long long)arg2 refreshPolicy:(unsigned long long)arg3;
- (void)unsubscribeFromDestination:(id)arg1;
- (void)subscribeToAllDestinations;
- (void)unsubscribeFromAllDestinations;
- (void)_registerForNavdRestart;

@end
