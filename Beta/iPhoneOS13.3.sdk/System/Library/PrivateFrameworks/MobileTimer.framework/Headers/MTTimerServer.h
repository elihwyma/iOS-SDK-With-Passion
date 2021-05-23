/*
 Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

#import <Foundation/NSObject.h>

@class MTTimerStorage, MTXPCConnectionListenerProvider, NSString;

@protocol NAScheduler;

@interface MTTimerServer : NSObject

{
    _Bool _systemReady;
    MTTimerStorage *_storage;
    MTXPCConnectionListenerProvider *_connectionListenerProvider;
    id <NAScheduler> _serializer;
}

@property (nonatomic, readonly) MTTimerStorage *storage;
@property (nonatomic, readonly) MTXPCConnectionListenerProvider *connectionListenerProvider;
@property (nonatomic, readonly, getter=isSystemReady) _Bool systemReady;
@property (retain, nonatomic) id <NAScheduler> serializer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)checkIn;
- (id)initWithStorage:(id)arg1;
- (void)startListening;
- (void)stopListening;
- (void)source:(id)arg1 didAddTimers:(id)arg2;
- (void)source:(id)arg1 didUpdateTimers:(id)arg2;
- (void)source:(id)arg1 didRemoveTimers:(id)arg2;
- (void)source:(id)arg1 didDismissTimer:(id)arg2;
- (void)source:(id)arg1 didFireTimer:(id)arg2;
- (void)nextTimerDidChange:(id)arg1;
- (void)printDiagnostics;
- (id)gatherDiagnostics;
- (void)getTimersWithCompletion:(CDUnknownBlockType)arg1;
- (void)handleSystemReady;
- (void)addTimer:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)updateTimer:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)removeTimer:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)dismissTimerWithIdentifier:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)repeatTimerWithIdentifier:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)initWithStorage:(id)arg1 connectionListenerProvider:(id)arg2;
- (_Bool)_isSystemReady;
- (id)_systemNotReadyError;

@end
