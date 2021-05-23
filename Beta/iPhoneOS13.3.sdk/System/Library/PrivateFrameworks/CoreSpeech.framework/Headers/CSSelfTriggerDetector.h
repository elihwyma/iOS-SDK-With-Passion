/*
 Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

#import <Foundation/NSObject.h>

@class CSAsset, CSAudioStream, CSKeywordAnalyzerNDAPI, CSPolicy, CSSpeechManager, NSHashTable, NSString;

@protocol OS_dispatch_queue;

@interface CSSelfTriggerDetector : NSObject

{
    _Bool _isSiriClientListening;
    _Bool _selfTriggerEnabled;
    _Bool _isListenPollingStarting;
    float _keywordThreshold;
    NSObject<OS_dispatch_queue> *_queue;
    NSHashTable *_observers;
    CSSpeechManager *_speechManager;
    CSAsset *_currentAsset;
    CSKeywordAnalyzerNDAPI *_keywordAnalyzer;
    unsigned long long _outputAudioChannel;
    CSAudioStream *_audioStream;
    CSPolicy *_enablePolicy;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSHashTable *observers;
@property (weak, nonatomic) CSSpeechManager *speechManager;
@property (retain, nonatomic) CSAsset *currentAsset;
@property (retain, nonatomic) CSKeywordAnalyzerNDAPI *keywordAnalyzer;
@property (nonatomic) float keywordThreshold;
@property (nonatomic) unsigned long long outputAudioChannel;
@property (retain, nonatomic) CSAudioStream *audioStream;
@property (retain, nonatomic) CSPolicy *enablePolicy;
@property (nonatomic) _Bool isSiriClientListening;
@property (nonatomic) _Bool selfTriggerEnabled;
@property (nonatomic) _Bool isListenPollingStarting;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)start;
- (void)reset;
- (void)_reset;
- (void)setAsset:(id)arg1;
- (void)_stopListening;
- (void)registerObserver:(id)arg1;
- (void)unregisterObserver:(id)arg1;
- (void)_setAsset:(id)arg1;
- (id)initWithTargetQueue:(id)arg1;
- (void)_startListenPolling;
- (void)_startListenPollingWithInterval:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_startListenWithCompletion:(CDUnknownBlockType)arg1;
- (void)audioStreamProvider:(id)arg1 didStopStreamUnexpectly:(long long)arg2;
- (void)audioStreamProvider:(id)arg1 audioBufferAvailable:(id)arg2;
- (void)audioStreamProvider:(id)arg1 audioChunkForTVAvailable:(id)arg2;
- (void)CSAudioServerCrashMonitorDidReceiveServerRestart:(id)arg1;
- (void)siriClientBehaviorMonitor:(id)arg1 willStartStreamWithContext:(id)arg2 option:(id)arg3;
- (void)siriClientBehaviorMonitor:(id)arg1 didStartStreamWithContext:(id)arg2 successfully:(_Bool)arg3 option:(id)arg4;
- (void)siriClientBehaviorMonitor:(id)arg1 willStopStream:(id)arg2;
- (void)siriClientBehaviorMonitor:(id)arg1 didStopStream:(id)arg2;
- (void)keywordAnalyzerNDAPI:(id)arg1 hasResultAvailable:(id)arg2 forChannel:(unsigned long long)arg3;
- (void)_handleEnablePolicyEvent:(_Bool)arg1;

@end
