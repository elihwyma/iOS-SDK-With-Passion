/*
 Image: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
 */

#import <Foundation/NSObject.h>

@class NSHashTable, NSString, NSXPCConnection;

@protocol OS_dispatch_queue;

@interface VTTriggerEventMonitor : NSObject

{
    int _notifyToken;
    int _notifyTokenLegacyTrigger;
    int _notifyTokenLegacyEarlyDetect;
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCConnection *_connection;
    NSHashTable *_observers;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedMonitor;

- (id)init;
- (void)dealloc;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)_invalidateConnection;
- (void)voiceTriggered;
- (void)earlyDetected;
- (void)_attemptConnection;
- (void)_enableTriggerEventXPCNotification:(_Bool)arg1;
- (void)_voiceTriggered;
- (void)_earlyDetected;
- (void)_attemptConnectionInQueue;

@end
