/*
 Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <Foundation/NSObject.h>

@class EDMessagePersistence, NSString;

@protocol EFScheduler;

@interface _MFMessageContentRequestScheduler : NSObject

{
    unsigned long long _requestID;
    id <EFScheduler> _scheduler;
    EDMessagePersistence *_messagePersistence;
}

@property (retain, nonatomic) id <EFScheduler> scheduler;
@property (retain, nonatomic) EDMessagePersistence *messagePersistence;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)performBlock:(CDUnknownBlockType)arg1;
- (void)performSyncBlock:(CDUnknownBlockType)arg1;
- (id)performCancelableBlock:(CDUnknownBlockType)arg1;
- (id)afterDelay:(double)arg1 performBlock:(CDUnknownBlockType)arg2;
- (id)initWithScheduler:(id)arg1 requestID:(unsigned long long)arg2 messagePersistence:(id)arg3;
- (void)performBlockWithActivity:(CDUnknownBlockType)arg1 requestID:(unsigned long long)arg2;
- (void)performVoucherPreservingBlock:(CDUnknownBlockType)arg1;
- (id)performWithObject:(id)arg1;
- (id)initWithScheduler:(id)arg1 messagePersistence:(id)arg2;

@end
