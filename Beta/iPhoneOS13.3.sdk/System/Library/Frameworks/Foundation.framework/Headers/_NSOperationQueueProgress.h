/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSProgress.h>

@class NSOperationQueue;

__attribute__((visibility("hidden")))
@interface _NSOperationQueueProgress : NSProgress

{
    NSOperationQueue *_queue;
    struct os_unfair_lock_s _queueLock;
}

- (void)setTotalUnitCount:(long long)arg1;
- (id)initWithQueue:(id)arg1;
- (void)invalidateQueue;

@end
