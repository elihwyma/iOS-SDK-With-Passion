/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HKRetryableOperation : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    long long _retryCount;
    NSMutableArray *_pendingOperations;
}

@property (copy, nonatomic, readonly) NSMutableArray *pendingOperations;

- (id)initWithQueue:(id)arg1 retryCount:(int)arg2;
- (void)_queue_performRetryableOperation:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_queue_performPendingOperation:(id)arg1;

@end
