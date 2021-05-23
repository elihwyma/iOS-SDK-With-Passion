/*
 Image: /System/Library/Frameworks/ModelIO.framework/ModelIO
 */

#import <Foundation/NSObject.h>

@class MDLTexture, MDLTextureFilter, MDLTransform;

@interface MDLTextureSampler : NSObject

{
    MDLTexture *texture;
    MDLTextureFilter *hardwareFilter;
    MDLTransform *transform;
    unsigned long long mappingChannel;
    long long textureComponents;
}

@property (nonatomic) unsigned long long mappingChannel;
@property (nonatomic) long long textureComponents;
@property (retain, nonatomic) MDLTexture *texture;
@property (retain, nonatomic) MDLTextureFilter *hardwareFilter;
@property (retain, nonatomic) MDLTransform *transform;

- (id)init;

@end
