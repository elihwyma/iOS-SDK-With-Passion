/*
 Image: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_group, OS_dispatch_queue, OS_dispatch_semaphore;

@interface TSUReadWriteQueue : NSObject

{
    NSObject<OS_dispatch_semaphore> *mCanEnqueueReaders;
    NSObject<OS_dispatch_queue> *mGlobalQueue;
    NSObject<OS_dispatch_group> *mInFlightReaders;
    NSObject<OS_dispatch_group> *mInFlightWriters;
}

- (void)dealloc;
- (id)initWithIdentifier:(id)arg1;
- (void)performSyncRead:(CDUnknownBlockType)arg1;
- (void)waitOnInFlightWriters;
- (void)performAsyncWrite:(CDUnknownBlockType)arg1;
- (void)performSyncWrite:(CDUnknownBlockType)arg1;

@end
