/*
 Image: /System/Library/Frameworks/Metal.framework/Metal
 */

#import <Foundation/NSObject.h>

@class MTLAttributeDescriptorArray, MTLBufferLayoutDescriptorArray;

@interface MTLStageInputOutputDescriptor : NSObject

@property (readonly) MTLBufferLayoutDescriptorArray *layouts;
@property (readonly) MTLAttributeDescriptorArray *attributes;
@property (nonatomic) unsigned long long indexType;
@property (nonatomic) unsigned long long indexBufferIndex;

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)stageInputOutputDescriptor;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)reset;
- (id)formattedDescription:(unsigned long long)arg1;

@end
