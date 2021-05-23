/*
 Image: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
 */

#import <Foundation/NSObject.h>

@class NSString, VTAnalyzerNDAPI, VTTextDependentSpeakerRecognizer;

@protocol OS_dispatch_semaphore;

@interface VTVoiceProfileRetrainer : NSObject

{
    double _retrainThresholdTrigger;
    double _retrainExplicitUttThresholdSAT;
    double _retrainExplicitUttThresholdTDSR;
    double _retrainThresholdSAT;
    double _retrainThresholdTDSR;
    double _retrainTDSRScore;
    unsigned long long _numRetentionUtterances;
    VTAnalyzerNDAPI *_analyzer;
    NSString *_languageCode;
    unsigned long long _modelType;
    NSString *_configPath;
    NSString *_resourcePath;
    VTTextDependentSpeakerRecognizer *_satRetrainingTdSr;
    NSObject<OS_dispatch_semaphore> *_satRetrainingTdSrSemaphore;
}

@property (retain, nonatomic) VTAnalyzerNDAPI *analyzer;
@property (retain, nonatomic) NSString *languageCode;
@property (nonatomic) unsigned long long modelType;
@property (retain, nonatomic) NSString *configPath;
@property (retain, nonatomic) NSString *resourcePath;
@property (retain, nonatomic) VTTextDependentSpeakerRecognizer *satRetrainingTdSr;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *satRetrainingTdSrSemaphore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)textDependentSpeakerRecognizer:(id)arg1 failedWithError:(id)arg2;
- (void)textDependentSpeakerRecognizer:(id)arg1 hasSatScore:(float)arg2;
- (id)_analyzeEnrollmentUtts:(id)arg1 thresholdTrigger:(double)arg2 thresholdSAT:(double)arg3 thresholdTDSR:(double)arg4 isUpdatingModel:(_Bool)arg5 extraUtts:(id *)arg6 discardUtts:(id *)arg7 psrTimeout:(_Bool *)arg8;
- (id)_getLastPruningCookie;
- (_Bool)_updatePruningCookie:(id)arg1;
- (unsigned long long)_deleteUtterances:(id)arg1;
- (double)_computeSamplingMSEForUtts:(id)arg1 withBeforeScores:(id)arg2;
- (id)initWithAnalyzer:(id)arg1 languageCode:(id)arg2 modelType:(unsigned long long)arg3 configPath:(id)arg4 resourcePath:(id)arg5;
- (void)retrainSATModelWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)pruneVoiceProfileIfNecessary;

@end
