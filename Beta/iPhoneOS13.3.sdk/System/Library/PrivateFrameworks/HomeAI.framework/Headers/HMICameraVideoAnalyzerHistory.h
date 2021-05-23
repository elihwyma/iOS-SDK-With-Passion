/*
 Image: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
 */

#import <HMFoundation/HMFObject.h>

@class HMFUnfairLock, HMICameraVideoAnalyzer, HMICameraVideoAnalyzerResult, NSArray, NSString;

@interface HMICameraVideoAnalyzerHistory : HMFObject

{
    long long _minRepetitions;
    long long _maxPredictions;
    long long _predictions;
    long long _repetitions;
    long long _totalPredictions;
    long long _totalRepetitions;
    long long _totalRequests;
    HMICameraVideoAnalyzerResult *_lastRequestResult;
    NSArray *_lastRequestSignificantEvents;
    HMICameraVideoAnalyzer *_analyzer;
    HMFUnfairLock *_lock;
}

@property long long predictions;
@property long long repetitions;
@property long long totalPredictions;
@property long long totalRepetitions;
@property long long totalRequests;
@property (retain) HMICameraVideoAnalyzerResult *lastRequestResult;
@property (retain) NSArray *lastRequestSignificantEvents;
@property (weak, readonly) HMICameraVideoAnalyzer *analyzer;
@property (nonatomic, readonly) HMFUnfairLock *lock;
@property (readonly) long long minRepetitions;
@property (readonly) long long maxPredictions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)logCategory;

- (void)reset;
- (id)initWithMinRepetitions:(long long)arg1 maxPredictions:(long long)arg2 analyzer:(id)arg3;
- (void)addRequest:(id)arg1 result:(id)arg2 significantEvents:(id)arg3;
- (_Bool)shouldPredictRequest:(id)arg1;
- (id)predictedSignificantEventsForRequest:(id)arg1;
- (id)predictedResultForRequest:(id)arg1;

@end
