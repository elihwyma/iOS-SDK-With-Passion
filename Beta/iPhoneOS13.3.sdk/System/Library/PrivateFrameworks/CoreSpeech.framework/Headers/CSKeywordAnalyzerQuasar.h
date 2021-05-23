/*
 Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, NSString, _EARSpeechRecognitionAudioBuffer, _EARSpeechRecognizer;

@protocol CSKeywordAnalyzerQuasarScoreDelegate, OS_dispatch_queue;

@interface CSKeywordAnalyzerQuasar : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_previousUtteranceTokens;
    NSArray *_triggerTokenList;
    _EARSpeechRecognizer *_recognizer;
    _EARSpeechRecognitionAudioBuffer *_recognizerBuffer;
    _Bool _useKeywordSpotting;
    double _triggerConfidence;
    unsigned long long _activeChannel;
    id <CSKeywordAnalyzerQuasarScoreDelegate> _delegate;
}

@property (nonatomic, readonly) double triggerConfidence;
@property (nonatomic) unsigned long long activeChannel;
@property (weak, nonatomic) id <CSKeywordAnalyzerQuasarScoreDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)reset;
- (void)endAudio;
- (void)speechRecognizer:(id)arg1 didRecognizePartialResult:(id)arg2;
- (void)speechRecognizer:(id)arg1 didFinishRecognitionWithError:(id)arg2;
- (void)speechRecognizer:(id)arg1 didRecognizeFinalResults:(id)arg2;
- (double)_getConfidence:(id)arg1;
- (void)processAudioChunk:(id)arg1;
- (id)initWithConfigPath:(id)arg1 triggerTokens:(id)arg2 useKeywordSpotting:(_Bool)arg3;
- (void)runRecognition;
- (void)_recognizeWavData:(const short *)arg1 length:(int)arg2;

@end
