/*
 Image: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
 */

#import <Foundation/NSObject.h>

@class NSString, PMLSessionDescriptor, PMLTrainingStore;

@protocol PMLLinRegTrackerProtocol, PMLNoiseStrategy;

@interface PMLLinRegTrainingPlan : NSObject

{
    PMLTrainingStore *_store;
    id <PMLLinRegTrackerProtocol> _tracker;
    id <PMLNoiseStrategy> _noiseStrategy;
    double _skew;
    unsigned long long _positiveLabel;
    PMLSessionDescriptor *_sessionDescriptor;
    unsigned long long _maxSessionsLimit;
    unsigned long long _sessionsInBatch;
    _Bool _useOnlyAppleInternalSessions;
    struct NSString *_planId;
}

@property (nonatomic, readonly) PMLTrainingStore *store;
@property (nonatomic, readonly) id <PMLLinRegTrackerProtocol> tracker;
@property (nonatomic, readonly) PMLSessionDescriptor *sessionDescriptor;
@property (nonatomic, readonly) unsigned long long maxSessionsLimit;
@property (nonatomic, readonly) _Bool useOnlyAppleInternalSessions;
@property (nonatomic, readonly) NSString *planId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)featureMatrixWithNoiseFromCovariates:(id)arg1;
+ (id)_objectiveFeaturesWithNoiseFromCovariates:(id)arg1 objectives:(id)arg2;

- (id)init;
- (id)toPlistWithChunks:(id)arg1;
- (id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3;
- (id)runWhile:(CDUnknownBlockType)arg1 didFinish:(_Bool *)arg2;
- (_Bool)train;
- (void)loadSessionsWithBlock:(CDUnknownBlockType)arg1;
- (id)normalizeRegressor:(id)arg1;
- (void)runUntilDoneForTesting;
- (id)initWithStore:(id)arg1 tracker:(id)arg2 noiseStrategy:(id)arg3 planId:(struct NSString *)arg4 positiveLabel:(unsigned long long)arg5 skew:(double)arg6 sessionDescriptor:(id)arg7 maxSessionsLimit:(unsigned long long)arg8 sessionsInBatch:(unsigned long long)arg9 useOnlyAppleInternalSessions:(_Bool)arg10;

@end
