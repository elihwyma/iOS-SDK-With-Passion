/*
 Image: /System/Library/Frameworks/Metal.framework/Metal
 */

#import <Foundation/NSObject.h>

@interface MTLAttributeDescriptor : NSObject

@property (nonatomic) unsigned long long format;
@property (nonatomic) unsigned long long offset;
@property (nonatomic) unsigned long long bufferIndex;

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone *)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
