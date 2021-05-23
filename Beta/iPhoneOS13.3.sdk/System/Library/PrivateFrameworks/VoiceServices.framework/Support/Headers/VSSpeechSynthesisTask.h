/*
 Image: /System/Library/PrivateFrameworks/VoiceServices.framework/Support/libvoiced_tts.dylib
 */

#import <voiced_tts/VSSpeechSpeakTask.h>

@class NSString;

@interface VSSpeechSynthesisTask : VSSpeechSpeakTask

{
    _Bool _readyForEagerTask;
    VSSpeechSpeakTask *_speakTask;
}

@property (retain, nonatomic) VSSpeechSpeakTask *speakTask;
@property (nonatomic) _Bool readyForEagerTask;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)main;
- (id)initWithRequest:(id)arg1;
- (_Bool)isSpeaking;
- (void)synthesize;
- (void)reportTimingInfo;
- (void)reportInstrumentMetrics;
- (void)reportFinish;
- (void)reportSpeechStart;

@end
