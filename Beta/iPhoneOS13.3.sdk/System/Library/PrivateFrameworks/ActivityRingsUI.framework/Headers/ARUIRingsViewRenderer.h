/*
 Image: /System/Library/PrivateFrameworks/ActivityRingsUI.framework/ActivityRingsUI
 */

#import <Foundation/NSObject.h>

@class ARUICelebrationsRenderer, ARUIRingsRenderPipelineFactory, ARUIRingsRenderer, ARUISpritesRenderPipelineFactory, ARUISpritesRenderer, NSString;

@protocol MTLCommandQueue, MTLDeviceSPI;

@interface ARUIRingsViewRenderer : NSObject

{
    id <MTLDeviceSPI> _device;
    id <MTLCommandQueue> _commandQueue;
    ARUIRingsRenderPipelineFactory *_ringsRenderPipelineFactory;
    ARUIRingsRenderer *_ringsRenderer;
    ARUISpritesRenderPipelineFactory *_spritesRenderPipelineFactory;
    ARUISpritesRenderer *_spritesRenderer;
    ARUICelebrationsRenderer *_celebrationsRenderer;
    double _screenScale;
    _Bool _presentsWithTransaction;
    unsigned long long _maximumRingCount;
}

@property (nonatomic) _Bool presentsWithTransaction;
@property (nonatomic, readonly) unsigned long long maximumRingCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (unsigned long long)maximumRingCountForControllers:(id)arg1;
+ (id)rendererForRingGroupController:(id)arg1;
+ (id)rendererForRingGroupControllers:(id)arg1;

- (void)dealloc;
- (id)initWithMaximumRingCount:(unsigned long long)arg1;
- (id)initWithMaximumRingCount:(unsigned long long)arg1 commandQueue:(id)arg2;
- (id)renderPipelineFactoryWithDeviceSPI:(id)arg1 librarySPI:(id)arg2;
- (id)ringsRenderPipelineConfigurationForRings:(id)arg1;
- (id)ringsRenderPipelineConfigurationForRingGroupController:(id)arg1;
- (id)spriteRenderPipelineConfigurationForRingGroupController:(id)arg1;
- (void)_updateSpriteUniformsForRingGroupController:(id)arg1 andRingIndex:(unsigned long long)arg2;
- (void)_updateSpriteAttributesForRingGroupController:(id)arg1 andRingIndex:(unsigned long long)arg2;
- (void)renderRingGroupControllers:(id)arg1 withSize:(id)arg2 intoTexture:(id)arg3 withDrawable:(_Bool)arg4 waitUntilCompleted:(CDUnknownBlockType)arg5 completionHandler: /* Error: Ran out of types for this method. */;
- (id)ringTextureWithCommandBuffer:(id)arg1 rings:(id)arg2 andSize: /* Error: Ran out of types for this method. */;
- (id)renderPipelineFactoryWithDevice:(id)arg1 library:(id)arg2;
- (id)snapshotRingGroupControllers:(id)arg1 withSize: /* Error: Ran out of types for this method. */;
- (void)prewarmRendererForCelebrationOfType:(unsigned long long)arg1;

@end
