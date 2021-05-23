/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface PLBoundedConcurrentQueue : NSObject

{
    NSObject<OS_dispatch_queue> *_concurrentQueue;
    NSObject<OS_dispatch_queue> *_submissionQueue;
    NSObject<OS_dispatch_semaphore> *_bound;
}

- (void)async:(CDUnknownBlockType)arg1;
- (void)sync:(CDUnknownBlockType)arg1;
- (id)initWithName:(id)arg1 concurrencyLimit:(unsigned char)arg2;

@end
