/*
 Image: /System/Library/Frameworks/Metal.framework/Metal
 */

#import <Foundation/NSObject.h>

@interface MTLBufferLayoutDescriptor : NSObject

@property (nonatomic) unsigned long long stride;
@property (nonatomic) unsigned long long stepFunction;
@property (nonatomic) unsigned long long stepRate;

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone *)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
