/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ClockKitUI.framework/ClockKitUI
 */

@interface CLKUIMetalQuadView : CLKUIQuadView {
    <MTLComputePipelineState> * _aplPipelineState;
    unsigned long long  _colorPixelFormat;
    <MTLCommandQueue> * _commandQueue;
    bool  _drawableSizeNeedsUpdate;
    CAMetalLayer * _metalLayer;
    struct CLKUIQuadSize { 
        int width; 
        int height; 
    }  _quadSize;
    NSArray * _quads;
    MTLRenderPassDescriptor * _renderPassDescriptor;
}

@property (nonatomic, readonly) unsigned long long colorPixelFormat;

- (void).cxx_destruct;
- (bool)_displayAndCheckForDrawable:(bool)arg1 WithCompletion:(id /* block */)arg2;
- (void)_handleQuadArrayChange:(id)arg1;
- (id)_newRenderPassDescriptor;
- (id)_snapshotTextureInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 scale:(double)arg2 time:(double)arg3 withAdditionalPasses:(id /* block */)arg4;
- (id)_textureToImage:(id)arg1 scale:(double)arg2;
- (void)_updateDrawableSizeIfNecessary;
- (unsigned long long)colorPixelFormat;
- (float)computeAPL;
- (float)computeAPLAndSnapshot:(id*)arg1;
- (void)discardContents;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 options:(unsigned long long)arg2 colorSpace:(long long)arg3;
- (void)layoutSubviews;
- (id)metalLayer;
- (void)setOpaque:(bool)arg1;
- (void)setSingleBufferMode:(bool)arg1;
- (id)snapshotInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 scale:(double)arg2 time:(double)arg3;
- (id)snapshotTextureInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 scale:(double)arg2 time:(double)arg3;

@end