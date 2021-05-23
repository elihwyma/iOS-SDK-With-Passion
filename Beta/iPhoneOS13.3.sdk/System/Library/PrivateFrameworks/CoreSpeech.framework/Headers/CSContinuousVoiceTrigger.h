/*
 Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

#import <Foundation/NSObject.h>

@class CSAsset, CSAudioTimeConverter, CSKeywordAnalyzerNDAPI, NSString;

@protocol CSContinuousVoiceTriggerDelegate, OS_dispatch_queue;

@interface CSContinuousVoiceTrigger : NSObject

{
    float _keywordThreshold;
    float _twoShotThreshold;
    float _lastScore;
    id <CSContinuousVoiceTriggerDelegate> _delegate;
    CSAudioTimeConverter *_audioTimeConverter;
    NSObject<OS_dispatch_queue> *_queue;
    CSAsset *_currentAsset;
    CSKeywordAnalyzerNDAPI *_keywordAnalyzer;
    long long _mode;
    unsigned long long _analyzedSampleCount;
    unsigned long long _triggerEndSampleCount;
    unsigned long long _twoShotDecisionWaitSamples;
    unsigned long long _activeChannel;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) CSAsset *currentAsset;
@property (retain, nonatomic) CSKeywordAnalyzerNDAPI *keywordAnalyzer;
@property (nonatomic) float keywordThreshold;
@property (nonatomic) long long mode;
@property (nonatomic) unsigned long long analyzedSampleCount;
@property (nonatomic) unsigned long long triggerEndSampleCount;
@property (nonatomic) unsigned long long twoShotDecisionWaitSamples;
@property (nonatomic) float twoShotThreshold;
@property (nonatomic) unsigned long long activeChannel;
@property (nonatomic) float lastScore;
@property (weak, nonatomic) id <CSContinuousVoiceTriggerDelegate> delegate;
@property (retain, nonatomic) CSAudioTimeConverter *audioTimeConverter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)start;
- (void)reset;
- (void)_reset;
- (void)setAsset:(id)arg1;
- (void)_setAsset:(id)arg1;
- (void)_shotAnalyzerNDAPI:(id)arg1 hasResultAvailable:(id)arg2 forChannel:(unsigned long long)arg3;
- (void)_keywordAnalyzerNDAPI:(id)arg1 hasResultAvailable:(id)arg2 forChannel:(unsigned long long)arg3;
- (void)keywordAnalyzerNDAPI:(id)arg1 hasResultAvailable:(id)arg2 forChannel:(unsigned long long)arg3;
- (void)startDetectTwoShot:(id)arg1;
- (void)processAudioSamples:(id)arg1;

@end
