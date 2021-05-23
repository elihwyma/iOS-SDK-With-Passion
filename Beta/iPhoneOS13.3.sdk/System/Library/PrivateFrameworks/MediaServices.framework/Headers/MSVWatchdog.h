/*
 Image: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
 */

#import <Foundation/NSObject.h>

@class NSOperationQueue, NSRunLoop, NSString;

@protocol OS_dispatch_queue, OS_dispatch_source;

@interface MSVWatchdog : NSObject

{
    _Bool _scheduled;
    _Bool _running;
    double _interval;
    double _timeoutInterval;
    CDUnknownBlockType _timeoutCallback;
    NSString *_mode;
    NSOperationQueue *_operationQueue;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSRunLoop *_runLoop;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_timer;
}

@property (retain, nonatomic) NSOperationQueue *operationQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (retain, nonatomic) NSRunLoop *runLoop;
@property (nonatomic) _Bool scheduled;
@property (nonatomic) _Bool running;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *timer;
@property (nonatomic) double interval;
@property (nonatomic) double timeoutInterval;
@property (copy, nonatomic) CDUnknownBlockType timeoutCallback;
@property (retain, nonatomic) NSString *mode;

- (id)init;
- (void)resume;
- (void)suspend;
- (void)scheduleInRunLoop:(id)arg1;
- (void)_cancelTimeout;
- (void)_invokeCallback;
- (void)_scheduleTest;
- (void)_scheduleTimeout;
- (void)scheduleInOperationQueue:(id)arg1;
- (void)scheduleInDispatchQueue:(id)arg1;

@end
