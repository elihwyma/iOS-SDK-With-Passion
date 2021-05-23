/*
 Image: /System/Library/PrivateFrameworks/BehaviorMiner.framework/BehaviorMiner
 */

#import <Foundation/NSObject.h>

@class NSDate, NSMutableDictionary, NSSet, NSURL;

@protocol BMMiningTaskDelegate;

@interface BMMiningTask : NSObject

{
    id <BMMiningTaskDelegate> _delegate;
    long long _completionStatus;
    NSMutableDictionary *_coreAnalyticsDict;
    unsigned long long _rulePersistBatchSize;
    NSDate *_start;
    NSURL *_storageURL;
    NSSet *_types;
    NSSet *_targetTypes;
    double _samplingInterval;
    unsigned long long _absoluteSupport;
    double _confidence;
}

@property (copy, nonatomic) NSDate *start;
@property (nonatomic) long long completionStatus;
@property (copy, nonatomic, readonly) NSURL *storageURL;
@property (copy, nonatomic, readonly) NSSet *types;
@property (copy, nonatomic, readonly) NSSet *targetTypes;
@property (nonatomic, readonly) double samplingInterval;
@property (nonatomic, readonly) unsigned long long absoluteSupport;
@property (nonatomic, readonly) double confidence;
@property (weak, nonatomic) id <BMMiningTaskDelegate> delegate;
@property (nonatomic, readonly, getter=isFinished) _Bool finished;
@property (retain, nonatomic) NSMutableDictionary *coreAnalyticsDict;
@property (nonatomic, readonly) unsigned long long rulePersistBatchSize;

+ (id)supergreenMiningTask;

- (id)init;
- (void)finishWithError:(id)arg1;
- (id)initWithStorageURL:(id)arg1 types:(id)arg2 targetTypes:(id)arg3 samplingInterval:(double)arg4 absoluteSupport:(unsigned long long)arg5 confidence:(double)arg6 rulePersistBatchSize:(unsigned long long)arg7;
- (id)initWithStorageURL:(id)arg1 types:(id)arg2 targetTypes:(id)arg3 samplingInterval:(double)arg4 absoluteSupport:(unsigned long long)arg5 confidence:(double)arg6;
- (void)finishWithCompletionStatus:(long long)arg1;
- (void)mine;
- (void)terminateEarly;

@end
