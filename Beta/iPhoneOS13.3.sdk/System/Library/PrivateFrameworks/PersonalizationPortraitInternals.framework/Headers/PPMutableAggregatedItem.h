/*
 Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

#import <Foundation/NSObject.h>

@class NSCountedSet, NSDate, NSMutableSet, PPU16CountedSet;

@interface PPMutableAggregatedItem : NSObject

{
    float _maxScore;
    float _minScore;
    float _sumScore;
    unsigned int _sumDwellTimeInSeconds;
    unsigned int _recordCount;
    float _sumOfSourceDateInHours;
    float _sumOfSquaredSourceDateInHours;
    float _sumOfSquaredInterArrivalHours;
    float _decayedSum;
    float _decayRate;
    PPU16CountedSet *_algorithmCountedSet;
    PPU16CountedSet *_rankHistogram;
    NSMutableSet *_osBuildSet;
    NSMutableSet *_assetVersionSet;
    NSCountedSet *_bundleIdCountedSet;
    NSMutableSet *_groupIdSet;
    PPU16CountedSet *_sourceHourCountedSet;
    PPU16CountedSet *_sourceDayOfWeekCountedSet;
    NSDate *_maxSourceDate;
    NSDate *_minSourceDate;
}

@property (nonatomic, readonly) PPU16CountedSet *algorithmCountedSet;
@property (nonatomic, readonly) float maxScore;
@property (nonatomic, readonly) float minScore;
@property (nonatomic, readonly) float sumScore;
@property (nonatomic, readonly) PPU16CountedSet *rankHistogram;
@property (nonatomic, readonly) unsigned int sumDwellTimeInSeconds;
@property (nonatomic, readonly) unsigned int recordCount;
@property (nonatomic, readonly) NSMutableSet *osBuildSet;
@property (nonatomic, readonly) NSMutableSet *assetVersionSet;
@property (nonatomic, readonly) NSCountedSet *bundleIdCountedSet;
@property (nonatomic, readonly) NSMutableSet *groupIdSet;
@property (nonatomic, readonly) PPU16CountedSet *sourceHourCountedSet;
@property (nonatomic, readonly) PPU16CountedSet *sourceDayOfWeekCountedSet;
@property (nonatomic, readonly) NSDate *maxSourceDate;
@property (nonatomic, readonly) NSDate *minSourceDate;
@property (nonatomic, readonly) float sumOfSourceDateInHours;
@property (nonatomic, readonly) float sumOfSquaredSourceDateInHours;
@property (nonatomic, readonly) float sumOfSquaredInterArrivalHours;
@property (nonatomic, readonly) float decayedSum;
@property (nonatomic, readonly) float decayRate;

+ (float)_decay:(float)arg1 decayRate:(float)arg2 timeElapsedSeconds:(double)arg3;

- (void)_resetPropertiesWithAlgorithmMaxValue:(unsigned long long)arg1;
- (id)_sortRecordsByDescendingSourceDate:(id)arg1;
- (unsigned long long)_processRecord:(id)arg1 algorithm:(unsigned long long)arg2 previousSourceDate:(id)arg3 scoringDate:(id)arg4 perRecordDecayRate:(float)arg5 score:(float)arg6 decayedSumAddend:(float)arg7;
- (id)initWithNamedEntityRecords:(id)arg1 scoringDate:(id)arg2 multiplier:(float)arg3 decayRate:(float)arg4 sorted:(_Bool)arg5;
- (id)initWithNamedEntityRecords:(id)arg1 scoringDate:(id)arg2 multiplier:(float)arg3 perRecordDecayRate:(float)arg4 decayRate:(float)arg5;
- (unsigned long long)_processNamedEntityRecords:(id)arg1 scoringDate:(id)arg2 multiplier:(float)arg3 perRecordDecayRate:(float)arg4;
- (id)initWithTopicRecords:(id)arg1 scoringDate:(id)arg2 decayRate:(float)arg3 sorted:(_Bool)arg4;
- (id)initWithTopicRecords:(id)arg1 scoringDate:(id)arg2 perRecordDecayRate:(float)arg3 decayRate:(float)arg4 ignoreMultiplier:(_Bool)arg5;
- (unsigned long long)_processTopicRecords:(id)arg1 scoringDate:(id)arg2 perRecordDecayRate:(float)arg3 ignoreMultiplier:(_Bool)arg4;

@end
