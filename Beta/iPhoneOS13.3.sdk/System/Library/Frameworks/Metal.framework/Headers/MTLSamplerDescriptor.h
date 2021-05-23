/*
 Image: /System/Library/Frameworks/Metal.framework/Metal
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface MTLSamplerDescriptor : NSObject

{
    _Bool _lodAverage;
}

@property (nonatomic) _Bool forceResourceIndex;
@property (nonatomic) unsigned long long resourceIndex;
@property (nonatomic) unsigned long long minFilter;
@property (nonatomic) unsigned long long magFilter;
@property (nonatomic) unsigned long long mipFilter;
@property (nonatomic) unsigned long long maxAnisotropy;
@property (nonatomic) unsigned long long sAddressMode;
@property (nonatomic) unsigned long long tAddressMode;
@property (nonatomic) unsigned long long rAddressMode;
@property (nonatomic) unsigned long long borderColor;
@property (nonatomic) _Bool normalizedCoordinates;
@property (nonatomic) float lodMinClamp;
@property (nonatomic) float lodMaxClamp;
@property (nonatomic) _Bool lodAverage;
@property (nonatomic) unsigned long long compareFunction;
@property (nonatomic) _Bool supportArgumentBuffers;
@property (copy, nonatomic) NSString *label;

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone *)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;

@end
