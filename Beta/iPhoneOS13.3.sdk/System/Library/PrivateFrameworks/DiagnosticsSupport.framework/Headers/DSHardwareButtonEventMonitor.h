/*
 Image: /System/Library/PrivateFrameworks/DiagnosticsSupport.framework/DiagnosticsSupport
 */

#import <Foundation/NSObject.h>

@class DSTestAutomation, NSLock, NSMutableSet;

@protocol OS_dispatch_queue;

@interface DSHardwareButtonEventMonitor : NSObject

{
    struct __IOHIDEventSystemClient *_buttonHIDSystemClient;
    _Bool _allowEvents;
    NSMutableSet *_buttonEventHandlers;
    NSLock *_eventHandlerChangeLock;
    DSTestAutomation *_testAutomation;
    NSObject<OS_dispatch_queue> *_buttonEventQueue;
    NSObject<OS_dispatch_queue> *_targetQueue;
    NSObject<OS_dispatch_queue> *_systemClientCreationQueue;
}

@property (retain, nonatomic) NSMutableSet *buttonEventHandlers;
@property (nonatomic) _Bool allowEvents;
@property (retain, nonatomic) NSLock *eventHandlerChangeLock;
@property (retain, nonatomic) DSTestAutomation *testAutomation;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *buttonEventQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *targetQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *systemClientCreationQueue;

- (id)init;
- (void)removeTarget:(id)arg1;
- (void)stopWithCompletion:(CDUnknownBlockType)arg1;
- (id)_handlersForTarget:(id)arg1;
- (id)_handlersForEvent:(unsigned long long)arg1;
- (_Bool)_triggerHandlers:(id)arg1 event:(unsigned long long)arg2;
- (void)startWithPriority:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)addTarget:(id)arg1 action:(SEL)arg2 forButtonEvents:(unsigned long long)arg3 propagate:(_Bool)arg4;
- (void)removeTarget:(id)arg1 action:(SEL)arg2 forButtonEvents:(unsigned long long)arg3 propagate:(_Bool)arg4;

@end
