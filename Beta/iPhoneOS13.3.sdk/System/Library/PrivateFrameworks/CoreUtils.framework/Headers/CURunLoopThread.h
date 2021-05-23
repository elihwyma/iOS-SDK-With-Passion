/*
 Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

#import <NSObject.h>

@class NSString;

@protocol OS_dispatch_queue;

@interface CURunLoopThread : NSObject

{
    _Bool _activateCalled;
    _Bool _invalidateCalled;
    struct __CFRunLoop *_runLoop;
    _Bool _runLoopValid;
    struct NSMutableArray *_startBlocks;
    _Bool _threadRunning;
    struct LogCategory *_ucat;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CDUnknownBlockType _invalidationHandler;
    NSString *_label;
    CDUnknownBlockType _threadInitializeHandler;
    CDUnknownBlockType _threadFinalizeHandler;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) CDUnknownBlockType invalidationHandler;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) CDUnknownBlockType threadInitializeHandler;
@property (copy, nonatomic) CDUnknownBlockType threadFinalizeHandler;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (void)performBlock:(CDUnknownBlockType)arg1;
- (void)_invalidated;
- (void)activate;
- (void)_threadMain;
- (_Bool)_scheduleStopThread;

@end
