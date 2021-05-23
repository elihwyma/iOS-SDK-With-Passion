/*
 Image: /System/Library/Frameworks/Metal.framework/Metal
 */

#import <Foundation/NSObject.h>

@interface MTLIndirectCommandBufferDescriptor : NSObject

@property (nonatomic) unsigned long long commandTypes;
@property (nonatomic) _Bool inheritPipelineState;
@property (nonatomic) _Bool inheritBuffers;
@property (nonatomic) unsigned long long maxVertexBufferBindCount;
@property (nonatomic) unsigned long long maxFragmentBufferBindCount;
@property (nonatomic) unsigned long long maxKernelBufferBindCount;

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone *)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;

@end
