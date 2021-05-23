/*
 Image: /System/Library/Frameworks/Metal.framework/Metal
 */

#import <Metal/MTLIndirectArgumentDescriptor.h>

__attribute__((visibility("hidden")))
@interface MTLIndirectArgumentDescriptorInternal : MTLIndirectArgumentDescriptor

{
    struct MTLArgumentDescriptorPrivate _private;
}

+ (id)indirectArgumentDescriptor;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)index;
- (unsigned long long)textureType;
- (unsigned long long)access;
- (unsigned long long)dataType;
- (unsigned long long)arrayLength;
- (void)setTextureType:(unsigned long long)arg1;
- (void)setArrayLength:(unsigned long long)arg1;
- (void)setIndex:(unsigned long long)arg1;
- (void)setDataType:(unsigned long long)arg1;
- (id)formattedDescription:(unsigned long long)arg1;
- (void)setAccess:(unsigned long long)arg1;
- (unsigned long long)constantBlockAlignment;
- (void)setConstantBlockAlignment:(unsigned long long)arg1;

@end
