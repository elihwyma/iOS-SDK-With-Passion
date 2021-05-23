/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface VNImageClassifier : NSObject

+ (_Bool)computeImageDescriptorsWithImage:(id)arg1 regionOfInterest:(struct CGRect)arg2 usingDescriptorProcessor:(struct ImageDescriptorProcessorAbstract *)arg3 tileCount:(int)arg4 augmentationMode:(unsigned int)arg5 scalingImage:(_Bool)arg6 resultantDescriptorBuffer:(struct ImageDescriptorBufferAbstract *)arg7 debugIntermediatesDumpPath:(id)arg8 outputDebugDictionary:(id)arg9 options:(id)arg10 metalContext:(id)arg11 canceller:(id)arg12 error:(id *)arg13;
+ (_Bool)computeLabelsAndConfidence:(struct ImageClassifierAbstract *)arg1 usingDescriptorBuffer:(struct ImageDescriptorBufferAbstract *)arg2 populateLabelsAndConfidence:(vector_a2e76741 *)arg3 options:(id)arg4 metalContext:(id)arg5 error:(id *)arg6;
+ (id)classifyImageWithDescriptors:(const struct ImageDescriptorBufferAbstract *)arg1 usingImageClassifier:(struct ImageClassifierAbstract *)arg2 andMinConfidenceForClassification:(float)arg3 outputDebugDictionary:(id)arg4 options:(id)arg5 metalContext:(id)arg6 error:(id *)arg7;
+ (id)classifyImageHierarchicallyWithDescriptors:(const struct ImageDescriptorBufferAbstract *)arg1 usingImageClassifier:(struct ImageClassifierAbstract *)arg2 hierarchicalClassifier:(struct ImageClassifier_HierarchicalModel *)arg3 minimumClassificationConfidence:(float)arg4 minimumClassificationConfidenceRatio:(float)arg5 maximumLeafLabels:(unsigned long long)arg6 maximumHierarchicalLabels:(unsigned long long)arg7 outputDebugDictionary:(id)arg8 options:(id)arg9 metalContext:(id)arg10 error:(id *)arg11;

@end
