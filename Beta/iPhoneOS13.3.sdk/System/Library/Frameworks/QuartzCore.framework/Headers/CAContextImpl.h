/*
 Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import <QuartzCore/CAContext.h>

__attribute__((visibility("hidden")))
@interface CAContextImpl : CAContext

{
    struct Context *_impl;
}

- (void)dealloc;
- (void)invalidate;
- (id)options;
- (float)level;
- (struct CGColorSpace *)colorSpace;
- (void)setColorSpace:(struct CGColorSpace *)arg1;
- (_Bool)isSecure;
- (id)layer;
- (_Bool)valid;
- (void)orderAbove:(unsigned int)arg1;
- (void)setCommitPriority:(unsigned int)arg1;
- (void)setLevel:(float)arg1;
- (void)setLayer:(id)arg1;
- (void)setFencePort:(unsigned int)arg1 commitHandler:(CDUnknownBlockType)arg2;
- (void)setFencePort:(unsigned int)arg1;
- (unsigned int)createFencePort;
- (unsigned int)contextId;
- (void)setSecure:(_Bool)arg1;
- (id)annotation;
- (unsigned int)createSlot;
- (void)setObject:(id)arg1 forSlot:(unsigned int)arg2;
- (void)deleteSlot:(unsigned int)arg1;
- (unsigned int)createImageSlot:(struct CGSize)arg1 hasAlpha:(_Bool)arg2;
- (unsigned int)displayId;
- (id)contentsFormat;
- (void)setContentsFormat:(id)arg1;
- (struct Context *)renderContext;
- (id)initWithOptions:(id)arg1 localContext:(_Bool)arg2;
- (id)initRemoteWithOptions:(id)arg1;
- (unsigned int)commitPriority;
- (_Bool)colorMatchUntaggedContent;
- (void)setColorMatchUntaggedContent:(_Bool)arg1;
- (void)orderBelow:(unsigned int)arg1;
- (void)setDesiredDynamicRange:(float)arg1;
- (float)desiredDynamicRange;
- (void)setFence:(unsigned int)arg1 count:(unsigned int)arg2;
- (void)invalidateFences;
- (unsigned int)createImageSlot:(struct CGSize)arg1 hasAlpha:(_Bool)arg2 extendedColors:(_Bool)arg3;
- (unsigned int)hitTestContext:(struct CGPoint)arg1;
- (void)setAnnotation:(id)arg1;
- (struct Context *)retainRenderContext;

@end
