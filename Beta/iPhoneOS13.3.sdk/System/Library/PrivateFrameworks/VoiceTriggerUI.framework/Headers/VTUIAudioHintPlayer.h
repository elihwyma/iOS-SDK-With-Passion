/*
 Image: /System/Library/PrivateFrameworks/VoiceTriggerUI.framework/VoiceTriggerUI
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString, NSTimer, VTUISpeechSynthesizer;

@interface VTUIAudioHintPlayer : NSObject

{
    NSTimer *_timer;
    _Bool _shouldSpeakAudioHint;
    NSString *_language;
    NSArray *_trainingPageAudioHintInstructions;
    NSArray *_trainingPageAudioHintFiles;
    VTUISpeechSynthesizer *_synth;
}

@property (retain, nonatomic) VTUISpeechSynthesizer *synth;
@property (nonatomic) _Bool shouldSpeakAudioHint;
@property (retain, nonatomic) NSArray *trainingPageAudioHintInstructions;
@property (retain, nonatomic) NSArray *trainingPageAudioHintFiles;
@property (retain, nonatomic) NSString *language;

- (void)cleanup;
- (void)_timerFired;
- (id)initWithLanguage:(id)arg1;
- (void)speakConfirmationDialog:(CDUnknownBlockType)arg1;
- (void)speakAudioHint:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_setupHints;
- (_Bool)_hasValidHints;
- (_Bool)_systemLanguageMatchesSiriLanguage:(id)arg1 siriLanguage:(id)arg2;
- (id)_getTrainingPageAudioHintFiles;
- (id)_audioHintPathForFileName:(id)arg1;

@end
