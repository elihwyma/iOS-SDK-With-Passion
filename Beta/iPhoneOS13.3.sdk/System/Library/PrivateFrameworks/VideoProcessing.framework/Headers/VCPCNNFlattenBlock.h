/*
 Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

#import <VideoProcessing/VCPCNNBlock.h>

__attribute__((visibility("hidden")))
@interface VCPCNNFlattenBlock : VCPCNNBlock

{
    int _chunk;
}

- (id)initWithParameters:(int)arg1;
- (int)forward;
- (int)constructBlock:(id)arg1 context:(id)arg2;

@end
