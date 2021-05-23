/*
 Image: /System/Library/PrivateFrameworks/ActivityAchievementsDaemon.framework/ActivityAchievementsDaemon
 */

#import <NSObject.h>

@class ACHDataStore, ACHEarnedInstanceStore, NSArray, NSDate, NSDateInterval, NSDictionary, NSOperationQueue, NSString;

@protocol ACHEarnedInstanceAwarding, OS_dispatch_queue;

@interface ACHEarnedInstanceAwardingSourceRecord : NSObject

{
    ACHDataStore *_dataStore;
    ACHEarnedInstanceStore *_earnedInstanceStore;
    NSOperationQueue *_operationQueue;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSDateInterval *_lastScheduledEvaluationInterval;
    NSDateInterval *_lastCompletedEvaluationInterval;
    id <ACHEarnedInstanceAwarding> _source;
    NSDate *_registrationDate;
}

@property (nonatomic, readonly) id <ACHEarnedInstanceAwarding> source;
@property (nonatomic, readonly) NSDate *registrationDate;
@property (nonatomic, readonly) NSDateInterval *lastScheduledEvaluationInterval;
@property (nonatomic, readonly) NSDateInterval *lastCompletedEvaluationInterval;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *uniqueName;
@property (nonatomic, readonly) NSArray *dataStorePropertyKeys;
@property (retain, nonatomic) NSDictionary *dataStoreProperties;

- (void)dataStoreDidClearAllProperties:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithSource:(id)arg1 earnedInstanceStore:(id)arg2 dataStore:(id)arg3 registrationDate:(id)arg4;
- (void)cancelAllEvaluationOperations;
- (void)addEvaluationOperationWithDateInterval:(id)arg1 databaseContext:(id)arg2 evaluationBlock:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;

@end
