/*
 Image: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
 */

#import <Foundation/NSObject.h>

@class PMLModelRegressor, PMLModelWeights, PMLSparseMatrix;

@interface PMLNaiveBayesSolver : NSObject

{
    PMLModelWeights *_positiveConditionalProbabilities;
    PMLModelWeights *_negativeConditionalProbabilities;
    PMLModelWeights *_probabilities;
    PMLModelWeights *_positiveConditionalCounts;
    PMLModelWeights *_negativeConditionalCounts;
    PMLModelWeights *_counts;
    PMLSparseMatrix *_covariates;
    PMLModelRegressor *_objective;
}

@property (retain) PMLModelWeights *positiveConditionalProbabilities;
@property (retain) PMLModelWeights *negativeConditionalProbabilities;
@property (retain) PMLModelWeights *probabilities;
@property (retain) PMLModelWeights *positiveConditionalCounts;
@property (retain) PMLModelWeights *negativeConditionalCounts;
@property (retain) PMLModelWeights *counts;
@property (retain) PMLSparseMatrix *covariates;
@property (retain) PMLModelRegressor *objective;

- (id)init;
- (float)predict:(id)arg1;
- (id)initWithProbabilities:(id)arg1 positiveConditionalProbabilities:(id)arg2 negativeConditionalProbabilities:(id)arg3;
- (void)solveForCovariates:(id)arg1 objectives:(id)arg2;
- (void)solve;

@end
