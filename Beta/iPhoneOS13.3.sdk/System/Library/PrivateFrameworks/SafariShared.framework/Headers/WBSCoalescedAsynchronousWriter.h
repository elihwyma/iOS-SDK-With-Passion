/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSObject.h>

@class NSString, NSURL;

@protocol OS_dispatch_group, OS_dispatch_queue, OS_dispatch_source, WBSCoalescedAsynchronousWriterDelegate;

@interface WBSCoalescedAsynchronousWriter : NSObject

{
    NSObject<OS_dispatch_queue> *_diskAccessQueue;
    NSURL *_fileURL;
    CDUnknownBlockType _writerBlock;
    CDUnknownBlockType _dataSourceBlock;
    NSObject<OS_dispatch_queue> *_dataSourceQueue;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSObject<OS_dispatch_source> *_timer;
    double _writeDelayInterval;
    NSObject<OS_dispatch_group> *_writeGroup;
    struct unique_ptr<SafariShared::SuddenTerminationDisabler, std::__1::default_delete<SafariShared::SuddenTerminationDisabler>> _suddenTerminationDisabler;
    _Bool _done;
    NSString *_name;
    id <WBSCoalescedAsynchronousWriterDelegate> _delegate;
}

@property (weak, nonatomic) id <WBSCoalescedAsynchronousWriterDelegate> delegate;

- (void)dealloc;
- (id).cxx_construct;
- (void)_invalidateTimer;
- (void)_timerFired;
- (id)initWithName:(id)arg1 fileURL:(id)arg2 dataSourceBlock:(CDUnknownBlockType)arg3;
- (void)scheduleWrite;
- (void)completePendingWriteSynchronously;
- (void)_writeData:(id)arg1;
- (void)_scheduleTimer;
- (id)initWithName:(id)arg1 fileURL:(id)arg2 dataSourceQueue:(id)arg3 dataSourceBlock:(CDUnknownBlockType)arg4;
- (id)_initWithName:(id)arg1 fileURL:(id)arg2 writerBlock:(CDUnknownBlockType)arg3 dataSourceQueue:(id)arg4 dataSourceBlock:(CDUnknownBlockType)arg5 writeDelayInterval:(double)arg6;
- (id)initWithName:(id)arg1 writerBlock:(CDUnknownBlockType)arg2 dataSourceQueue:(id)arg3 dataSourceBlock:(CDUnknownBlockType)arg4;
- (id)_dataFromDataSource;
- (void)_writeDataAsynchronously:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_waitForWriteCompletion;
- (void)startScheduledWriteNowWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_cancelPendingWriteSynchronouslyLeavingSuddenTerminationIntact;
- (id)initWithName:(id)arg1 fileURL:(id)arg2 dataSourceBlock:(CDUnknownBlockType)arg3 writeDelayInterval:(double)arg4;
- (id)initWithName:(id)arg1 writerBlock:(CDUnknownBlockType)arg2 dataSourceBlock:(CDUnknownBlockType)arg3;
- (void)startScheduledWriteNow;
- (void)performScheduledWriteSynchronously;
- (void)cancelPendingWriteSynchronously;

@end
