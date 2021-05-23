/*
 Image: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
 */

#import <AssistantUI/AFUIAudioPlayer.h>

@class VMVoicemail, VMVoicemailManager;

@interface AFUIVoicemailPlayer : AFUIAudioPlayer

{
    VMVoicemailManager *_voicemailManager;
    VMVoicemail *_voicemailObject;
}

@property (retain, nonatomic, getter=_voicemailObject, setter=_setVoicemailObject:) VMVoicemail *voicemailObject;

- (void)audioPlayerDidFinishPlaying:(id)arg1 successfully:(_Bool)arg2;
- (id)_audioCategory;
- (id)_audioURL;
- (void)setPlaybackCommand:(id)arg1;
- (id)_voicemailManager;
- (long long)_voicemailID;
- (void)_updateVoicemailPlayedState:(id)arg1 finished:(_Bool)arg2;
- (unsigned long long)_audioOptions;

@end
