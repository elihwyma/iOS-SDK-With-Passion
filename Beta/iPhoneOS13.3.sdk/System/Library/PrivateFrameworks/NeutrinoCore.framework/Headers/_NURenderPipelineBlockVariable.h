/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <NeutrinoCore/NURenderPipelineFunction.h>

@interface _NURenderPipelineBlockVariable : NURenderPipelineFunction

{
    CDUnknownBlockType _evaluationBlock;
}

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)evaluate:(id)arg1 error:(out id *)arg2;
- (id)initWithEvaluationBlock:(CDUnknownBlockType)arg1;
- (_Bool)isEqualToBlockVariable:(id)arg1;

@end
