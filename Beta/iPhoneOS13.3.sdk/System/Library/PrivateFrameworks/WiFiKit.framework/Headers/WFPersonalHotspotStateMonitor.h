/*
 Image: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
 */

#import <Foundation/NSObject.h>

@class NSRunLoop, NSThread, WFClient;

@protocol OS_dispatch_queue;

@interface WFPersonalHotspotStateMonitor : NSObject

{
    WFClient *_client;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSRunLoop *_callbackRunLoop;
    NSThread *_callbackThread;
}

@property (retain, nonatomic) WFClient *client;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *internalQueue;
@property NSRunLoop *callbackRunLoop;
@property (retain, nonatomic) NSThread *callbackThread;

- (id)init;
- (void)dealloc;
- (void)asyncMISDiscoveryState:(CDUnknownBlockType)arg1;
- (void)setMISDiscoveryState:(_Bool)arg1 immediateDisable:(_Bool)arg2;
- (void)_spawnManagerCallbackThread;
- (void)_runManagerCallbackThread;

@end
