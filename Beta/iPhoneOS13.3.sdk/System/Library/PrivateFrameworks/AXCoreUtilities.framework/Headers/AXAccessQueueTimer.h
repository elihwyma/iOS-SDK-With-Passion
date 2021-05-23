/*
 Image: /System/Library/PrivateFrameworks/AXCoreUtilities.framework/AXCoreUtilities
 */

#import <Foundation/NSObject.h>

@class AXAccessQueue, NSString;

@protocol OS_dispatch_source;

@interface AXAccessQueueTimer : NSObject

{
    _Bool _automaticallyCancelPendingBlockUponSchedulingNewBlock;
    _Bool _active;
    _Bool _accessQueueIsExternal;
    int _state;
    NSString *_label;
    AXAccessQueue *_accessQueue;
    NSObject<OS_dispatch_source> *_dispatchTimer;
}

@property (nonatomic, getter=isActive) _Bool active;
@property (nonatomic) int state;
@property (retain, nonatomic) AXAccessQueue *accessQueue;
@property (nonatomic) _Bool accessQueueIsExternal;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *dispatchTimer;
@property (copy) NSString *label;
@property (nonatomic) _Bool automaticallyCancelPendingBlockUponSchedulingNewBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly, getter=isPending) _Bool pending;

+ (id)timerTargettingMainAccessQueue;

- (id)init;
- (void)dealloc;
- (void)cancel;
- (id)initWithTargetAccessQueue:(id)arg1;
- (void)_reallyCancel;
- (void)afterDelay:(double)arg1 processWritingBlock:(CDUnknownBlockType)arg2;
- (void)_afterDelay:(double)arg1 processBlock:(CDUnknownBlockType)arg2 shouldTreatAsWritingBlock:(_Bool)arg3;
- (void)_didFinishProcessingBlock;
- (void)_warnAboutAsynchronousScheduling;
- (void)_performEnqueuedWritingBlock:(CDUnknownBlockType)arg1 asynchronousExecutionWarningHandler:(SEL)arg2;
- (void)_warnAboutAsynchronousCancelling;
- (void)afterDelay:(double)arg1 processBlock:(CDUnknownBlockType)arg2;
- (void)afterDelay:(double)arg1 processReadingBlock:(CDUnknownBlockType)arg2;

@end
