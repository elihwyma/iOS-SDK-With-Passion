/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <Foundation/NSObject.h>

@class MLModel, NSArray, NSString;

@interface _ATXScoreInterpreterCoreMLModel : NSObject

{
    NSString *_coreMLModelName;
    MLModel *_coreMLModel;
    NSString *_coreMLModelOutputName;
    NSArray *_coreMLInputFeatures;
    _Bool _hasOutputIndexedSubscript;
    NSArray *_argumentsToEvaluate;
}

@property (nonatomic, readonly) NSArray *argumentsToEvaluate;
@property (nonatomic, readonly) _Bool hasOutputIndexedSubscript;
@property (nonatomic, readonly) unsigned long long numberOfFeatures;

+ (double)scoreForOutputValue:(id)arg1 outputIndexedSubscript:(long long)arg2;

- (id)init;
- (id)featureAtIndex:(unsigned long long)arg1;
- (id)initWithModelName:(id)arg1 features:(id)arg2 outputSpecification:(id)arg3;
- (void)loadCoreMLModelIfNotAlreadyLoaded;
- (void)loadInstanceVariablesFromFeatures:(id)arg1 outputSpecification:(id)arg2;
- (double)predictionForEvaluatedFeatures:(id)arg1 withOutputIndexedSubscript:(long long)arg2;

@end
