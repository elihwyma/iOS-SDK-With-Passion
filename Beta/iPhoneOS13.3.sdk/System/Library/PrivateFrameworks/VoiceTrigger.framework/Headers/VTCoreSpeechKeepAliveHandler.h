/*
 Image: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol OS_dispatch_queue;

@interface VTCoreSpeechKeepAliveHandler : NSObject

{
    int _activeNotificationToken;
    int _inactiveNotificationToken;
    NSObject<OS_dispatch_queue> *_queue;
    _Bool _voiceTriggerEnabled;
    _Bool _speakerStateActivated;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)start;
- (void)VTSiriEnabledMonitor:(id)arg1 didReceiveEnabled:(_Bool)arg2;
- (void)_enableCoreSpeechDaemonKeepAlive;
- (void)_disableCoreSpeechDaemonKeepAlive;
- (void)_handleSpeakerActivated;
- (void)_handleSpeakerInactivated;
- (void)_voiceTriggerPolicyEnabled;
- (void)_voiceTriggerPolicyDisabled;
- (_Bool)_coreSpeechDaemonKeepAlived;
- (void)voiceTriggerPolicyDidChange:(_Bool)arg1;

@end
