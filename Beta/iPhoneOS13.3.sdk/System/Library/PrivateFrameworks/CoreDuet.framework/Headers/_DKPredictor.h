/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <Foundation/NSObject.h>

@protocol _DKKnowledgeQuerying;

@interface _DKPredictor : NSObject

{
    id <_DKKnowledgeQuerying> _knowledgeStore;
}

@property (retain, nonatomic) id <_DKKnowledgeQuerying> knowledgeStore;

+ (id)predictorLog;
+ (id)deviceActivityLikelihoodQueryPredicate;
+ (id)defaultPeriodAtDate:(id)arg1;
+ (id)predictorWithKnowledgeStore:(id)arg1;
+ (id)roundDate:(id)arg1 toUpperQuarterHour:(_Bool)arg2;

- (id)initWithKnowledgeStore:(id)arg1;
- (id)predictionForStreamsWithNames:(id)arg1 withPredicate:(id)arg2 withPredictionType:(unsigned long long)arg3 asOfDate:(id)arg4;
- (id)predictionForStreamsWithNames:(id)arg1 withPredicate:(id)arg2 withPredictionType:(unsigned long long)arg3 withDataPartitionType:(unsigned long long)arg4 asOfDate:(id)arg5;
- (id)deviceActivityLikelihood;
- (id)localInBedPeriod;
- (id)launchLikelihoodPredictionForApp:(id)arg1;
- (id)launchLikelihoodForTopNApplications:(long long)arg1 withLikelihoodGreaterThan:(double)arg2 withTemporalResolution:(int)arg3;
- (id)pluginLikelihood;
- (id)displayOnLikelihood;
- (id)predictionForStreamWithName:(id)arg1 withPredicate:(id)arg2 withPredictionType:(unsigned long long)arg3;
- (id)predictionForStreamsWithNames:(id)arg1 withPredicate:(id)arg2 withPredictionType:(unsigned long long)arg3;
- (id)predictionForStreamWithName:(id)arg1 withPredicate:(id)arg2 withPredictionType:(unsigned long long)arg3 asOfDate:(id)arg4;
- (id)predictionForStreamWithName:(id)arg1 withPredicate:(id)arg2 withPredictionType:(unsigned long long)arg3 withDataPartitionType:(unsigned long long)arg4 asOfDate:(id)arg5;
- (id)expectedInBedPeriod;

@end
