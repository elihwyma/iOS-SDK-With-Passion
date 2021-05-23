/*
 Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

#import <Foundation/NSObject.h>

@class NSDate, NSMutableArray, PPSourceStats;

@interface PPMutableFeaturedItem : NSObject

{
    unsigned short _countForAlgorithm[15];
    unsigned short _rankCount[5];
    _Bool _strictFiltering;
    float _maxScore;
    float _minScore;
    float _meanScore;
    float _meanScoreWithOutliersRemoved;
    float _varianceScoreWithOutliersRemoved;
    float _sumDwellTimeInHours;
    float _recordCount;
    unsigned int _countInMobileMail;
    unsigned int _countInSafari;
    unsigned int _countInMail;
    unsigned int _countInMobileSafari;
    unsigned int _countInMobileSlideShow;
    unsigned int _countInMobileSMS;
    unsigned int _countInChat;
    unsigned int _countInNews;
    unsigned int _countInMaps;
    unsigned int _countInMobileCal;
    unsigned int _countInCoreRoutine;
    unsigned int _countInYelp;
    unsigned int _countInMusic;
    unsigned int _countInCal;
    unsigned int _countInWebKit;
    unsigned int _countInYoutube;
    unsigned int _countInReminders;
    unsigned int _countInMobileNotes;
    unsigned int _countInSpotify;
    unsigned int _countInNotes;
    unsigned int _countInPodcast;
    unsigned int _countInNetflix;
    float _meanInterArrivalHour;
    float _varianceInterArrivalHour;
    float _meanSourceDateInHours;
    float _varianceSourceDateInHours;
    float _timeSpanInHours;
    float _timeElapsedInHours;
    float _decayedSum;
    float _decayRate;
    unsigned long long _uniqueAlgorithmCount;
    unsigned long long _uniqueOsBuildCount;
    unsigned long long _uniqueAssetVersionCount;
    unsigned long long _uniqueBundleIdCount;
    unsigned long long _uniqueGroupIdCount;
    unsigned long long _uniqueSourceHourCount;
    NSMutableArray *_countInHour;
    unsigned long long _uniqueSourceDayOfWeekCount;
    NSDate *_scoringDate;
    PPSourceStats *_sourceStats;
    unsigned long long _namedEntityCharacterLength;
}

@property (nonatomic, readonly) unsigned long long uniqueAlgorithmCount;
@property (nonatomic, readonly) float maxScore;
@property (nonatomic, readonly) float minScore;
@property (nonatomic, readonly) float meanScore;
@property (nonatomic, readonly) float meanScoreWithOutliersRemoved;
@property (nonatomic, readonly) float varianceScoreWithOutliersRemoved;
@property (nonatomic, readonly) float sumDwellTimeInHours;
@property (nonatomic, readonly) float recordCount;
@property (nonatomic, readonly) unsigned long long uniqueOsBuildCount;
@property (nonatomic, readonly) unsigned long long uniqueAssetVersionCount;
@property (nonatomic, readonly) unsigned long long uniqueBundleIdCount;
@property (nonatomic, readonly) unsigned int countInMobileMail;
@property (nonatomic, readonly) unsigned int countInSafari;
@property (nonatomic, readonly) unsigned int countInMail;
@property (nonatomic, readonly) unsigned int countInMobileSafari;
@property (nonatomic, readonly) unsigned int countInMobileSlideShow;
@property (nonatomic, readonly) unsigned int countInMobileSMS;
@property (nonatomic, readonly) unsigned int countInChat;
@property (nonatomic, readonly) unsigned int countInNews;
@property (nonatomic, readonly) unsigned int countInMaps;
@property (nonatomic, readonly) unsigned int countInMobileCal;
@property (nonatomic, readonly) unsigned int countInCoreRoutine;
@property (nonatomic, readonly) unsigned int countInYelp;
@property (nonatomic, readonly) unsigned int countInMusic;
@property (nonatomic, readonly) unsigned int countInCal;
@property (nonatomic, readonly) unsigned int countInWebKit;
@property (nonatomic, readonly) unsigned int countInYoutube;
@property (nonatomic, readonly) unsigned int countInReminders;
@property (nonatomic, readonly) unsigned int countInMobileNotes;
@property (nonatomic, readonly) unsigned int countInSpotify;
@property (nonatomic, readonly) unsigned int countInNotes;
@property (nonatomic, readonly) unsigned int countInPodcast;
@property (nonatomic, readonly) unsigned int countInNetflix;
@property (nonatomic, readonly) unsigned long long uniqueGroupIdCount;
@property (nonatomic, readonly) unsigned long long uniqueSourceHourCount;
@property (nonatomic, readonly) NSMutableArray *countInHour;
@property (nonatomic, readonly) unsigned long long uniqueSourceDayOfWeekCount;
@property (nonatomic, readonly) float meanInterArrivalHour;
@property (nonatomic, readonly) float varianceInterArrivalHour;
@property (nonatomic, readonly) float meanSourceDateInHours;
@property (nonatomic, readonly) float varianceSourceDateInHours;
@property (nonatomic, readonly) float timeSpanInHours;
@property (nonatomic, readonly) float timeElapsedInHours;
@property (nonatomic, readonly) float decayedSum;
@property (nonatomic, readonly) float decayRate;
@property (nonatomic, readonly) _Bool strictFiltering;
@property (nonatomic, readonly) NSDate *scoringDate;
@property (nonatomic, readonly) PPSourceStats *sourceStats;
@property (nonatomic, readonly) unsigned long long namedEntityCharacterLength;

- (id)initWithMutableAggregatedItem:(id)arg1 scoringDate:(id)arg2 decayRate:(float)arg3 sourceStats:(id)arg4 strictFiltering:(_Bool)arg5;
- (void)updateSpecializedFeaturesNamedEntity:(id)arg1;
- (id)generateScoreDict;
- (id)computeModelScoreAndReturnFeaturesWithScoreInterpreter:(id)arg1;
- (float)computeModelScoreWithScoreInterpreter:(id)arg1;

@end
