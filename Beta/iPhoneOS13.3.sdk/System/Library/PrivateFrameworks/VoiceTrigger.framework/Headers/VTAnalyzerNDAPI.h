/*
 Image: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
 */

#import <Foundation/NSObject.h>

@class NSDictionary;

@interface VTAnalyzerNDAPI : NSObject

{
    struct IntNovDetect *_novDetect;
    NSDictionary *_decodedInfo;
}

- (void)dealloc;
- (void)reset;
- (double)getThresholdSAT;
- (int)getSATVectorCount;
- (void)updateSAT;
- (double)getRetrainThresholdTrigger;
- (double)getRetrainExplicitUttThresholdSAT;
- (double)getRetrainExplicitUttThresholdTDSR;
- (double)getRetrainThresholdSAT;
- (double)getRetrainThresholdTDSR;
- (int)getVoiceProfilePruningNumRetentionUtterances;
- (_Bool)initializeSAT:(id)arg1;
- (id)getVoiceProfilePruningCookie;
- (const struct _ndsupervec *)getSuperVectorWithEndPoint:(unsigned int)arg1;
- (const struct _ndsvscore *)analyzeSAT:(const float *)arg1 size:(unsigned int)arg2;
- (void)analyzeWavData:(const short *)arg1 length:(int)arg2;
- (const struct _ndresult *)getAnalyzedResult:(unsigned int)arg1;
- (id)_decodeJson:(id)arg1;
- (id)_getNumberForKey:(id)arg1 category:(id)arg2 default:(id)arg3;
- (double)_getFloatValueFromConfigurationName:(id)arg1 defaultTo:(double)arg2;
- (_Bool)_getBooleanValueFromConfigurationName:(id)arg1 defaultTo:(_Bool)arg2;
- (int)_getIntValueFromConfigurationName:(id)arg1 defaultTo:(int)arg2;
- (id)_getStringValueFromConfigurationName:(id)arg1 defaultTo:(id)arg2;
- (const char *)_getOptionValueFromConfigurationName:(id)arg1;
- (id)initWithConfigPath:(id)arg1 resourcePath:(id)arg2;
- (void)resetBest;
- (const struct _ndresult *)getAnalyzedResult;
- (const struct _ndsvscore *)getScoreSuperVector:(const float *)arg1 size:(unsigned int)arg2;
- (void)deleteVectorIndex:(int)arg1;
- (double)getCombinedTriggerThreshold;
- (double)getNDAPITriggerThreshold;
- (double)getCombinedSecondChanceThreshold;
- (double)getNDAPISecondChanceThreshold;
- (double)getCombinedLoggingThreshold;
- (double)getNDAPILoggingThreshold;
- (double)getExtraSamplesAtStart;
- (double)getSecondPassTrailingTime;
- (_Bool)getDoSupervectorSecondaryTest;
- (double)getThresholdPresuperVector;
- (_Bool)getDoSAT;
- (int)getRetrainNumExplicitUtt;
- (int)getRetrainNumImplicitUtt;
- (id)getRetrainSamplingPolicy;
- (int)getMaximumSpeakerVectors;
- (int)getPayloadUtteranceLifeTimeInDays;
- (_Bool)getUseRecognizer;
- (id)getRecognizerConfig;
- (double)getRecognizerThresholdOffset;
- (double)getRecognizerWaitTime;
- (double)getRecognizerScoreScaleFactor;
- (id)getTriggerTokens;
- (_Bool)getUseFallbackThresholdUponTimeout;
- (_Bool)getUseKeywordSpotting;

@end
