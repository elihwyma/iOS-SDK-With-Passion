/*
 Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

#import <Foundation/NSObject.h>

@class CSAsset, CSKeywordAnalyzerQuasar, CSSpeechManager, NSString;

@protocol CSVoiceTriggerDelegate, OS_dispatch_queue;

@interface CSKeywordDetector : NSObject

{
    _Bool _isRunningRecognizer;
    float _keywordThreshold;
    id <CSVoiceTriggerDelegate> _delegate;
    CSSpeechManager *_speechManager;
    NSObject<OS_dispatch_queue> *_queue;
    CSAsset *_currentAsset;
    CSKeywordAnalyzerQuasar *_keywordAnalyzer;
    unsigned long long _analyzedSampleCount;
    unsigned long long _decisionWaitSampleCount;
}

@property (weak, nonatomic) CSSpeechManager *speechManager;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) CSAsset *currentAsset;
@property (retain, nonatomic) CSKeywordAnalyzerQuasar *keywordAnalyzer;
@property (nonatomic) float keywordThreshold;
@property (nonatomic) unsigned long long analyzedSampleCount;
@property (nonatomic) unsigned long long decisionWaitSampleCount;
@property (nonatomic) _Bool isRunningRecognizer;
@property (weak, nonatomic) id <CSVoiceTriggerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)reset;
- (void)_reset;
- (void)setAsset:(id)arg1;
- (void)_setAsset:(id)arg1;
- (void)keywordAnalyzerQuasar:(id)arg1 hasResultAvailable:(id)arg2 forChannel:(unsigned long long)arg3;
- (id)initWithManager:(id)arg1 asset:(id)arg2;
- (void)startDetectKeyword:(id)arg1;
- (void)speechManagerRecordBufferAvailable:(id)arg1 buffer:(id)arg2;
- (void)speechManagerLPCMRecordBufferAvailable:(id)arg1 chunk:(id)arg2;
- (void)speechManagerDidStartForwarding:(id)arg1 successfully:(_Bool)arg2 error:(id)arg3;
- (void)speechManagerDidStopForwarding:(id)arg1 forReason:(long long)arg2;

@end
