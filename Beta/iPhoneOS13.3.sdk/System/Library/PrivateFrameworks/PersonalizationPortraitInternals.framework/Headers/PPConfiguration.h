/*
 Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

#import <Foundation/NSObject.h>

@class _PASLock, _PASNotificationToken;

@interface PPConfiguration : NSObject

{
    _PASLock *_lock;
    _PASNotificationToken *_assetUpdateHandlerToken;
    int _abGroupOverrideChangedNotificationToken;
}

+ (id)sharedInstance;
+ (id)_loadConfigPlistWithPath:(id)arg1;
+ (id)_loadTopicCalibrationPlistWithPath:(id)arg1;

- (id)init;
- (void)dealloc;
- (double)highLevelTopicScoreAttenuationFactor;
- (double)highLevelTopicScoreThreshold;
- (_Bool)highLevelTopicExtractionEnabled;
- (double)halfValuePosition;
- (_Bool)safariDataDetectorsEnabledForHighMemoryDevices;
- (_Bool)safariDonationTitleExtractionEnabled;
- (double)topicsSigmoidWidth;
- (double)topicsSigmoidPeakValue;
- (double)topicsScalingFactor;
- (float)remoteTopicsMultiplier;
- (double)nonReaderTextWeight;
- (float)scoreThresholdForNamedEntity;
- (float)scoreThresholdForTopic;
- (float)scoreThresholdForLocation;
- (float)feedbackSessionLogsSamplingRate;
- (float)feedbackSessionLogsExtractionsSamplingRate;
- (int)feedbackSessionLogsGeohashLength;
- (double)topicDecayHalfLifeSeconds;
- (double)namedEntityDecayHalfLifeSeconds;
- (double)locationDecayHalfLifeSeconds;
- (void)_loadConfigParams;
- (id)resourceForMappingId:(id)arg1;
- (double)scalingFactorForMappingId:(id)arg1;
- (id)portraitVariantName;
- (id)naturalPortraitVariantName;
- (id)availablePortraitVariantNames;
- (float)topicsMultiplierForBundleId:(id)arg1 algorithm:(unsigned long long)arg2;
- (double)portraitAnalyticsSamplingRate;
- (double)portraitMusicDataCollectionSamplingRateForCTS;
- (double)portraitMusicDataCollectionSamplingRateForAMP;
- (int)portraitMusicDataCollectionMaximumRecordsPerType;
- (_Bool)portraitMusicDataCollectionCollectNonAMPNowPlaying;
- (id)portraitMusicDataCollectionAMPBundleIds;
- (id)topicCalibrationTrie;
- (double)portraitAnalyticsTopicsSamplingRate;
- (int)portraitAnalyticsMaximumNumberOfRecords;
- (int)portraitAnalyticsGeohashLength;

@end
