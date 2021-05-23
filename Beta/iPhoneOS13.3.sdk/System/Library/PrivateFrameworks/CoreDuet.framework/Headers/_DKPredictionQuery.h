/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <CoreDuet/_DKEventQuery.h>

@class NSDate, _DKKnowledgeStorage;

@interface _DKPredictionQuery : _DKEventQuery

{
    _Bool _useHistoricalHistogram;
    _Bool _isTopNPrediction;
    int _slotDuration;
    int _minimumDaysOfHistory;
    int _totalSlotsInDay;
    unsigned long long _type;
    unsigned long long _partitionType;
    NSDate *_asOfDate;
    _DKKnowledgeStorage *_storage;
    CDUnknownBlockType _predictionHandler;
    long long _topN;
    double _minLikelihood;
}

@property (nonatomic) int totalSlotsInDay;
@property (nonatomic) _Bool isTopNPrediction;
@property (nonatomic) long long topN;
@property (nonatomic) double minLikelihood;
@property (nonatomic) int slotDuration;
@property (nonatomic) int minimumDaysOfHistory;
@property (nonatomic) unsigned long long type;
@property (nonatomic) unsigned long long partitionType;
@property (nonatomic) _Bool useHistoricalHistogram;
@property (retain, nonatomic) NSDate *asOfDate;
@property (retain, nonatomic) _DKKnowledgeStorage *storage;
@property (copy) CDUnknownBlockType predictionHandler;

+ (_Bool)supportsSecureCoding;
+ (id)predictionQueryForStreams:(id)arg1 withPredicate:(id)arg2 withPredictionType:(unsigned long long)arg3;
+ (id)predictionQueryForStream:(id)arg1 withPredicate:(id)arg2 withPredictionType:(unsigned long long)arg3;
+ (_Bool)calendar:(id)arg1 isWeekendWithIntervalToWeekdayWeekendTransition:(double *)arg2 containingOrAfterDate:(id)arg3;
+ (id)topNPredictionQueryForStream:(id)arg1 withPredicate:(id)arg2 withTopN:(long long)arg3 withMinLikelihood:(double)arg4;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)executeUsingCoreDataStorage:(id)arg1 error:(id *)arg2;
- (id)handleResults:(id)arg1 error:(id)arg2;
- (_Bool)both:(id)arg1 and:(id)arg2 areWeekendOrWeekdayWithCalendar:(id)arg3;
- (_Bool)both:(id)arg1 and:(id)arg2 areSameDayOfWeekWith:(id)arg3;
- (int)computeSlotForDate:(id)arg1 relativeToDate:(id)arg2;
- (void)setValueForIndex:(int)arg1 forObservations:(id)arg2 withDenominator:(double)arg3;
- (_Bool)shouldIncludeEventWithStartDate:(id)arg1 eventSlot:(int)arg2 withPredictionStartDate:(id)arg3 withPartitionType:(unsigned long long)arg4 andCalendar:(id)arg5;
- (int)computeSlotFromMidnightForDate:(id)arg1;
- (void)addEventsToObservations:(id)arg1 startingHistogram:(id)arg2 endingHistogram:(id)arg3 withPredictionDate:(id)arg4;
- (void)handleImpulsePredictionWithEventStartDate:(id)arg1 predictionStartDate:(id)arg2 durationSinceFirstEvent:(double)arg3 calendar:(id)arg4 observations:(id)arg5 lastDate:(id *)arg6 lastSlot:(int *)arg7;
- (void)handleEventPredictionWithEventStartDate:(id)arg1 eventEndDate:(id)arg2 predictionStartDate:(id)arg3 durationSinceFirstEvent:(double)arg4 calendar:(id)arg5 observations:(id)arg6 useWeights:(_Bool)arg7;
- (id)constructTimelineWithObservations:(id)arg1 withFirstEventDate:(id)arg2 withHistogramInterval:(id)arg3 withPredictionStartDate:(id)arg4 durationSinceFirstEvent:(double)arg5;
- (id)likelihoodForTopN:(long long)arg1 withMinLikelihood:(double)arg2 withData:(id)arg3;
- (id)predictionOfType:(unsigned long long)arg1 withData:(id)arg2;

@end
