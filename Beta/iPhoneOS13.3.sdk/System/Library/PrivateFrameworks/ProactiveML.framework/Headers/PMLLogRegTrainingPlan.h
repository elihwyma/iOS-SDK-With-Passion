/*
 Image: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString, PMLModelWeights, PMLSessionDescriptor, PMLTrainingStore;

@protocol PMLLogRegTrackerProtocol, PMLNoiseStrategy, PMLTransformerProtocol;

@interface PMLLogRegTrainingPlan : NSObject

{
    PMLTrainingStore *_store;
    id <PMLLogRegTrackerProtocol> _tracker;
    id <PMLNoiseStrategy> _noiseStrategy;
    PMLSessionDescriptor *_sessionDescriptor;
    unsigned long long _maxSessionsLimit;
    unsigned long long _sessionsInBatch;
    unsigned long long _currentServerIteration;
    PMLModelWeights *_currentModelWeights;
    unsigned long long _localGradientIterations;
    float _localLearningRate;
    float _stoppingThreshold;
    unsigned long long _localMinimumIterations;
    _Bool _useOnlyAppleInternalSessions;
    double _skew;
    double _threshold;
    _Bool _isMultiLabel;
    unsigned long long _positiveLabel;
    unsigned long long _evaluationLevel;
    _Bool _reportScale;
    id <PMLTransformerProtocol> _transformer;
    NSArray *_refeaturizationDescriptors;
    _Bool _intercept;
    struct NSString *_planId;
}

@property (nonatomic, readonly) PMLTrainingStore *store;
@property (nonatomic, readonly) id <PMLLogRegTrackerProtocol> tracker;
@property (nonatomic, readonly) unsigned long long currentServerIteration;
@property (nonatomic, readonly) PMLSessionDescriptor *sessionDescriptor;
@property (nonatomic, readonly) unsigned long long maxSessionsLimit;
@property (nonatomic, readonly) PMLModelWeights *currentModelWeights;
@property (nonatomic, readonly) float localLearningRate;
@property (nonatomic, readonly) float stoppingThreshold;
@property (nonatomic, readonly) unsigned long long localMinimumIterations;
@property (nonatomic, readonly) unsigned long long localGradientIterations;
@property (nonatomic, readonly) _Bool useOnlyAppleInternalSessions;
@property (nonatomic, readonly) _Bool isMultiLabel;
@property (nonatomic, readonly) unsigned long long positiveLabel;
@property (nonatomic, readonly) _Bool intercept;
@property (nonatomic, readonly) unsigned long long evaluationLevel;
@property (nonatomic, readonly) _Bool reportScale;
@property (nonatomic, readonly) id <PMLTransformerProtocol> transformer;
@property (nonatomic, readonly) NSArray *refeaturizationDescriptors;
@property (nonatomic, readonly) NSString *planId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)planWithStore:(id)arg1 tracker:(id)arg2 sessionDescriptor:(id)arg3 arguments:(id)arg4;

- (id)init;
- (id)toPlistWithChunks:(id)arg1;
- (id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3;
- (id)runWhile:(CDUnknownBlockType)arg1 didFinish:(_Bool *)arg2;
- (id)initWithStore:(id)arg1 tracker:(id)arg2 noiseStrategy:(id)arg3 planId:(struct NSString *)arg4 sessionDescriptor:(id)arg5 maxSessionsLimit:(unsigned long long)arg6 sessionsInBatch:(unsigned long long)arg7 currentServerIteration:(unsigned long long)arg8 currentModelWeights:(id)arg9 localLearningRate:(float)arg10 stoppingThreshold:(float)arg11 localMinimumIterations:(unsigned long long)arg12 localGradientIterations:(unsigned long long)arg13 useOnlyAppleInternalSessions:(_Bool)arg14 skew:(double)arg15 threshold:(double)arg16 isMultiLabel:(_Bool)arg17 intercept:(_Bool)arg18 positiveLabel:(unsigned long long)arg19 evaluationLevel:(unsigned long long)arg20 reportScale:(_Bool)arg21 transformer:(id)arg22 refeaturizationDescriptors:(id)arg23;
- (id)train;
- (id)evaluationMetricsForPredictions:(id)arg1 objectives:(id)arg2 predicate:(CDUnknownBlockType)arg3 start:(id)arg4;
- (void)loadSessionsWithBlock:(CDUnknownBlockType)arg1;
- (id)normalizeRegressor:(id)arg1;
- (void)runUntilDoneForTesting;

@end
