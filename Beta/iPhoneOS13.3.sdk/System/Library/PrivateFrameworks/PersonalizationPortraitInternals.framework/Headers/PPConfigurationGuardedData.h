/*
 Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSString, _PASCFBurstTrie;

@interface PPConfigurationGuardedData : NSObject

{
    double topicsSigmoidWidth;
    double topicsSigmoidPeakValue;
    double topicsScalingFactor;
    float remoteTopicsMultiplier;
    double halfValuePosition;
    double nonReaderTextWeight;
    double analyticsSamplingRate;
    double musicDataCollectionSamplingRateForCTS;
    double musicDataCollectionSamplingRateForAMP;
    int musicDataCollectionMaximumRecordsPerType;
    _Bool musicDataCollectionCollectNonAMPNowPlaying;
    NSArray *musicDataCollectionAMPBundleIds;
    NSString *variantName;
    NSString *naturalVariantName;
    NSArray *availableVariantNames;
    NSDictionary *topicMaps;
    NSDictionary *topicMapsScalingFactors;
    NSDictionary *topicsSourceMultiplier;
    NSDictionary *topicsAlgorithmMultiplier;
    _PASCFBurstTrie *topicCalibration;
    _Bool highLevelTopicExtractionEnabled;
    _Bool safariDonationTitleExtractionEnabled;
    _Bool safariDataDetectorsEnabledForHighMemoryDevices;
    double highLevelTopicScoreAttenuationFactor;
    double highLevelTopicScoreThreshold;
    float scoreThresholdForNamedEntity;
    float scoreThresholdForTopic;
    float scoreThresholdForLocation;
    float feedbackSessionLogsSamplingRate;
    float feedbackSessionLogsExtractionsSamplingRate;
    int feedbackSessionLogsGeohashLength;
    double analyticsTopicsSamplingRate;
    int analyticsMaximumNumberOfRecords;
    int analyticsGeohashLength;
    double topicDecayHalfLifeSeconds;
    double namedEntityDecayHalfLifeSeconds;
    double locationDecayHalfLifeSeconds;
}

@end
