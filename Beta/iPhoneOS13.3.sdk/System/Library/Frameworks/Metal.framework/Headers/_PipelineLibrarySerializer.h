/*
 Image: /System/Library/Frameworks/Metal.framework/Metal
 */

#import <Foundation/NSObject.h>

@interface _PipelineLibrarySerializer : NSObject

{
    void *_binarySerializer;
}

- (id)init;
- (void)dealloc;
- (unsigned long long)totalSize;
- (unsigned long long)addLibrary:(void *)arg1;
- (id)addSpecializedFunction:(id)arg1 descriptor:(const void *)arg2;
- (id)addRenderPipelineDescriptor:(const void *)arg1;
- (id)addComputePipelineDescriptor:(const void *)arg1;
- (unsigned long long)writeToMemory:(char *)arg1 size:(unsigned long long)arg2;

@end
