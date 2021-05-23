/*
 Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

#import <Foundation/NSObject.h>

@class NSHashTable;

@protocol OS_dispatch_queue;

@interface PKRendererVSyncController : NSObject

{
    NSObject<OS_dispatch_queue> *_vSyncQueue;
    NSObject<OS_dispatch_queue> *_runloopQueue;
    NSHashTable *_rendererControllers;
    struct __IOMobileFramebuffer *_ioMobileFramebuffer;
}

+ (id)sharedController;

- (id)init;
- (void)createVSyncNotifications;
- (void)signalVSyncSemaphore:(double)arg1 presentationTime:(unsigned long long)arg2;
- (void)addRendererController:(id)arg1;
- (void)removeRendererController:(id)arg1;
- (void)removeVSyncNotifications;

@end
