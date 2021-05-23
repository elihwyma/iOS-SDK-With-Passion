/*
 Image: /System/Library/Frameworks/CoreML.framework/CoreML
 */

#import <CoreML/MLRegressor.h>

@class NSString;

@interface MLGLMRegression : MLRegressor

{
    struct vector<double, std::__1::allocator<double>> intercept;
    struct vector<std::__1::vector<double, std::__1::allocator<double>>, std::__1::allocator<std::__1::vector<double, std::__1::allocator<double>>>> weights;
    int postEvalTransForm;
    struct shared_ptr<CoreML::Specification::Model> m_spec;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)loadModelFromSpecification:(struct _MLModelSpecification *)arg1 configuration:(id)arg2 error:(id *)arg3;

- (id).cxx_construct;
- (id)regress:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)initWithSpecification:(struct _MLModelSpecification *)arg1 configuration:(id)arg2 error:(id *)arg3;
- (id)initWithLRSpec:(struct _MLModelSpecification *)arg1 configuration:(id)arg2 error:(id *)arg3;

@end
