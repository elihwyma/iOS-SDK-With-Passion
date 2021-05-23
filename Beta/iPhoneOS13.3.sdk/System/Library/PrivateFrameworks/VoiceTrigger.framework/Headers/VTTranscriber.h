/*
 Image: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, NSString, _EARSpeechRecognitionAudioBuffer, _EARSpeechRecognizer;

@protocol OS_dispatch_queue;

@interface VTTranscriber : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_previousUtteranceTokens;
    double _triggerConfidence;
    NSArray *_triggerTokenList;
    CDUnknownBlockType _callback;
    _EARSpeechRecognizer *_recognizer;
    _EARSpeechRecognitionAudioBuffer *_recognizerBuffer;
    _Bool _isTriggerFollowedByWords;
    _Bool _useKeywordSpotting;
}

@property (readonly) double triggerConfidence;
@property (readonly) _Bool isTriggerFollowedByWords;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)reset;
- (void)endAudio;
- (void)speechRecognizer:(id)arg1 didRecognizePartialResult:(id)arg2;
- (void)speechRecognizer:(id)arg1 didFinishRecognitionWithError:(id)arg2;
- (void)speechRecognizer:(id)arg1 didRecognizeFinalResults:(id)arg2;
- (double)_getConfidence:(id)arg1;
- (id)initWithConfiguration:(id)arg1 triggerTokens:(id)arg2 useKeywordSpotting:(_Bool)arg3;
- (void)runRecognitionWithCallback:(CDUnknownBlockType)arg1;
- (void)recognizeWavData:(const short *)arg1 length:(int)arg2;
- (id)recognizedTokens;

@end
