/*
 Image: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
 */

#import <Foundation/NSObject.h>

@class NSArray;

@protocol MTLComputePipelineState;

@interface AVTCompositorPipeline : NSObject

{
    _Bool _isAffectedBySkin;
    long long _affectingComponentsMask;
    NSArray *_bindings;
    id <MTLComputePipelineState> _pipelineState;
}

- (id)initWithFunction:(id)arg1;
- (void)compositeTexture:(id)arg1 forMemoji:(id)arg2 considerSkin:(_Bool)arg3 componentsToConsider:(long long)arg4 computeCommandHandler:(CDUnknownBlockType)arg5 blitCommandHandler:(CDUnknownBlockType)arg6 helper:(id)arg7 helperTokens:(id)arg8;

@end
