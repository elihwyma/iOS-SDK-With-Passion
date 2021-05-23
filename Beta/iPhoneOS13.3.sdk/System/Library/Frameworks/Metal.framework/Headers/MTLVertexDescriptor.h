/*
 Image: /System/Library/Frameworks/Metal.framework/Metal
 */

#import <Foundation/NSObject.h>

@class MTLVertexAttributeDescriptorArray, MTLVertexBufferLayoutDescriptorArray;

@interface MTLVertexDescriptor : NSObject

@property (readonly) MTLVertexBufferLayoutDescriptorArray *layouts;
@property (readonly) MTLVertexAttributeDescriptorArray *attributes;

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)vertexDescriptor;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)reset;
- (id)formattedDescription:(unsigned long long)arg1;

@end
