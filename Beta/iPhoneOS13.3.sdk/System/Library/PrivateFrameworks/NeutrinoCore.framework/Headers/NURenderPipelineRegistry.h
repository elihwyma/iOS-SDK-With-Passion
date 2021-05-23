/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@protocol OS_dispatch_queue;

@interface NURenderPipelineRegistry : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_registry;
}

+ (id)sharedRegistry;

- (id)init;
- (id)description;
- (void)_registerRenderPipeline:(id)arg1 forIdentifier:(id)arg2;
- (void)registerRenderPipeline:(id)arg1 forIdentifier:(id)arg2;
- (id)_renderPipelineForIdentifier:(id)arg1;
- (id)renderPipelineForIdentifier:(id)arg1;

@end
