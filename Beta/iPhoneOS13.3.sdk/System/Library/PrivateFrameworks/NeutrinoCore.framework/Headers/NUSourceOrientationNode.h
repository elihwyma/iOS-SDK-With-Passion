/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <NeutrinoCore/NUOrientationNode.h>

@interface NUSourceOrientationNode : NUOrientationNode

{
    _Bool _skipOrientation;
}

@property (nonatomic, readonly) _Bool skipOrientation;

+ (long long)originalOrientationToApplyToSource:(id)arg1 skipOrientation:(_Bool)arg2 error:(out id *)arg3;

- (id)initWithInput:(id)arg1 source:(id)arg2 settings:(id)arg3 orientation:(long long)arg4;
- (id)initWithOrientation:(long long)arg1 input:(id)arg2;
- (id)nodeByReplayingAgainstCache:(id)arg1 pipelineState:(id)arg2 error:(out id *)arg3;

@end
