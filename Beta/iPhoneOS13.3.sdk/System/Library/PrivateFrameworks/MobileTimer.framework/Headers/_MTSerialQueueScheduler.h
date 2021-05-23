/*
 Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol NAScheduler, OS_dispatch_queue;

@interface _MTSerialQueueScheduler : NSObject

{
    id <NAScheduler> _internalScheduler;
    NSObject<OS_dispatch_queue> *_internalQueue;
}

@property (nonatomic, readonly) id <NAScheduler> internalScheduler;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *internalQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithQueue:(id)arg1;
- (void)performBlock:(CDUnknownBlockType)arg1;
- (void)performSyncBlock:(CDUnknownBlockType)arg1;
- (id)performCancelableBlock:(CDUnknownBlockType)arg1;
- (id)afterDelay:(double)arg1 performBlock:(CDUnknownBlockType)arg2;

@end
