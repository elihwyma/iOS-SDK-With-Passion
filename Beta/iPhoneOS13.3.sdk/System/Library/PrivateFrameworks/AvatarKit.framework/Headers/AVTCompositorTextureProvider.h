/*
 Image: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
 */

#import <Foundation/NSObject.h>

@class AVTCompositorPipeline, AVTCompositor_GPU, AVTMemoji, NSMutableSet, NSString;

@interface AVTCompositorTextureProvider : NSObject

{
    AVTMemoji *_memoji;
    AVTCompositor_GPU *_compositor;
    AVTCompositorPipeline *_pipeline;
    NSString *_propertyName;
    _Bool _skinIsDirty;
    long long _componentDirtyMask;
    NSMutableSet *_helperTokens;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)newTextureForDevice:(id)arg1;
- (void)renderToTexture:(id)arg1 computeCommandHandler:(CDUnknownBlockType)arg2 blitCommandHandler:(CDUnknownBlockType)arg3 helper:(id)arg4;
- (id)initWithCompositor:(id)arg1 memoji:(id)arg2 propertyName:(id)arg3;
- (void)skinColorDidChange;
- (void)componentDidChangeForType:(long long)arg1;

@end
