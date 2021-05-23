/*
 Image: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
 */

#import <Foundation/NSObject.h>

@class NSString, PMLModelWeights, PMLSessionDescriptor, PMLTrainingStore;

@protocol PMLEvaluationTrackerProtocol;

@interface PMLNaiveBayesEvaluationPlan : NSObject

{
    PMLTrainingStore *_store;
    id <PMLEvaluationTrackerProtocol> _tracker;
    PMLSessionDescriptor *_sessionDescriptor;
    unsigned long long _sessionsInBatch;
    PMLModelWeights *_currentModelWeights;
    PMLModelWeights *_probabilities;
    PMLModelWeights *_positiveConditionalProbabilities;
    PMLModelWeights *_negativeConditionalProbabilities;
    double _skew;
    _Bool _isMultiLabel;
    unsigned long long _positiveLabel;
    double _threshold;
    unsigned long long _evaluationLevel;
    struct NSString *_planId;
    unsigned long long _maxSessionsLimit;
}

@property (nonatomic, readonly) PMLTrainingStore *store;
@property (nonatomic, readonly) id <PMLEvaluationTrackerProtocol> tracker;
@property (nonatomic, readonly) PMLSessionDescriptor *sessionDescriptor;
@property (nonatomic, readonly) unsigned long long maxSessionsLimit;
@property (nonatomic, readonly) NSString *planId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)run;
- (id)toPlistWithChunks:(id)arg1;
- (id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3;
- (id)runWhile:(CDUnknownBlockType)arg1 didFinish:(_Bool *)arg2;
- (void)loadSessionsWithBlock:(CDUnknownBlockType)arg1;
- (id)normalizeRegressor:(id)arg1;
- (void)runUntilDoneForTesting;
- (id)initWithStore:(id)arg1 tracker:(id)arg2 planId:(struct NSString *)arg3 sessionDescriptor:(id)arg4 sessionsInBatch:(unsigned long long)arg5 probabilities:(id)arg6 positiveConditionalProbabilities:(id)arg7 negativeConditionalProbabilities:(id)arg8 skew:(double)arg9 threshold:(double)arg10 isMultiLabel:(_Bool)arg11 positiveLabel:(unsigned long long)arg12 evaluationLevel:(unsigned long long)arg13;

@end
