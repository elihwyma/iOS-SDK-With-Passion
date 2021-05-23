/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSCore.framework/MPSCore
 */

#import <MPSCore/MPSImage.h>

@protocol MTLTexture;

@interface MPSVirtualImage : MPSImage

@property (nonatomic, readonly) id <MTLTexture> texture;

- (void)synchronizeOnCommandBuffer:(id)arg1;
- (id)initWithDevice:(id)arg1 imageDescriptor:(id)arg2;
- (void)writeBytes:(const void *)arg1 dataLayout:(unsigned long long)arg2 imageIndex:(unsigned long long)arg3;
- (void)readBytes:(void *)arg1 dataLayout:(unsigned long long)arg2 imageIndex:(unsigned long long)arg3;
- (unsigned long long)setPurgeableState:(unsigned long long)arg1;
- (void)readBytes:(void *)arg1 dataLayout:(unsigned long long)arg2 bytesPerRow:(unsigned long long)arg3 bytesPerImage:(unsigned long long)arg4 region:(CDStruct_4c83c94d)arg5 featureChannelInfo:(CDStruct_328d5c87)arg6 imageIndex:(unsigned long long)arg7;
- (void)writeBytes:(const void *)arg1 dataLayout:(unsigned long long)arg2 bytesPerRow:(unsigned long long)arg3 bytesPerImage:(unsigned long long)arg4 region:(CDStruct_4c83c94d)arg5 featureChannelInfo:(CDStruct_328d5c87)arg6 imageIndex:(unsigned long long)arg7;
- (void)readBytes:(void *)arg1 dataLayout:(unsigned long long)arg2 bytesPerRow:(unsigned long long)arg3 region:(CDStruct_4c83c94d)arg4 featureChannelInfo:(CDStruct_328d5c87)arg5 imageIndex:(unsigned long long)arg6;
- (id)initWithTexture:(id)arg1 featureChannels:(unsigned long long)arg2;
- (void)writeBytes:(const void *)arg1 dataLayout:(unsigned long long)arg2 bytesPerRow:(unsigned long long)arg3 region:(CDStruct_4c83c94d)arg4 featureChannelInfo:(CDStruct_328d5c87)arg5 imageIndex:(unsigned long long)arg6;

@end
