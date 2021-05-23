/*
 Image: /System/Library/PrivateFrameworks/ClockKitUI.framework/ClockKitUI
 */

#import <ClockKitUI/CLKUIQuadView.h>

@class CAMetalLayer, MTLRenderPassDescriptor, NSArray;

@protocol MTLCommandQueue, MTLComputePipelineState;

@interface CLKUIMetalQuadView : CLKUIQuadView

{
    id <MTLCommandQueue> _commandQueue;
    MTLRenderPassDescriptor *_renderPassDescriptor;
    _Bool _drawableSizeNeedsUpdate;
    struct CLKUIQuadSize _quadSize;
    CAMetalLayer *_metalLayer;
    NSArray *_quads;
    id <MTLComputePipelineState> _aplPipelineState;
    unsigned long long _colorPixelFormat;
}

@property (nonatomic, readonly) unsigned long long colorPixelFormat;

- (void)setOpaque:(_Bool)arg1;
- (void)layoutSubviews;
- (void)discardContents;
- (id)metalLayer;
- (id)initWithFrame:(struct CGRect)arg1 options:(unsigned long long)arg2 colorSpace:(long long)arg3;
- (_Bool)_displayAndCheckForDrawable:(_Bool)arg1 WithCompletion:(CDUnknownBlockType)arg2;
- (void)_handleQuadArrayChange:(id)arg1;
- (id)snapshotInRect:(struct CGRect)arg1 scale:(double)arg2 time:(double)arg3;
- (void)setSingleBufferMode:(_Bool)arg1;
- (float)computeAPL;
- (id)_newRenderPassDescriptor;
- (id)_snapshotTextureInRect:(struct CGRect)arg1 scale:(double)arg2 time:(double)arg3 withAdditionalPasses:(CDUnknownBlockType)arg4;
- (id)_textureToImage:(id)arg1 scale:(double)arg2;
- (void)_updateDrawableSizeIfNecessary;
- (float)computeAPLAndSnapshot:(id *)arg1;
- (id)snapshotTextureInRect:(struct CGRect)arg1 scale:(double)arg2 time:(double)arg3;

@end
