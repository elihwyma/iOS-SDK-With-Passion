/*
 Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol CNScheduler;

@interface CNBlockCountingSchedulerDecorator : NSObject

{
    id <CNScheduler> _scheduler;
    unsigned long long _pendingBlockCount;
    unsigned long long _activeBlockCount;
    unsigned long long _completedBlockCount;
}

@property (nonatomic, readonly) id <CNScheduler> scheduler;
@property (nonatomic, readonly) unsigned long long pendingBlockCount;
@property (nonatomic, readonly) unsigned long long activeBlockCount;
@property (nonatomic, readonly) unsigned long long completedBlockCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) double timestamp;

+ (id)os_log;

- (void)performBlock:(CDUnknownBlockType)arg1;
- (void)performBlock:(CDUnknownBlockType)arg1 qualityOfService:(unsigned long long)arg2;
- (id)performCancelableBlock:(CDUnknownBlockType)arg1;
- (id)performCancelableBlock:(CDUnknownBlockType)arg1 qualityOfService:(unsigned long long)arg2;
- (id)afterDelay:(double)arg1 performBlock:(CDUnknownBlockType)arg2 qualityOfService:(unsigned long long)arg3;
- (id)afterDelay:(double)arg1 performBlock:(CDUnknownBlockType)arg2;
- (id)initWithScheduler:(id)arg1;
- (void)blockBecamePending;
- (void)blockBecameActive;
- (void)blockBecameCompleted;

@end
