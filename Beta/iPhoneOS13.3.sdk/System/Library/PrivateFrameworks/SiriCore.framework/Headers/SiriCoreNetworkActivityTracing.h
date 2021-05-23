/*
 Image: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSMutableSet;

@protocol OS_dispatch_queue;

@interface SiriCoreNetworkActivityTracing : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_activities;
    NSMutableSet *_connections;
}

+ (id)sharedNetworkActivityTracing;

- (id)init;
- (void)_networkActivityStart:(long long)arg1 activate:(_Bool)arg2;
- (void)_networkActivityActivate:(long long)arg1;
- (void)_networkActivityStop:(long long)arg1;
- (void)_networkActivityTracingCancel;
- (void)_networkActivityAddNWConnection:(id)arg1;
- (void)_networkActivityRemoveNWConnection:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)networkActivityStart:(long long)arg1 activate:(_Bool)arg2;
- (void)networkActivityActivate:(long long)arg1;
- (void)networkActivityStop:(long long)arg1;
- (void)networkActivityTracingCancel;
- (void)networkActivityAddNWConnection:(id)arg1;
- (void)networkActivityRemoveNWConnection:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
