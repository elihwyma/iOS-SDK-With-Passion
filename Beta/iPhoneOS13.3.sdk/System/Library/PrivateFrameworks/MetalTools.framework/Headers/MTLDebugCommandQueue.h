/*
 Image: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
 */

#import <MetalTools/MTLToolsCommandQueue.h>

@interface MTLDebugCommandQueue : MTLToolsCommandQueue

- (id)commandBuffer;
- (id)commandBufferWithUnretainedReferences;
- (void)insertDebugCaptureBoundary;

@end
