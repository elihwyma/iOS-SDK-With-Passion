/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <Foundation/NSObject.h>

@interface NURenderPipelineFunction : NSObject

+ (id)functionWithEvaluationBlock:(CDUnknownBlockType)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)evaluate:(id)arg1 error:(out id *)arg2;
- (id)nu_evaluateWithPipelineState:(id)arg1 error:(out id *)arg2;

@end
