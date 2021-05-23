/*
 Image: /System/Library/Frameworks/Metal.framework/Metal
 */

#import <Foundation/NSObject.h>

@interface MTLRenderPipelineColorAttachmentDescriptor : NSObject

@property (nonatomic) unsigned long long pixelFormat;
@property (nonatomic, getter=isBlendingEnabled) _Bool blendingEnabled;
@property (nonatomic) unsigned long long sourceRGBBlendFactor;
@property (nonatomic) unsigned long long destinationRGBBlendFactor;
@property (nonatomic) unsigned long long rgbBlendOperation;
@property (nonatomic) unsigned long long sourceAlphaBlendFactor;
@property (nonatomic) unsigned long long destinationAlphaBlendFactor;
@property (nonatomic) unsigned long long alphaBlendOperation;
@property (nonatomic) unsigned long long writeMask;

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone *)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;

@end
