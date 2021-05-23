/*
 Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

#import <Foundation/NSObject.h>

@class CSVoiceTriggerXPCClient, NSMutableSet, NSString;

@protocol CSVoiceTriggerXPCServiceDelegate, OS_dispatch_queue;

@interface CSVoiceTriggerXPCService : NSObject

{
    _Bool _isPhraseSpotterBypassed;
    NSObject<OS_dispatch_queue> *_queue;
    id <CSVoiceTriggerXPCServiceDelegate> _delegate;
    NSMutableSet *_activationAssertions;
    CSVoiceTriggerXPCClient *_xpcClient;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (weak, nonatomic) id <CSVoiceTriggerXPCServiceDelegate> delegate;
@property (retain, nonatomic) NSMutableSet *activationAssertions;
@property (nonatomic) _Bool isPhraseSpotterBypassed;
@property (retain, nonatomic) CSVoiceTriggerXPCClient *xpcClient;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedService;
+ (id)sharedServiceForCoreSpeechDaemon;

- (id)init;
- (void)enableVoiceTrigger:(_Bool)arg1 withAssertion:(id)arg2;
- (void)setPhraseSpotterBypassing:(_Bool)arg1 timeout:(double)arg2;
- (void)notifyVoiceTriggeredSiriSessionCancelled;
- (id)_createXPCClientConnectionIfNeeded;
- (void)_teardownXPCClientIfNeeded;
- (void)enableVoiceTriggerForCoreSpeechDaemon:(_Bool)arg1 withAssertion:(id)arg2 timestamp:(double)arg3;
- (void)setPhraseSpotterBypassingForCoreSpeechDaemon:(_Bool)arg1 timeout:(double)arg2;
- (void)voiceTriggerXPCClient:(id)arg1 didDisconnect:(_Bool)arg2;
- (void)notifyVoiceTriggeredSiriSessionCancelledForCoreSpeechDaemon;
- (void)notifyServiceConnectionLostForCoreSpeechDaemon;

@end
