/*
 Image: /System/Library/Frameworks/Metal.framework/Metal
 */

#import <Metal/MTLAttribute.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface MTLAttributeInternal : MTLAttribute

{
    unsigned char _flags;
    NSString *_name;
    unsigned long long _attributeIndex;
    unsigned long long _attributeType;
}

- (void)dealloc;
- (id)description;
- (id)name;
- (_Bool)isActive;
- (unsigned long long)attributeType;
- (void)setAttributeType:(unsigned long long)arg1;
- (id)formattedDescription:(unsigned long long)arg1;
- (unsigned long long)attributeIndex;
- (id)initWithName:(id)arg1 attributeIndex:(unsigned long long)arg2 attributeType:(unsigned long long)arg3 flags:(struct MTLAttributeFlags)arg4;
- (_Bool)isPatchData;
- (_Bool)isPatchControlPointData;

@end
