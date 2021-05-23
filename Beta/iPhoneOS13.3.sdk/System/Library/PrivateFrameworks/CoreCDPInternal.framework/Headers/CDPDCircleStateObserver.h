/*
 Image: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString;

@protocol OS_dispatch_queue;

@interface CDPDCircleStateObserver : NSObject

{
    int _circleChangeToken;
    _Bool _isObserving;
    NSObject<OS_dispatch_queue> *_eventQueue;
    NSMutableArray *_circleObservers;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (const char *)_notificationName;
- (void)registerListener:(id)arg1;
- (void)observeCircleStateWithCircleProxy:(id)arg1 changeHandler:(CDUnknownBlockType)arg2;
- (void)eventReceived:(const char *)arg1 eventValue:(unsigned long long)arg2;
- (void)observeChangeToState:(unsigned long long)arg1 circleProxy:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)stopObservingCircleStatusChange;

@end
