/*
 Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

#import <Foundation/NSObject.h>

@class NSLock, NSMutableDictionary;

@protocol OS_dispatch_queue;

@interface BSXPCConnectionListenerManager : NSObject

{
    NSObject<OS_dispatch_queue> *_listeningQueue;
    NSMutableDictionary *_services;
    NSLock *_servicesLock;
    NSObject<OS_dispatch_queue> *_defaultHandlerQueue;
}

+ (id)sharedInstance;
+ (id)defaultHandlerQueue;
+ (void)listenForService:(id)arg1 onQueue:(id)arg2 withHandler:(id)arg3;
+ (void)stopListeningForService:(id)arg1;

- (id)init;
- (void)dealloc;
- (id)_init;
- (id)_defaultHandlerQueue;
- (void)_addService:(id)arg1 withHandler:(id)arg2 onQueue:(id)arg3;
- (void)_removeService:(id)arg1;

@end
