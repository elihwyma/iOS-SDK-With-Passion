/*
 Image: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
 */

#import <Foundation/NSObject.h>

@class PMLModelRegressor, PMLSparseMatrix;

@interface PMLTrainingStoredSessionBatch : NSObject

{
    PMLSparseMatrix *_covariates;
    PMLModelRegressor *_outcomes;
    unsigned long long _count;
}

@property (nonatomic, readonly) PMLSparseMatrix *covariates;
@property (nonatomic, readonly) PMLModelRegressor *outcomes;
@property (nonatomic, readonly) unsigned long long count;

- (id)minibatchStats;
- (id)initWithCovariates:(id)arg1 outcomes:(id)arg2;
- (id)minibatchStatsForPositiveLabel:(unsigned long long)arg1;
- (id)minibatchStatsForPositiveLabels:(id)arg1;

@end
