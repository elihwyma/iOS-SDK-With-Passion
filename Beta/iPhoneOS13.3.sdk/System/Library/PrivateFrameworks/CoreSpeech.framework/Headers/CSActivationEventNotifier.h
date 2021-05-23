/*
 Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

#import <Foundation/NSObject.h>

@class CSActivationEvent, NSMapTable;

@protocol OS_dispatch_queue;

@interface CSActivationEventNotifier : NSObject

{
    int _notifyToken;
    NSObject<OS_dispatch_queue> *_queue;
    NSMapTable *_delegates;
    CSActivationEvent *_pendingActivationEvent;
    CDUnknownBlockType _pendingCompletion;
}

@property (nonatomic) int notifyToken;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSMapTable *delegates;
@property (retain, nonatomic) CSActivationEvent *pendingActivationEvent;
@property (copy, nonatomic) CDUnknownBlockType pendingCompletion;

+ (id)sharedNotifier;
+ (id)sharedNotifierForCoreSpeechDaemon;

- (id)init;
- (void)dealloc;
- (void)stop;
- (void)start;
- (void)_stopMonitoring;
- (void)notifyActivationEvent:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_startMonitoring;
- (void)setDelegate:(id)arg1 for:(unsigned long long)arg2;
- (id)_createXPCClientConnection;
- (void)_notifyActivationEvent:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)_isVoiceTriggerEvent:(id)arg1;
- (_Bool)_hasPendingActivationForType:(unsigned long long)arg1;
- (void)_setupTestNotification;
- (void)receiveTestNotificationAPMode;
- (void)receiveTestNotificationAOPMode;
- (void)notifyActivationEventForCoreSpeechDaemon:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)notifyActivationEvent:(unsigned long long)arg1 deviceId:(id)arg2 activationInfo:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_didReceiveAOPFirstPassTrigger:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
