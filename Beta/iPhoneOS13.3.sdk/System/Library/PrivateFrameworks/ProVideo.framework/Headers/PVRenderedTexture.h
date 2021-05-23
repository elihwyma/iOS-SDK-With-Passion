/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

#import <Foundation/NSObject.h>

@interface PVRenderedTexture : NSObject

{
    HGRef_34ac394f _glTexture;
}

@property (nonatomic, readonly) unsigned int textureName;
@property (nonatomic, readonly) unsigned int textureTarget;
@property (nonatomic, readonly) struct CGRect textureRect;
@property (nonatomic, readonly) struct CGRect bitmapRect;

- (id).cxx_construct;
- (struct CGSize)textureSize;
- (id)initWithHGGLTexture:(HGRef_34ac394f)arg1;

@end
