/*
 Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

#import <Foundation/NSObject.h>

@protocol CSVoiceTriggerXPCClientDelegate, OS_xpc_object;

@interface CSVoiceTriggerXPCClient : NSObject

{
    id <CSVoiceTriggerXPCClientDelegate> _delegate;
    NSObject<OS_xpc_object> *_xpcConnection;
}

@property (retain, nonatomic) NSObject<OS_xpc_object> *xpcConnection;
@property (weak, nonatomic) id <CSVoiceTriggerXPCClientDelegate> delegate;

- (id)init;
- (void)dealloc;
- (void)connect;
- (void)enableVoiceTrigger:(_Bool)arg1 withAssertion:(id)arg2 timestamp:(double)arg3;
- (void)setPhraseSpotterBypassing:(_Bool)arg1 timeout:(double)arg2;
- (void)notifyVoiceTriggeredSiriSessionCancelled;
- (void)_handleListenerEvent:(id)arg1;
- (void)_handleListenerError:(id)arg1;
- (void)_sendMessage:(id)arg1 connection:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_handleListenerDisconnectedError:(id)arg1;

@end
