/*
 Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

#import <Foundation/NSObject.h>

@class VCPCNNBlock, VCPCNNData, VCPCNNMetalContext;

__attribute__((visibility("hidden")))
@interface VCPCNNModel : NSObject

{
    VCPCNNBlock *_blocks[200];
    short _quantFactor;
    _Bool _useGPU;
    VCPCNNMetalContext *_context;
    VCPCNNData *_output;
}

@property (readonly) VCPCNNData *output;

- (id)init;
- (int)size;
- (int)add:(id)arg1;
- (id)initWithParameters:(short)arg1 useGPU:(_Bool)arg2;
- (id)getGPUContext;
- (int)prepareNetworkFromURL:(id)arg1 withInputSize:(id)arg2;
- (int)forward:(id)arg1;
- (int)dynamicForward:(id)arg1 paramFileUrl:(id)arg2 cancel:(CDUnknownBlockType)arg3;

@end
