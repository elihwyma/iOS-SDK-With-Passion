/*
 Image: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
 */

#import <MetalTools/MTLToolsTextureLayout.h>

@class MTLDebugDevice, MTLTextureDescriptor;

@interface MTLDebugTextureLayout : MTLToolsTextureLayout

{
    MTLDebugDevice *_debugDevice;
    MTLTextureDescriptor *_descriptor;
}

@property (nonatomic, readonly) MTLDebugDevice *debugDevice;
@property (copy, nonatomic, readonly) MTLTextureDescriptor *descriptor;

- (void)dealloc;
- (id)initWithBaseTextureLayout:(id)arg1 device:(id)arg2 descriptor:(id)arg3;

@end
