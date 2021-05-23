/*
 Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

#import <NSObject.h>

@protocol OS_dispatch_queue, OS_dispatch_source;

@interface CUCoalescer : NSObject

{
    _Bool _invalidateCalled;
    double _startTime;
    NSObject<OS_dispatch_source> *_timer;
    int _triggered;
    CDUnknownBlockType _actionHandler;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CDUnknownBlockType _invalidationHandler;
    double _leeway;
    double _maxDelay;
    double _minDelay;
}

@property (copy, nonatomic) CDUnknownBlockType actionHandler;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) CDUnknownBlockType invalidationHandler;
@property (nonatomic) double leeway;
@property (nonatomic) double maxDelay;
@property (nonatomic) double minDelay;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (void)_invalidate;
- (void)cancel;
- (void)_cancel;
- (void)_trigger;
- (void)trigger;
- (void)_timerFired;

@end
