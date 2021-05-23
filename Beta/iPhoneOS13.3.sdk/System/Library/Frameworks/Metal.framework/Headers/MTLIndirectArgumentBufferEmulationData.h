/*
 Image: /System/Library/Frameworks/Metal.framework/Metal
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_data;

__attribute__((visibility("hidden")))
@interface MTLIndirectArgumentBufferEmulationData : NSObject

{
    NSObject<OS_dispatch_data> *_dataMap;
    char *_bufferIndices;
    char *_textureIndices;
    char *_samplerIndices;
    const void *_dataPtr;
    unsigned long long _dataSize;
}

- (void)dealloc;
- (id)initWithData:(id)arg1;
- (void)bindIndirectArgumentsWithFunctions:(CDStruct_14783bb7)arg1;

@end
