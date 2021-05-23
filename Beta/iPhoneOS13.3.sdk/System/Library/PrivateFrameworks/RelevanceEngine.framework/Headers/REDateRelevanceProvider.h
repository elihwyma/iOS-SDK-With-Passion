/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <RelevanceEngine/RERelevanceProvider.h>

@class NSDate, NSDateInterval;

@interface REDateRelevanceProvider : RERelevanceProvider

{
    NSDateInterval *_interval;
    NSDate *_initialRelevanceDate;
    NSDate *_irrelevantDate;
    double _recentDuration;
}

@property (nonatomic, readonly) NSDateInterval *interval;
@property (nonatomic, readonly) NSDate *initialRelevanceDate;
@property (nonatomic, readonly) NSDate *irrelevantDate;
@property (nonatomic, readonly) double recentDuration;

+ (id)_simulationDateFormatter;
+ (id)relevanceSimulatorID;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDictionary:(id)arg1;
- (unsigned long long)_hash;
- (id)dictionaryEncoding;
- (id)initWithEventInterval:(id)arg1;
- (id)initWithEventInterval:(id)arg1 becomesIrrelevantDate:(id)arg2;
- (id)initWithEventInterval:(id)arg1 becomesIrrelevantDate:(id)arg2 firstBecomesRelevantDate:(id)arg3 recentDuration:(double)arg4;
- (id)initWithEventDate:(id)arg1;
- (id)initWithEventDate:(id)arg1 duration:(double)arg2;

@end
