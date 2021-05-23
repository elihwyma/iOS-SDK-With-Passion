/*
 Image: /System/Library/Frameworks/Metal.framework/Metal
 */

#import <Foundation/NSObject.h>

@class MTLPipelineBufferDescriptorArray, MTLTileRenderPipelineColorAttachmentDescriptorArray, NSString;

@protocol MTLFunction;

@interface MTLTileRenderPipelineDescriptor : NSObject

@property (copy, nonatomic) NSString *label;
@property (retain, nonatomic) id <MTLFunction> tileFunction;
@property (nonatomic) unsigned long long rasterSampleCount;
@property (readonly) MTLTileRenderPipelineColorAttachmentDescriptorArray *colorAttachments;
@property (nonatomic) _Bool threadgroupSizeMatchesTileSize;
@property (readonly) MTLPipelineBufferDescriptorArray *tileBuffers;
@property (nonatomic) unsigned long long maxTotalThreadsPerThreadgroup;

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone *)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)reset;

@end
