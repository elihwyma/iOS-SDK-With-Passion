/*
 Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

#import <Foundation/NSObject.h>

@class CSSpIdSpeakerVectorGenerator, NSArray, NSString;

@protocol CSSpIdProcessorDelegate, OS_dispatch_queue;

@interface CSSpIdProcessor : NSObject

{
    float _rawScoreVTScale;
    float _rawScoreVTOffset;
    float _rawScoreNonVTScale;
    float _rawScoreNonVTOffset;
    float _logitCeilScore;
    float _logitFloorScore;
    _Bool _triggerPhraseDetectedOnTap;
    unsigned long long _spIdType;
    NSString *_spIdTypeStr;
    id <CSSpIdProcessorDelegate> _delegate;
    CSSpIdSpeakerVectorGenerator *_spIdSvg;
    NSArray *_satAnalyzers;
    unsigned long long _invocationStyle;
    NSString *_assetVersion;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (nonatomic) unsigned long long spIdType;
@property (retain, nonatomic) NSString *spIdTypeStr;
@property (weak, nonatomic) id <CSSpIdProcessorDelegate> delegate;
@property (retain, nonatomic) CSSpIdSpeakerVectorGenerator *spIdSvg;
@property (retain, nonatomic) NSArray *satAnalyzers;
@property (nonatomic) unsigned long long invocationStyle;
@property (retain, nonatomic) NSString *assetVersion;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) NSString *sysConfigFilepath;
@property (nonatomic, readonly) float satScoreThreshold;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)processAudioData:(id)arg1;
- (void)_processSpeakerVector:(id)arg1 withSize:(unsigned long long)arg2 processedAudioDurationMs:(unsigned long long)arg3 isFinal:(_Bool)arg4;
- (void)speakerVectorGenerator:(id)arg1 hasSpeakerVector:(id)arg2 speakerVectorSize:(unsigned long long)arg3 processedAudioDurationMs:(unsigned long long)arg4;
- (void)speakerVectorGenerator:(id)arg1 finishedWithFinalSpeakerVector:(id)arg2 speakerVectorSize:(unsigned long long)arg3 processedAudioDurationMs:(unsigned long long)arg4;
- (id)initWithSpIdContext:(id)arg1 forSpIdType:(unsigned long long)arg2 delegate:(id)arg3;
- (void)endProcessing;
- (void)setCVTTriggerPhraseDetected;

@end
