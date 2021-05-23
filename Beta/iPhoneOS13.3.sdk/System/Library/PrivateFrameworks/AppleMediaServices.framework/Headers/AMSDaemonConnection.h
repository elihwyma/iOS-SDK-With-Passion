/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableSet, NSXPCConnection;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AMSDaemonConnection : NSObject

{
    NSXPCConnection *_sharedConnection;
    NSObject<OS_dispatch_queue> *_sharedConnectionAccessQueue;
    NSMutableSet *_activePromises;
    NSMutableArray *_interruptionHandlers;
}

@property (retain, nonatomic) NSXPCConnection *sharedConnection;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *sharedConnectionAccessQueue;
@property (nonatomic, readonly) NSMutableSet *activePromises;
@property (nonatomic, readonly) NSMutableArray *interruptionHandlers;

- (id)init;
- (void)dealloc;
- (void)_handleInvalidation;
- (void)addInterruptionHandler:(CDUnknownBlockType)arg1;
- (id)deviceMessengerProxyWithDelegate:(id)arg1;
- (id)securityServiceProxyWithDelegate:(id)arg1;
- (id)pushNotificationService;
- (id)_connectionProxyForAsync:(_Bool)arg1 accessBlock:(CDUnknownBlockType)arg2;
- (void)_handleInterruption;

@end
