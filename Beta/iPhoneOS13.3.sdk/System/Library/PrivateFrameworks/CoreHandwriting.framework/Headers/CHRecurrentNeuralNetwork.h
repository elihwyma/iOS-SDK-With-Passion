/*
 Image: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSString;

@interface CHRecurrentNeuralNetwork : NSObject

{
    NSString *_modelName;
    NSArray *_inputNames;
    NSDictionary *_featureCounts;
    NSArray *_outputNames;
    NSDictionary *_classCounts;
    struct MontrealNeuralNetwork *__model;
}

@property (nonatomic, readonly) struct MontrealNeuralNetwork *_model;
@property (retain, nonatomic, readonly) NSString *modelName;
@property (retain, nonatomic, readonly) NSArray *inputNames;
@property (retain, nonatomic, readonly) NSDictionary *featureCounts;
@property (retain, nonatomic, readonly) NSArray *outputNames;
@property (retain, nonatomic, readonly) NSDictionary *classCounts;

- (void)dealloc;
- (id)initWithModelName:(id)arg1;
- (_Bool)_recursivelyPredictProbabilitiesForDrawing:(id)arg1 features:(vector_f9ed6fc8 *)arg2 pointRange:(struct _NSRange)arg3 modelInputName:(id)arg4 modelOutputNames:(id)arg5 probabilities:(vector_e5be908c *)arg6 probabilityPredictionBlock:(CDUnknownBlockType)arg7 error:(id *)arg8;
- (id)normalizedDrawing:(id)arg1 minimumDrawingSize:(struct CGSize)arg2 interpolationDistance:(double)arg3 outputPointMap:(vector_1dba4e4e *)arg4;
- (vector_f9ed6fc8)_extractFeaturesFromDrawing:(id)arg1 inputName:(id)arg2 interpointDistance:(double)arg3 error:(id *)arg4;

@end
