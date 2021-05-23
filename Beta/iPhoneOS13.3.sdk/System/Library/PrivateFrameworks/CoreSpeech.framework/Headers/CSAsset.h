/*
 Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSString;

@interface CSAsset : NSObject

{
    NSDictionary *_decodedInfo;
    NSString *_path;
    NSString *_resourcePath;
    NSString *_configVersion;
}

@property (nonatomic, readonly) unsigned long long SSVNoiseLevelChannelBitset;
@property (nonatomic, readonly) unsigned long long SSVLKFSChannelBitset;
@property (nonatomic, readonly) unsigned int SSVEnergyBufferSize;
@property (nonatomic, readonly) unsigned int SSVNoiseLowerPercentile;
@property (nonatomic, readonly) unsigned int SSVNoiseUpperPercentile;
@property (nonatomic, readonly) unsigned int SSVLKFSLowerPercentile;
@property (nonatomic, readonly) unsigned int SSVLKFSUpperPercentile;
@property (nonatomic, readonly) float SSVNoiseTimeConstant;
@property (nonatomic, readonly) float SSVNoiseMicSensitivityOffset;
@property (nonatomic, readonly) float SSVLKFSTimeConstant;
@property (nonatomic, readonly) float SSVLKFSMicSensitivityOffset;
@property (nonatomic, readonly) float SSVNoiseTTSMappingInputRangeLow;
@property (nonatomic, readonly) float SSVNoiseTTSMappingInputRangeHigh;
@property (nonatomic, readonly) float SSVNoiseTTSMappingOutputRangeLow;
@property (nonatomic, readonly) float SSVNoiseTTSMappingOutputRangeHigh;
@property (nonatomic, readonly) float SSVLKFSTTSMappingInputRangeLow;
@property (nonatomic, readonly) float SSVLKFSTTSMappingInputRangeHigh;
@property (nonatomic, readonly) float SSVLKFSTTSMappingOutputRangeLow;
@property (nonatomic, readonly) float SSVLKFSTTSMappingOutputRangeHigh;
@property (nonatomic, readonly) float SSVUserOffsetInputRangeLow;
@property (nonatomic, readonly) float SSVUserOffsetInputRangeHigh;
@property (nonatomic, readonly) float SSVUserOffsetOutputRangeLow;
@property (nonatomic, readonly) float SSVUserOffsetOutputRangeHigh;
@property (nonatomic, readonly) float SSVTTSVolumeLowerLimitDB;
@property (nonatomic, readonly) float SSVTTSVolumeUpperLimitDB;
@property (nonatomic, readonly) float SSVNoiseWeight;
@property (nonatomic, readonly) NSDictionary *SSVParameterDirectionary;
@property (nonatomic, readonly) NSString *VTFirstPassConfigPathNDAPI;
@property (nonatomic, readonly) float VTFirstPassThreshold;
@property (nonatomic, readonly) float VTFirstPassDelaySecondsForChannelSelection;
@property (nonatomic, readonly) float VTFirstPassMasterChannelScoreBoost;
@property (nonatomic, readonly) float VTFirstPassProcessingChunkSeconds;
@property (nonatomic, readonly) unsigned long long VTFirstPassProcessingChannelsBitset;
@property (nonatomic, readonly) NSString *keywordDetectorConfigPathRecognizer;
@property (nonatomic, readonly) float keywordDetectorThreshold;
@property (nonatomic, readonly) float keywordDetectorWaitTimeSinceVT;
@property (nonatomic, readonly) NSString *speakerDetectorNDAPIConfigPath;
@property (nonatomic, readonly) _Bool speakerDetectorThresholdAvailable;
@property (nonatomic, readonly) float speakerDetectorThreshold;
@property (nonatomic, readonly) float speakerDetectorRetrainTriggerThreshold;
@property (nonatomic, readonly) unsigned long long maxSpeakerVectorsToPersist;
@property (nonatomic, readonly) NSArray *languageDetectorSupportedLocale;
@property (nonatomic, readonly) NSString *languageDetectorConfigFile;
@property (nonatomic, readonly) NSString *startOfSpeechDetectorConfigFile;
@property (nonatomic, readonly) NSString *spgConfigFile;
@property (nonatomic, readonly) NSString *CVTConfigPathNDAPI;
@property (nonatomic, readonly) float CVTThreshold;
@property (nonatomic, readonly) float CVTTwoShotThreshold;
@property (nonatomic, readonly) float CVTTwoShotDecisionWaitTime;
@property (nonatomic, readonly) NSString *path;
@property (nonatomic, readonly) NSString *resourcePath;
@property (nonatomic, readonly) NSDictionary *dictionary;
@property (nonatomic, readonly) NSString *hashFromResourcePath;
@property (nonatomic, readonly) NSString *configVersion;

+ (id)defaultFallBackAssetForVoiceTrigger;
+ (id)assetForAssetType:(unsigned long long)arg1 resourcePath:(id)arg2 configVersion:(id)arg3;
+ (id)fallBackAssetResourcePath;
+ (id)hybridEndpointerAssetFilename;
+ (id)defaultFallBackAssetForSmartSiriVolume;
+ (id)defaultFallBackAssetForHearst;

- (id)description;
- (id)_decodeJson:(id)arg1;
- (id)getNumberForKey:(id)arg1 category:(id)arg2 default:(id)arg3;
- (id)VTSecondPassCategoryForFirstPassSource:(unsigned long long)arg1;
- (float)VTSecondPassRemoteVADThresholdFrom:(id)arg1;
- (float)VTSecondPassRemoteVADMyriadThresholdFrom:(id)arg1;
- (float)VTSecondPassMinimumPhraseLengthForVADGating:(id)arg1;
- (id)RTModelWithFallbackLanguage:(id)arg1;
- (id)configFilepathForDictationOrigin:(unsigned long long)arg1;
- (id)getStringForKey:(id)arg1 category:(id)arg2 default:(id)arg3;
- (id)createRTModelWithLocale:(id)arg1;
- (id)hearstRTModelWithMajorVersion:(unsigned long long)arg1 minorVersion:(unsigned long long)arg2 locale:(id)arg3;
- (id)_sha1:(id)arg1;
- (id)_sha256:(id)arg1;
- (id)latestHearstRTModelForLocale:(id)arg1;
- (id)hearstRTModelLocaleMap;
- (float)VTSecondPassThresholdFrom:(id)arg1;
- (float)VTSecondPassLoggingThresholdFrom:(id)arg1;
- (float)VTSecondPass2ndChanceThresholdFrom:(id)arg1;
- (id)VTSecondPassConfigPathNDAPIFrom:(id)arg1;
- (_Bool)containsCategory:(id)arg1;
- (_Bool)containsKey:(id)arg1 category:(id)arg2;
- (float)VTSecondPassPreTriggerAudioTimeFrom:(id)arg1;
- (float)VTSecondPassAnalyzerPrependingAudioTimeFrom:(id)arg1;
- (float)VTSecondPassAnalyzerTrailingAudioTimeFrom:(id)arg1;
- (_Bool)VTSecondPassConfigPathRecognizerExistFrom:(id)arg1;
- (id)VTSecondPassConfigPathRecognizerFrom:(id)arg1;
- (_Bool)VTSecondPassUseKeywordSpottingFrom:(id)arg1;
- (float)VTSecondPassRecognizerThresholdOffsetFrom:(id)arg1;
- (float)VTSecondPassRecognizerScoreScaleFactorFrom:(id)arg1;
- (id)VTSecondPassRecognizerTokenFrom:(id)arg1;
- (float)VTSecondPassRecognizerWaitTimeFrom:(id)arg1;
- (float)VTSecondPassTwoShotFeedbackDelayFrom:(id)arg1;
- (float)VTSecondPassRejectLoggingThresholdFrom:(id)arg1;
- (_Bool)isEqualAsset:(id)arg1;
- (id)initWithResourcePath:(id)arg1 configFile:(id)arg2 configVersion:(id)arg3;
- (_Bool)getBoolForKey:(id)arg1 category:(id)arg2 default:(_Bool)arg3;

@end
