/*
 Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

#import <NSObject.h>

@class NSString;

@protocol OS_dispatch_queue;

@interface CUSleepWakeMonitor : NSObject

{
    _Bool _invalidateCalled;
    _Bool _invalidateDone;
    unsigned int _powerCnx;
    struct IONotificationPort *_powerNotificationPort;
    unsigned int _powerNotifier;
    unsigned int _sleepWakeFlags;
    int _sleepWakeState;
    struct LogCategory *_ucat;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CDUnknownBlockType _invalidationHandler;
    NSString *_label;
    CDUnknownBlockType _sleepWakeHandler;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) CDUnknownBlockType invalidationHandler;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) CDUnknownBlockType sleepWakeHandler;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (void)_invalidate;
- (void)activateWithCompletion:(CDUnknownBlockType)arg1;
- (void)_invalidated;
- (void)_ensureStarted;
- (void)_ensureStopped;
- (void)_sleepWakeHandlerForService:(unsigned int)arg1 type:(unsigned int)arg2 arg:(void *)arg3;

@end
