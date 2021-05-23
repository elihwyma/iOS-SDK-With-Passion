/*
 Image: /System/Library/Frameworks/CoreML.framework/CoreML
 */

#import <CoreML/MLClassifier.h>

@class MLSVMEngine;

@interface MLSupportVectorClassifier : MLClassifier

{
    MLSVMEngine *_engine;
}

@property (retain) MLSVMEngine *engine;

+ (id)featureValueWithObject:(id)arg1;

- (id)classify:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)initWithEngine:(id)arg1 interface:(id)arg2 metadata:(id)arg3 configuration:(id)arg4 error:(id *)arg5;

@end
