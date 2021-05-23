/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface OITSUDelayTimer : NSObject

{
    _Bool _automaticallyCancelPendingBlockUponSchedulingNewBlock;
    _Bool _cancelled;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSObject<OS_dispatch_source> *_dispatchTimer;
}

@property (retain, nonatomic, setter=_setDispatchQueue:) NSObject<OS_dispatch_queue> *_dispatchQueue;
@property (retain, nonatomic, setter=_setDispatchTimer:) NSObject<OS_dispatch_source> *_dispatchTimer;
@property (nonatomic, getter=_isCancelled, setter=_setCancelled:) _Bool _cancelled;
@property (nonatomic) _Bool automaticallyCancelPendingBlockUponSchedulingNewBlock;

- (id)init;
- (void)dealloc;
- (void)cancel;
- (void)_reallyCancel;
- (void)afterDelay:(double)arg1 processBlock:(CDUnknownBlockType)arg2;
- (id)initWithTargetSerialQueue:(id)arg1;

@end
