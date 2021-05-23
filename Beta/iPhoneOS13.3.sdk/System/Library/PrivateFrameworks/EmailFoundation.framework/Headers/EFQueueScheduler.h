/*
 Image: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol OS_dispatch_queue;

@interface EFQueueScheduler : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly) _Bool prefersImmediateExecution;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)initWithQueue:(id)arg1;
- (void)performBlock:(CDUnknownBlockType)arg1;
- (void)performSyncBlock:(CDUnknownBlockType)arg1;
- (id)performCancelableBlock:(CDUnknownBlockType)arg1;
- (id)afterDelay:(double)arg1 performBlock:(CDUnknownBlockType)arg2;
- (void)performVoucherPreservingBlock:(CDUnknownBlockType)arg1;
- (id)performWithObject:(id)arg1;

@end
