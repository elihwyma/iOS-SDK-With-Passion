/*
 Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

#import <NSObject.h>

@protocol OS_dispatch_queue, OS_dispatch_source;

@interface CURetrier : NSObject

{
    _Bool _invalidateCalled;
    NSObject<OS_dispatch_source> *_retryTimer;
    CDUnknownBlockType _actionHandler;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    double _interval;
    double _leeway;
    CDUnknownBlockType _invalidationHandler;
    double _startTime;
}

@property (copy, nonatomic) CDUnknownBlockType actionHandler;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic) double interval;
@property (nonatomic) double leeway;
@property (copy, nonatomic) CDUnknownBlockType invalidationHandler;
@property (nonatomic) double startTime;

- (id)init;
- (void)invalidate;
- (void)start;
- (void)failed;
- (void)invalidateDirect;
- (void)failedDirect;
- (void)startDirect;
- (void)succeeded;
- (void)succeededDirect;

@end
