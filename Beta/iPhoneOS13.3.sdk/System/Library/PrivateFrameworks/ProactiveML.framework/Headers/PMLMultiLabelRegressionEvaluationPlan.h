/*
 Image: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString, PMLSessionDescriptor, PMLTrainingStore;

@protocol PMLMultiLabelEvaluationTrackerProtocol, PMLMultiLabelRegressionModelProtocol;

@interface PMLMultiLabelRegressionEvaluationPlan : NSObject

{
    PMLTrainingStore *_store;
    PMLSessionDescriptor *_sessionDescriptor;
    unsigned long long _maxSessionsLimit;
    unsigned long long _sessionsInBatch;
    unsigned long long _supportPerLabel;
    id <PMLMultiLabelRegressionModelProtocol> _multiLabelRegressionModel;
    NSArray *_positiveLabels;
    NSArray *_weightsArray;
    _Bool _intercept;
    NSArray *_evaluationPoints;
    id <PMLMultiLabelEvaluationTrackerProtocol> _tracker;
    unsigned long long _evaluationLevel;
    struct NSString *_planId;
}

@property (nonatomic, readonly) PMLTrainingStore *store;
@property (nonatomic, readonly) PMLSessionDescriptor *sessionDescriptor;
@property (nonatomic, readonly) unsigned long long maxSessionsLimit;
@property (nonatomic, readonly) unsigned long long sessionsInBatch;
@property (nonatomic, readonly) unsigned long long supportPerLabel;
@property (nonatomic, readonly) id <PMLMultiLabelRegressionModelProtocol> multiLabelRegressionModel;
@property (nonatomic, readonly) NSArray *positiveLabels;
@property (nonatomic, readonly) NSArray *weightsArray;
@property (nonatomic, readonly) _Bool intercept;
@property (nonatomic, readonly) NSArray *evaluationPoints;
@property (nonatomic, readonly) id <PMLMultiLabelEvaluationTrackerProtocol> tracker;
@property (nonatomic, readonly) unsigned long long evaluationLevel;
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
- (id)initWithPlanId:(struct NSString *)arg1 store:(id)arg2 sessionDescriptor:(id)arg3 maxSessionsLimit:(unsigned long long)arg4 sessionsInBatch:(unsigned long long)arg5 supportPerLabel:(unsigned long long)arg6 labelAndWeights:(id)arg7 modelClassName:(id)arg8 intercept:(_Bool)arg9 evaluationPoints:(id)arg10 tracker:(id)arg11 evaluationLevel:(unsigned long long)arg12;
- (id)_rankedLabelsForSession:(id)arg1;
- (id)_precisionAtEvaluationPointsForSessions:(id)arg1;

@end
