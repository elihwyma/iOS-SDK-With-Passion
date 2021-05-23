/*
 Image: /System/Library/PrivateFrameworks/VoiceTriggerUI.framework/VoiceTriggerUI
 */

#import <Foundation/NSObject.h>

@class NSString, VSSpeechSynthesizer;

@interface VTUISpeechSynthesizer : NSObject

{
    CDUnknownBlockType _playAudioFileCompletion;
    CDUnknownBlockType _speakStringCompletion;
    VSSpeechSynthesizer *_synthesizer;
}

@property (copy, nonatomic) CDUnknownBlockType playAudioFileCompletion;
@property (copy, nonatomic) CDUnknownBlockType speakStringCompletion;
@property (retain, nonatomic) VSSpeechSynthesizer *synthesizer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)speechSynthesizer:(id)arg1 didStartSpeakingRequest:(id)arg2;
- (void)speechSynthesizer:(id)arg1 didFinishSpeakingRequest:(id)arg2 successfully:(_Bool)arg3 phonemesSpoken:(id)arg4 withError:(id)arg5;
- (void)speechSynthesizer:(id)arg1 didFinishSpeakingRequest:(id)arg2 withInstrumentMetrics:(id)arg3;
- (void)speechSynthesizer:(id)arg1 didStartPresynthesizedAudioRequest:(id)arg2;
- (void)speechSynthesizer:(id)arg1 didStopPresynthesizedAudioRequest:(id)arg2 atEnd:(_Bool)arg3 error:(id)arg4;
- (void)speechSynthesizer:(id)arg1 didFinishPresynthesizedAudioRequest:(id)arg2 withInstrumentMetrics:(id)arg3 error:(id)arg4;
- (void)stopSpeaking;
- (_Bool)isSpeaking;
- (void)playAudioFileAtPath:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)speak:(id)arg1 language:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end
