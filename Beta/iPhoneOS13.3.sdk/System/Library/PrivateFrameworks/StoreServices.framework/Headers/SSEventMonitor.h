/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h>

@class SSXPCConnection;

@protocol OS_dispatch_queue, SSEventMonitorDelegate;

@interface SSEventMonitor : NSObject

{
    id <SSEventMonitorDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    SSXPCConnection *_eventConnection;
}

@property id <SSEventMonitorDelegate> delegate;

- (id)init;
- (void)dealloc;
- (void)_handleMessage:(id)arg1 fromServerConnection:(id)arg2;
- (void)_connectEventConnection;

@end
