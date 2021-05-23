/*
 Image: /System/Library/Frameworks/CoreML.framework/CoreML
 */

#import <NSObject.h>

@interface MLDataConversionUtils : NSObject

+ (id)stridesForShape:(id)arg1;
+ (_Bool)populateEspressoShapeAndStridesFromInputShape:(id)arg1 ndRepresentation:(_Bool)arg2 espressoShape:(id *)arg3 espressoStrides:(id *)arg4 error:(id *)arg5;
+ (_Bool)populateShapeAndStrideFor:(id)arg1 inputShape:(id)arg2 outputShape:(id *)arg3 outputStrides:(id *)arg4 error:(id *)arg5;
+ (id)espressoDataProviderFromFeatureProvider:(id)arg1 forPrediction:(_Bool)arg2 neuralNetworkEngine:(id)arg3 error:(id *)arg4;
+ (id)espressoDataProviderFromBatchProvider:(id)arg1 forPrediction:(_Bool)arg2 neuralNetworkEngine:(id)arg3 error:(id *)arg4;
+ (id)featureProviderFomEspressoDataProvider:(id)arg1 neuralNetworkEngine:(id)arg2 options:(id)arg3 error:(id *)arg4;
+ (id)batchProviderFomEspressoDataProvider:(id)arg1 neuralNetworkEngine:(id)arg2 options:(id)arg3 error:(id *)arg4;

@end
