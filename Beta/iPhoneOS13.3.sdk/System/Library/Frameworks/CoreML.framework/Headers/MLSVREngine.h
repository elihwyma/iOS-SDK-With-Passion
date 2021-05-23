/*
 Image: /System/Library/Frameworks/CoreML.framework/CoreML
 */

#import <NSObject.h>

@class NSString;

@interface MLSVREngine : NSObject

{
    _Bool _isInputSizeLowerBoundOnly;
    _Bool _freeModelOnDealloc;
    unsigned long long _inputSize;
    struct svm_model *_model;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property struct svm_model *model;
@property _Bool freeModelOnDealloc;
@property (readonly) _Bool isInputSizeLowerBoundOnly;
@property (readonly) unsigned long long inputSize;

+ (id)loadModelFromSpecification:(struct _MLModelSpecification *)arg1 configuration:(id)arg2 error:(id *)arg3;

- (void)dealloc;
- (id)initWithLibSVMFile:(id)arg1;
- (id)initWithSVMModel:(struct svm_model *)arg1 freeOnDealloc:(_Bool)arg2 isInputSizeLowerBoundOnly:(_Bool)arg3 inputSize:(unsigned long long)arg4;
- (struct svm_node *)allocSVMNodeVector:(unsigned long long)arg1;
- (void)fillSVMNodeVector:(struct svm_node *)arg1 values:(double *)arg2 count:(unsigned long long)arg3;
- (void)deallocSVMNodeVector:(struct svm_node *)arg1;
- (id)predict:(id)arg1;

@end
