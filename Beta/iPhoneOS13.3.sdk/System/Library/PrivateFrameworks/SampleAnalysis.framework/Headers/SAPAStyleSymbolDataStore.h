/*
 Image: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
 */

#import <Foundation/NSObject.h>

@class SAKernelCache, SASharedCache;

__attribute__((visibility("hidden")))
@interface SAPAStyleSymbolDataStore : NSObject

{
    SASharedCache *_sharedCache64Bit;
    SASharedCache *_sharedCache32Bit;
    SAKernelCache *_kernelCache;
}

@property (retain) SASharedCache *sharedCache64Bit;
@property (retain) SASharedCache *sharedCache32Bit;
@property (retain) SAKernelCache *kernelCache;

+ (id)classDictionaryKey;
+ (id)newInstanceWithoutReferencesFromSerializedBuffer:(const CDStruct_a16f0967 *)arg1 bufferLength:(unsigned long long)arg2;

- (unsigned long long)sizeInBytesForSerializedVersion;
- (void)addSelfToSerializationDictionary:(id)arg1;
- (_Bool)addSelfToBuffer:(void *)arg1 bufferLength:(unsigned long long)arg2 withCompletedSerializationDictionary:(struct NSMutableDictionary *)arg3;
- (void)populateReferencesUsingBuffer:(const CDStruct_a16f0967 *)arg1 bufferLength:(unsigned long long)arg2 andDeserializationDictionary:(id)arg3 andDataBufferDictionary:(id)arg4;

@end
