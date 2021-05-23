/*
 Image: /System/Library/Frameworks/CoreML.framework/CoreML
 */

#import <NSObject.h>

@class MLNeuralNetworkEngine;

@protocol MLBatchProvider;

@interface _MLBatchDataSource : NSObject

{
    _Bool _useForPrediction;
    id <MLBatchProvider> _batchProvider;
    MLNeuralNetworkEngine *_nnEngine;
}

@property (nonatomic, readonly) id <MLBatchProvider> batchProvider;
@property (nonatomic, readonly) MLNeuralNetworkEngine *nnEngine;
@property (nonatomic, readonly) _Bool useForPrediction;

- (id)dataPointAtIndex:(unsigned long long)arg1 error:(id *)arg2;
- (unsigned long long)numberOfDataPoints;
- (id)initWithMLBatchProvider:(id)arg1 forPrediction:(_Bool)arg2 neuralNetworkEngine:(id)arg3 error:(id *)arg4;

@end
