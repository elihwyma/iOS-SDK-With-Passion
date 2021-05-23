/*
 Image: /System/Library/Frameworks/Metal.framework/Metal
 */

#import <Metal/_MTLObjectWithLabel.h>

@class NSArray, NSString;

@protocol MTLDevice, MTLPipelineCache;

__attribute__((visibility("hidden")))
@interface _MTLPipelineLibrary : _MTLObjectWithLabel

{
    struct PipelineLibraryData *_pipelineLibraryData;
    id <MTLDevice> _device;
    NSArray *_pipelineNames;
    _Bool _disableRunTimeCompilation;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy) NSString *label;
@property (readonly) id <MTLDevice> device;
@property (readonly) NSArray *pipelineNames;
@property _Bool disableRunTimeCompilation;
@property (nonatomic, readonly) id <MTLPipelineCache> pipelineCache;
@property (nonatomic, readonly) id <MTLPipelineCache> functionCache;

- (void)dealloc;
- (id)newRenderPipelineStateWithName:(id)arg1 options:(unsigned long long)arg2 reflection:(id *)arg3 error:(id *)arg4;
- (id)newComputePipelineStateWithName:(id)arg1 options:(unsigned long long)arg2 reflection:(id *)arg3 error:(id *)arg4;
- (id)newComputePipelineDescriptorWithName:(id)arg1 error:(id *)arg2;
- (id)newRenderPipelineDescriptorWithName:(id)arg1 error:(id *)arg2;
- (id)initWithDevice:(id)arg1 pipelineLibraryData:(struct PipelineLibraryData *)arg2;

@end
