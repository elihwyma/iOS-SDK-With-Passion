/*
 Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_semaphore;

@interface IMEventListener : NSObject

{
    _Bool _willRepeat;
    double _timerStart;
    NSObject<OS_dispatch_semaphore> *_semaphore;
    double _timeListeningStarted;
    double _timeListeningStopped;
    double _timeLastEventReceived;
    double _timeout;
    unsigned long long _eventCount;
    id _target;
    CDUnknownBlockType _completionBlock;
    CDUnknownBlockType _willInvokeCompletion;
    CDUnknownBlockType _didInvokeCompletion;
}

@property (nonatomic) double timerStart;
@property (nonatomic, readonly) NSObject<OS_dispatch_semaphore> *semaphore;
@property (weak) id target;
@property (copy) CDUnknownBlockType completionBlock;
@property (copy) CDUnknownBlockType willInvokeCompletion;
@property (copy) CDUnknownBlockType didInvokeCompletion;
@property double timeout;
@property (readonly, getter=isListening) _Bool listening;
@property (readonly) double timeListeningStarted;
@property (readonly) double timeListeningStopped;
@property (readonly) double timeLastEventReceived;
@property (readonly) double elapsedWaitingTime;
@property (readonly) unsigned long long eventCount;
@property (nonatomic) _Bool willRepeat;

+ (id)_mutableListenerDictionary;
+ (id)allListeners;
+ (id)eventListener;
+ (id)eventListenerWithNotificationName:(id)arg1 object:(id)arg2;

- (void)_startListening;
- (void)reset;
- (void)_reset;
- (void)startListening;
- (void)stopListening;
- (void)_cancelTimeoutTimer;
- (void)_stopListening;
- (id)createResult:(_Bool)arg1 userInfo:(id)arg2 error:(id)arg3;
- (void)_invokeCompletion:(_Bool)arg1 userInfo:(id)arg2 error:(id)arg3;
- (void)willStartListening;
- (void)_addToListeners;
- (void)_startTimeoutTimerIfNeeded;
- (void)_removeFromListeners;
- (void)willStopListening;
- (void)willReset;
- (void)_handleTimeout:(id)arg1;
- (void)startListeningForEventTarget:(id)arg1 sendStartingEvent:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_dispatchStartEventBlock:(CDUnknownBlockType)arg1;
- (void)waitForCompletion;
- (void)startListeningForEventTarget:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_didReceiveEvent:(_Bool)arg1 userInfo:(id)arg2 error:(id)arg3;

@end
