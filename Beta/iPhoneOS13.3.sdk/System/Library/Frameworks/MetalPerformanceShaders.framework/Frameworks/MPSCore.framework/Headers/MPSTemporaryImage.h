/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSCore.framework/MPSCore
 */

#import <MPSCore/MPSImage.h>

@interface MPSTemporaryImage : MPSImage

{
    unsigned long long _readCount;
}

@property (nonatomic) unsigned long long readCount;

+ (id)temporaryImageWithCommandBuffer:(id)arg1 imageDescriptor:(id)arg2;
+ (id)defaultAllocator;
+ (id)temporaryImageWithCommandBuffer:(id)arg1 textureDescriptor:(id)arg2 featureChannels:(unsigned long long)arg3;
+ (id)temporaryImageWithCommandBuffer:(id)arg1 textureDescriptor:(id)arg2;
+ (void)prefetchStorageWithCommandBuffer:(id)arg1 imageDescriptorList:(id)arg2;

- (void)dealloc;
- (id)debugDescription;
- (void)synchronizeOnCommandBuffer:(id)arg1;
- (unsigned long long)setPurgeableState:(unsigned long long)arg1;
- (id)initWithParentImage:(id)arg1 sliceRange:(struct _NSRange)arg2 featureChannels:(unsigned long long)arg3;
- (void)readBytes:(void *)arg1 dataLayout:(unsigned long long)arg2 bytesPerRow:(unsigned long long)arg3 bytesPerImage:(unsigned long long)arg4 region:(CDStruct_4c83c94d)arg5 featureChannelInfo:(CDStruct_328d5c87)arg6 imageIndex:(unsigned long long)arg7;
- (void)writeBytes:(const void *)arg1 dataLayout:(unsigned long long)arg2 bytesPerRow:(unsigned long long)arg3 bytesPerImage:(unsigned long long)arg4 region:(CDStruct_4c83c94d)arg5 featureChannelInfo:(CDStruct_328d5c87)arg6 imageIndex:(unsigned long long)arg7;

@end
