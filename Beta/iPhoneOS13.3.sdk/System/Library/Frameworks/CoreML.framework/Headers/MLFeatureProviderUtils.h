/*
 Image: /System/Library/Frameworks/CoreML.framework/CoreML
 */

#import <NSObject.h>

@interface MLFeatureProviderUtils : NSObject

+ (id)_featureValuesForNames:(id)arg1 providedBy:(id)arg2 error:(id *)arg3;
+ (long long)_vectorizedSizeOfFeatureValues:(id)arg1 error:(id *)arg2;
+ (_Bool)_vectorizeWithoutSizeCheckFeatureValues:(id)arg1 intoDoubleVector:(double *)arg2 stride:(unsigned long long)arg3 error:(id *)arg4;
+ (_Bool)vectorizeFeaturesProvidedBy:(id)arg1 featureNames:(id)arg2 intoDoubleVector:(double *)arg3 length:(unsigned long long)arg4 stride:(unsigned long long)arg5 error:(id *)arg6;
+ (id)vectorizeFeaturesProvidedBy:(id)arg1 featureNames:(id)arg2 error:(id *)arg3;
+ (_Bool)canVectorizeFeatureWithDescription:(id)arg1;
+ (_Bool)canVectorizeAllFeaturesWithDescriptions:(id)arg1;
+ (id)providerWithSubsetOfFeaturesNamed:(id)arg1 providedBy:(id)arg2;
+ (id)lazyProviderWithFeaturesProvidedBy:(id)arg1 addedToFeaturesProvidedBy:(id)arg2;

@end
