/*
 Image: /System/Library/Frameworks/Metal.framework/Metal
 */

#import <Foundation/NSObject.h>

@class MTLPipelineBufferDescriptorArray, MTLStageInputOutputDescriptor, NSString;

@protocol MTLFunction;

@interface MTLComputePipelineDescriptor : NSObject

@property (nonatomic) _Bool forceResourceIndex;
@property (nonatomic) unsigned long long resourceIndex;
@property (copy, nonatomic) NSString *label;
@property (retain, nonatomic) id <MTLFunction> computeFunction;
@property (nonatomic) _Bool threadGroupSizeIsMultipleOfThreadExecutionWidth;
@property (nonatomic) unsigned long long maxTotalThreadsPerThreadgroup;
@property (copy, nonatomic) MTLStageInputOutputDescriptor *stageInputDescriptor;
@property (readonly) MTLPipelineBufferDescriptorArray *buffers;
@property (nonatomic) _Bool supportIndirectCommandBuffers;

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone *)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)reset;

@end
