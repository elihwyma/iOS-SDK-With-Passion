/*
 Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

#import <Foundation/NSObject.h>

@class CSAsset, CSAudioCircularBuffer, CSStartOfSpeechDetector, NSMutableArray, NSString, _EARLanguageDetector, _EARLanguageDetectorAudioBuffer;

@protocol CSLanguageDetectorDelegate, OS_dispatch_queue;

@interface CSLanguageDetector : NSObject

{
    _Bool _startOfSpeechDetected;
    _Bool _needsToUpdateModel;
    int _notifyToken;
    _EARLanguageDetector *_languageDetector;
    _EARLanguageDetectorAudioBuffer *_audioBuffer;
    CSStartOfSpeechDetector *_startOfSpeechDetector;
    CSAudioCircularBuffer *_circBuffer;
    long long _currentState;
    NSMutableArray *_latestDetectedLanguages;
    unsigned long long _numLatestLanguages;
    NSString *_languageDetectorAssetHash;
    CSAsset *_currentAsset;
    NSString *_interactionID;
    NSObject<OS_dispatch_queue> *_queue;
    id <CSLanguageDetectorDelegate> _delegate;
}

@property (retain, nonatomic) _EARLanguageDetector *languageDetector;
@property (retain, nonatomic) _EARLanguageDetectorAudioBuffer *audioBuffer;
@property (retain, nonatomic) CSStartOfSpeechDetector *startOfSpeechDetector;
@property (retain, nonatomic) CSAudioCircularBuffer *circBuffer;
@property (nonatomic) _Bool startOfSpeechDetected;
@property (nonatomic) _Bool needsToUpdateModel;
@property (nonatomic) long long currentState;
@property (nonatomic) int notifyToken;
@property (retain, nonatomic) NSMutableArray *latestDetectedLanguages;
@property (nonatomic) unsigned long long numLatestLanguages;
@property (copy, nonatomic) NSString *languageDetectorAssetHash;
@property (retain, nonatomic) CSAsset *currentAsset;
@property (copy, nonatomic) NSString *interactionID;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (weak, nonatomic) id <CSLanguageDetectorDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)cancelCurrentRequest;
- (void)endAudio;
- (void)languageDetectorDidCompleteProcessing:(id)arg1 loggingInfo:(id)arg2;
- (void)languageDetector:(id)arg1 result:(id)arg2;
- (void)addSamples:(id)arg1 numSamples:(unsigned long long)arg2;
- (void)_startMonitorLanguageDetectorAssetDownload;
- (void)_setNumLatestLangFromConfigFile:(id)arg1;
- (id)_constructLangPriors;
- (void)_initializeStartOfSpeechDetector:(id)arg1;
- (void)_resetStartOfSpeechDetector;
- (void)_setupLanguageDetectorWithOption:(id)arg1;
- (id)_readJsonDictionaryAt:(id)arg1;
- (id)_getDefaultValues;
- (void)_recordRecognitionLanguage:(id)arg1;
- (void)_logLanguageDetectorMetricsForLoggingInfo:(id)arg1;
- (void)_logSoSResult:(id)arg1 toPath:(id)arg2;
- (void)startOfSpeechDetector:(id)arg1 foundStartSampleAt:(unsigned long long)arg2;
- (void)resetForNewRequest:(id)arg1;
- (void)setInteractionIDforCurrentRequest:(id)arg1;
- (void)recordRecognitionLanguage:(id)arg1;
- (void)setMostRecentRecognitionLanguage:(id)arg1;

@end
