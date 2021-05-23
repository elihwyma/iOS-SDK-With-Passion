/*
 Image: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
 */

#import <Foundation/NSObject.h>

@class MLModel, NSArray, SNVGGFeatureExtractorConfiguration;

__attribute__((visibility("hidden")))
@interface SNVGGBasedDetectorConfiguration : NSObject

{
    SNVGGFeatureExtractorConfiguration *_featureExtractorConfiguration;
    MLModel *_model;
    Class _observationClass;
    NSArray *_outputLabels;
}

@property (nonatomic, readonly) SNVGGFeatureExtractorConfiguration *featureExtractorConfiguration;
@property (nonatomic, readonly) MLModel *model;
@property (nonatomic, readonly) Class observationClass;
@property (nonatomic, readonly) NSArray *outputLabels;

- (id)initWithMLModel:(id)arg1 observationClass:(Class)arg2 outputLabels:(id)arg3;

@end
