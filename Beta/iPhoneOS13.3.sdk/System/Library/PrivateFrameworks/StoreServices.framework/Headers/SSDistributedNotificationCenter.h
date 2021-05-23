/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h>

@class NSMutableArray, NSString, SSXPCServer;

@protocol OS_dispatch_queue;

@interface SSDistributedNotificationCenter : NSObject

{
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSMutableArray *_observers;
    NSString *_portName;
    SSXPCServer *_server;
}

@property (readonly) NSString *namedPort;

- (id)init;
- (void)dealloc;
- (void)removeObserver:(id)arg1;
- (id)initWithNamedPort:(id)arg1;
- (void)_distributedNotificationMessage:(id)arg1 connection:(id)arg2;
- (void)_sendRegistrationMessage:(long long)arg1 name:(id)arg2;
- (id)addObserverForName:(id)arg1 queue:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;

@end
