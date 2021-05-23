/*
 Image: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
 */

#import <Foundation/NSObject.h>

@class NSOperationQueue, NSString;

@interface EFOperationQueueScheduler : NSObject

{
    NSOperationQueue *_queue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)performBlock:(CDUnknownBlockType)arg1;
- (void)performSyncBlock:(CDUnknownBlockType)arg1;
- (id)performCancelableBlock:(CDUnknownBlockType)arg1;
- (id)afterDelay:(double)arg1 performBlock:(CDUnknownBlockType)arg2;
- (id)initWithMaxConcurrentOperationCount:(long long)arg1;
- (void)performVoucherPreservingBlock:(CDUnknownBlockType)arg1;
- (id)performWithObject:(id)arg1;

@end
