/*
 Image: /System/Library/Frameworks/CoreML.framework/CoreML
 */

#import <CoreML/MLClassifier.h>

@class NSMutableArray, NSString;

@interface MLGLMClassification : MLClassifier

{
    struct vector<double, std::__1::allocator<double>> intercept;
    struct vector<std::__1::vector<double, std::__1::allocator<double>>, std::__1::allocator<std::__1::vector<double, std::__1::allocator<double>>>> weights;
    NSMutableArray *classLabels;
    long long classType;
    int postEvalTransForm;
    int classEncoding;
    struct shared_ptr<CoreML::Specification::Model> m_spec;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)loadModelFromSpecification:(struct _MLModelSpecification *)arg1 configuration:(id)arg2 error:(id *)arg3;

- (id).cxx_construct;
- (id)classify:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)initWithSpecification:(struct _MLModelSpecification *)arg1 configuration:(id)arg2 error:(id *)arg3;
- (id)classify:(id)arg1 error:(id *)arg2;
- (_Bool)calculateClassProbability:(double *)arg1 input:(id)arg2 error:(id *)arg3;
- (id)classify:(id)arg1 topK:(unsigned long long)arg2 error:(id *)arg3;

@end
