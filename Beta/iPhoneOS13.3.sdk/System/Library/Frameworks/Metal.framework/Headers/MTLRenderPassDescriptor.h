/*
 Image: /System/Library/Frameworks/Metal.framework/Metal
 */

#import <Foundation/NSObject.h>

@class MTLRenderPassColorAttachmentDescriptorArray, MTLRenderPassDepthAttachmentDescriptor, MTLRenderPassStencilAttachmentDescriptor;

@protocol MTLBuffer, MTLRasterizationRateMap;

@interface MTLRenderPassDescriptor : NSObject

{
    unsigned long long _imageblockSampleLength;
    unsigned long long _threadgroupMemoryLength;
    unsigned long long _tileWidth;
    unsigned long long _tileHeight;
}

@property (readonly) MTLRenderPassColorAttachmentDescriptorArray *colorAttachments;
@property (copy, nonatomic) MTLRenderPassDepthAttachmentDescriptor *depthAttachment;
@property (copy, nonatomic) MTLRenderPassStencilAttachmentDescriptor *stencilAttachment;
@property (retain, nonatomic) id <MTLBuffer> visibilityResultBuffer;
@property (nonatomic) unsigned long long renderTargetArrayLength;
@property (nonatomic) unsigned long long imageblockSampleLength;
@property (nonatomic) unsigned long long threadgroupMemoryLength;
@property (nonatomic) unsigned long long tileWidth;
@property (nonatomic) unsigned long long tileHeight;
@property (nonatomic) unsigned long long defaultRasterSampleCount;
@property (nonatomic) unsigned long long renderTargetWidth;
@property (nonatomic) unsigned long long renderTargetHeight;
@property (retain, nonatomic) id <MTLRasterizationRateMap> rasterizationRateMap;

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)renderPassDescriptor;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)setSamplePositions:(const CDStruct_6e3f967a *)arg1 count:(unsigned long long)arg2;
- (unsigned long long)getSamplePositions:(CDStruct_6e3f967a *)arg1 count:(unsigned long long)arg2;

@end
