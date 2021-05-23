/*
 Image: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
 */

#import <MetalTools/MTLToolsPipelineLibrary.h>

@class NSString;

@interface MTLDebugPipelineLibrary : MTLToolsPipelineLibrary

{
    NSString *_filePath;
}

@property (copy, nonatomic) NSString *filePath;

- (void)dealloc;
- (id)newRenderPipelineStateWithName:(id)arg1 options:(unsigned long long)arg2 reflection:(id *)arg3 error:(id *)arg4;
- (id)newComputePipelineStateWithName:(id)arg1 options:(unsigned long long)arg2 reflection:(id *)arg3 error:(id *)arg4;
- (id)initWithLibrary:(id)arg1 parent:(id)arg2 filePath:(id)arg3;

@end
