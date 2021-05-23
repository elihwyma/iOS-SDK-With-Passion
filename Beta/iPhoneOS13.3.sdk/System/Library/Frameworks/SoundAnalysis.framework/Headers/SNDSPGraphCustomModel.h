/*
 Image: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
 */

#import <Foundation/NSObject.h>

@class MLModelDescription, MLMultiArray, MLMultiArrayConstraint;

__attribute__((visibility("hidden")))
@interface SNDSPGraphCustomModel : NSObject

{
    MLModelDescription *_modelDescription;
    MLMultiArrayConstraint *_inputConstraint;
    MLMultiArrayConstraint *_outputConstraint;
    unique_ptr_7f3c0f79 _graph;
    struct vector<float, std::__1::allocator<float>> _scratchFloatSpace;
    MLMultiArray *_modelOutput;
    CDUnknownBlockType _preProcessCallback;
}

@property (copy, nonatomic) CDUnknownBlockType preProcessCallback;

- (id).cxx_construct;
- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)initWithModelDescription:(id)arg1 expectedInputShape:(id)arg2 expectedOutputShape:(id)arg3 graph:(unique_ptr_7f3c0f79)arg4 error:(id *)arg5;

@end
