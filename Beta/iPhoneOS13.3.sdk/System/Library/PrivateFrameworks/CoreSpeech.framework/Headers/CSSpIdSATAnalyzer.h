/*
 Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface CSSpIdSATAnalyzer : NSObject

{
    void *_novDetect;
    _Bool _satModelAvailable;
    unsigned long long _spIdType;
    NSString *_profileID;
    NSString *_satModelDir;
    NSString *_satAudioDir;
    NSString *_satModelFilePath;
    unsigned long long _modelType;
    NSString *_spIdTypeStr;
}

@property (retain, nonatomic) NSString *profileID;
@property (nonatomic) unsigned long long spIdType;
@property (nonatomic) unsigned long long modelType;
@property (retain, nonatomic) NSString *spIdTypeStr;
@property (retain, nonatomic) NSString *satModelDir;
@property (retain, nonatomic) NSString *satAudioDir;
@property (nonatomic, readonly) NSString *sysConfigFilepath;
@property (nonatomic, readonly) NSString *sysConfigRoot;
@property (nonatomic, readonly) NSString *satModelFilePath;
@property (nonatomic, readonly) NSString *tdSrSysConfigFile;
@property (nonatomic, readonly) NSString *tdSrSysConfigRoot;
@property (nonatomic, readonly) _Bool satModelAvailable;
@property (nonatomic, readonly) float satScoreThreshold;
@property (nonatomic, readonly) float satScoreVTScale;
@property (nonatomic, readonly) float satScoreVTOffset;
@property (nonatomic, readonly) float satScoreNonVTScale;
@property (nonatomic, readonly) float satScoreNonVTOffset;
@property (nonatomic, readonly) float combinationWeight;
@property (nonatomic, readonly) float satLogitCeilScore;
@property (nonatomic, readonly) float satLogitFloorScore;
@property (nonatomic, readonly) float satImplicitThreshold;
@property (nonatomic, readonly) unsigned long long satImplicitBaseProfileThreshold;
@property (nonatomic, readonly) unsigned long long satImplicitProfileThreshold;
@property (nonatomic, readonly) unsigned long long satImplicitProfileDeltaThreshold;
@property (nonatomic, readonly) float satVTImplicitThreshold;
@property (nonatomic, readonly) float retrainThresholdTrigger;
@property (nonatomic, readonly) float retrainExplicitUttThresholdSAT;
@property (nonatomic, readonly) float retrainExplicitUttThresholdTDSR;
@property (nonatomic, readonly) float retrainThresholdSAT;
@property (nonatomic, readonly) float retrainThresholdTDSR;
@property (nonatomic, readonly) int pruningNumRetentionUtterance;
@property (nonatomic, readonly) int maximumSpeakerVectors;
@property (nonatomic, readonly) int maxAllowedImplicitUtterances;
@property (nonatomic, readonly) int maxAllowedBaseProfileUtterances;
@property (nonatomic, readonly) NSString *voiceProfilePruningCookie;

+ (id)createSATAnalyzersForCSSpIdType:(unsigned long long)arg1 withModel:(unsigned long long)arg2 withAsset:(id)arg3 withFallbackAsset:(id)arg4;

- (void)dealloc;
- (void)reset;
- (id)_getValueForNDAPIConfigOption:(id)arg1;
- (double)_getFloatValueForNDAPIConfigOption:(id)arg1 defaultValue:(double)arg2;
- (unsigned long long)getSATVectorCount;
- (void)updateSAT;
- (void)deleteExistingSATModel;
- (void)deleteVectorAtIndex:(int)arg1;
- (id)getSuperVectorWithEndPoint:(unsigned long long)arg1;
- (double)_getFloatValueFromConfigurationName:(id)arg1 defaultTo:(double)arg2;
- (int)_getIntValueFromConfigurationName:(id)arg1 defaultTo:(int)arg2;
- (id)_getStringValueFromConfigurationName:(id)arg1 defaultTo:(id)arg2;
- (id)_getOptionValueFromConfigurationName:(id)arg1;
- (id)getAnalyzedResult;
- (float)scoreSpeakerVector:(id)arg1 withDimensions:(unsigned long long)arg2;
- (id)initWithCSSpIdType:(unsigned long long)arg1 modelType:(unsigned long long)arg2 profile:(id)arg3 locale:(id)arg4 assetResourcePath:(id)arg5 assetHash:(id)arg6;
- (id)getSpeakerVectorAtIndex:(unsigned long long)arg1;
- (float)analyzeSuperVector:(id)arg1 withDimensions:(unsigned long long)arg2;
- (void)analyzeWavData:(id)arg1 numSamples:(unsigned long long)arg2;
- (_Bool)initializeSATWithModelPath:(id)arg1;

@end
