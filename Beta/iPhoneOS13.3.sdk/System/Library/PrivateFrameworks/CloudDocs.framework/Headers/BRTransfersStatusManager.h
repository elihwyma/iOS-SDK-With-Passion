/*
 Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, NSOperationQueue, NSProgress;

@protocol OS_dispatch_queue, OS_dispatch_source;

@interface BRTransfersStatusManager : NSObject

{
    NSMutableArray *_transfers;
    NSOperationQueue *_operationQueue;
    NSProgress *_globalUploadProgress;
    NSProgress *_globalDownloadProgress;
    id _globalProgressSubscriber;
    unsigned long long _shouldHideGlobalDownloadProgressCount;
    NSObject<OS_dispatch_source> *_timerToDisplayGlobalProgress;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (copy, readonly) NSArray *transfers;

+ (id)defaultManager;

- (id)init;
- (void)dealloc;
- (void)_progressSubscription;
- (id)startObservingItemDownloadProgressAtURL:(id)arg1;
- (void)stopObservingItemDownloadProgress:(id)arg1;
- (void)removeTransfer:(id)arg1;
- (void)addTransfer:(id)arg1;
- (void)_setupTimerToDisplayGlobalProgress;
- (void)insertTransfer:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)showGlobalProgressIfNeeded;
- (void)_setGlobalProgress:(id)arg1 forIvar:(id *)arg2;
- (void)downloadAndObserveItemAtURL:(id)arg1 handler:(CDUnknownBlockType)arg2;

@end
