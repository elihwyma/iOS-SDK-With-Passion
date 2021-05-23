/*
 Image: /System/Library/PrivateFrameworks/AXCoreUtilities.framework/AXCoreUtilities
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol OS_dispatch_queue, OS_dispatch_source;

@interface AXDispatchTimer : NSObject

{
    _Bool _active;
    _Bool _pending;
    _Bool _cancelled;
    _Bool _automaticallyCancelPendingBlockUponSchedulingNewBlock;
    _Bool _useWallTime;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSObject<OS_dispatch_source> *_dispatchTimer;
    NSString *_label;
    CDUnknownBlockType _processBlock;
    CDUnknownBlockType _cancelBlock;
}

@property (nonatomic, getter=isActive) _Bool active;
@property (nonatomic, getter=isPending) _Bool pending;
@property (nonatomic, getter=isCancelled) _Bool cancelled;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *dispatchTimer;
@property (copy, nonatomic) CDUnknownBlockType processBlock;
@property (copy, nonatomic) CDUnknownBlockType cancelBlock;
@property (retain, nonatomic) NSString *label;
@property (nonatomic) _Bool automaticallyCancelPendingBlockUponSchedulingNewBlock;
@property (nonatomic) _Bool useWallTime;

- (id)init;
- (void)dealloc;
- (id)description;
- (void)cancel;
- (void)_reallyCancel;
- (void)afterDelay:(double)arg1 processBlock:(CDUnknownBlockType)arg2;
- (id)initWithTargetSerialQueue:(id)arg1;
- (void)afterDelay:(double)arg1 processBlock:(CDUnknownBlockType)arg2 cancelBlock:(CDUnknownBlockType)arg3;
- (void)_afterDelay:(double)arg1 processBlock:(CDUnknownBlockType)arg2 cancelBlock:(CDUnknownBlockType)arg3;

@end
