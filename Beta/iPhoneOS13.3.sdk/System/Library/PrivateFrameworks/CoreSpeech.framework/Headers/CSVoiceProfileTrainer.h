/*
 Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

#import <Foundation/NSObject.h>

@class CSAsset, CSDispatchGroup, CSSpIdSATAnalyzer, CSSpIdSpeakerVectorGenerator, CSUserVoiceProfile, NSData, NSError, NSString;

@protocol OS_dispatch_queue;

@interface CSVoiceProfileTrainer : NSObject

{
    float _tdsrScore;
    float _satScore;
    float _bestTriggerScore;
    _Bool _tdsrTimedout;
    float _voiceTriggerThreshold;
    float _satThreshold;
    float _satTDSRThreshold;
    float _satVTImplicitThreshold;
    unsigned long long _baseProfileConfidenceScoreThreshold;
    unsigned long long _implicitConfidenceScoreThreshold;
    unsigned long long _implicitDeltaConfidenceScoreThreshold;
    unsigned long long _maxNumberOfBaseProfileUtterances;
    CSSpIdSpeakerVectorGenerator *_speakerVectorGenerator;
    unsigned long long _currUttLengthInMs;
    CSSpIdSATAnalyzer *_satAnalyzer;
    CSSpIdSATAnalyzer *_tdsrAnalyzer;
    CSDispatchGroup *_spIdDispatchGroup;
    unsigned long long _spIdType;
    NSData *_speakerVector;
    unsigned long long _speakerVectorSize;
    CSUserVoiceProfile *_profile;
    NSString *_locale;
    CSAsset *_asset;
    unsigned long long _satRunMode;
    NSObject<OS_dispatch_queue> *_queue;
    NSError *_tdsrError;
}

@property (retain, nonatomic) CSSpIdSpeakerVectorGenerator *speakerVectorGenerator;
@property (nonatomic) unsigned long long currUttLengthInMs;
@property (retain, nonatomic) CSSpIdSATAnalyzer *satAnalyzer;
@property (retain, nonatomic) CSSpIdSATAnalyzer *tdsrAnalyzer;
@property (retain, nonatomic) CSDispatchGroup *spIdDispatchGroup;
@property (nonatomic) unsigned long long spIdType;
@property (retain, nonatomic) NSData *speakerVector;
@property (nonatomic) unsigned long long speakerVectorSize;
@property (retain, nonatomic) CSUserVoiceProfile *profile;
@property (retain, nonatomic) NSString *locale;
@property (retain, nonatomic) CSAsset *asset;
@property (nonatomic) unsigned long long satRunMode;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSError *tdsrError;
@property (nonatomic, readonly) unsigned long long baseProfileConfidenceScoreThreshold;
@property (nonatomic, readonly) unsigned long long implicitConfidenceScoreThreshold;
@property (nonatomic, readonly) unsigned long long implicitDeltaConfidenceScoreThreshold;
@property (nonatomic, readonly) unsigned long long maxNumberOfBaseProfileUtterances;
@property (nonatomic, readonly) float satVTImplicitThreshold;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithVoiceProfile:(id)arg1 spIdType:(unsigned long long)arg2 satRunMode:(unsigned long long)arg3 languageCode:(id)arg4 asset:(id)arg5;
- (_Bool)checkIfImplicitTrainingRequired;
- (_Bool)checkIfImplicitSATPossibleWithBaseProfileVectorCount:(unsigned long long)arg1;
- (_Bool)checkIfProfileNeedsUploadForBaseProfileVectorCount:(unsigned long long)arg1;
- (void)processUtterance:(id)arg1 ofSpIdType:(unsigned long long)arg2 withUpdatePolicyBlock:(CDUnknownBlockType)arg3 withCompletionBlock:(CDUnknownBlockType)arg4;
- (_Bool)checkIfRetrainingIsRequired;
- (_Bool)checkIfUpdateNecessaryForAudioFileCount:(unsigned long long)arg1;
- (void)addUtterances:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)speakerVectorGenerator:(id)arg1 finishedWithFinalSpeakerVector:(id)arg2 speakerVectorSize:(unsigned long long)arg3 processedAudioDurationMs:(unsigned long long)arg4;
- (id)_createSatAnalyzerForProfile:(id)arg1 locale:(id)arg2 spidType:(unsigned long long)arg3 modelType:(unsigned long long)arg4 asset:(id)arg5 runMode:(unsigned long long)arg6;
- (void)_processAudioFile:(id)arg1 ofSpIdType:(unsigned long long)arg2 withCompletionBlock:(CDUnknownBlockType)arg3;
- (id)_processAudioFile:(id)arg1 ofSpIdType:(unsigned long long)arg2;
- (void)_processScoresWithCompletion:(CDUnknownBlockType)arg1;

@end
