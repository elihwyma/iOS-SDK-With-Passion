/*
 Image: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
 */

#import <MetalTools/MTLToolsCommandEncoder.h>

@class MTLToolsPointerArray, NSString;

@protocol MTLDevice;

@interface MTLToolsParallelRenderCommandEncoder : MTLToolsCommandEncoder

{
    MTLToolsPointerArray *_renderCommandEncoders;
}

@property (nonatomic, readonly) MTLToolsPointerArray *renderCommandEncoders;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) id <MTLDevice> device;
@property (copy) NSString *label;

- (void)dealloc;
- (void)endEncoding;
- (void)setColorStoreAction:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;
- (void)setDepthStoreAction:(unsigned long long)arg1;
- (void)setStencilStoreAction:(unsigned long long)arg1;
- (void)setColorStoreActionOptions:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;
- (void)setDepthStoreActionOptions:(unsigned long long)arg1;
- (void)setStencilStoreActionOptions:(unsigned long long)arg1;
- (id)initWithBaseObject:(id)arg1 parent:(id)arg2;
- (id)renderCommandEncoder;
- (_Bool)isMemorylessRender;
- (void)acceptVisitor:(id)arg1;

@end
