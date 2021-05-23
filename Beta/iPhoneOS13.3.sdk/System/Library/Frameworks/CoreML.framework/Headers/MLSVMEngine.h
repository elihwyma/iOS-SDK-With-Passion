/*
 Image: /System/Library/Frameworks/CoreML.framework/CoreML
 */

#import <NSObject.h>

@class NSArray, NSString;

@interface MLSVMEngine : NSObject

{
    _Bool _freeModelOnDealloc;
    _Bool _isInputSizeLowerBoundOnly;
    struct svm_model *_model;
    unsigned long long _inputSize;
    NSArray *_classLabels;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property struct svm_model *model;
@property _Bool freeModelOnDealloc;
@property _Bool isInputSizeLowerBoundOnly;
@property unsigned long long inputSize;
@property (retain, nonatomic) NSArray *classLabels;
@property (nonatomic, readonly) unsigned long long numberOfClasses;

+ (id)loadModelFromSpecification:(struct _MLModelSpecification *)arg1 configuration:(id)arg2 error:(id *)arg3;

- (void)dealloc;
- (struct svm_node *)allocSVMNodeVector:(unsigned long long)arg1;
- (void)fillSVMNodeVector:(struct svm_node *)arg1 values:(double *)arg2 count:(unsigned long long)arg3;
- (void)deallocSVMNodeVector:(struct svm_node *)arg1;
- (id)predict:(id)arg1;
- (id)initWithLibSVMFile:(id)arg1 classLabels:(id)arg2;
- (id)initWithSVMModel:(struct svm_model *)arg1 freeOnDealloc:(_Bool)arg2 isInputSizeLowerBoundOnly:(_Bool)arg3 inputSize:(unsigned long long)arg4 classLabels:(id)arg5;
- (_Bool)hasProbabilityPredictionEnabled;
- (void)predictProbabilities:(id)arg1 probabilities:(double *)arg2;

@end
