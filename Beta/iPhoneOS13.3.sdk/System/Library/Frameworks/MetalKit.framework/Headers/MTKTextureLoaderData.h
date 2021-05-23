/*
 Image: /System/Library/Frameworks/MetalKit.framework/MetalKit
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface MTKTextureLoaderData : NSObject

{
    NSString *_imageOrigin;
    unsigned long long _numArrayElements;
    unsigned long long _numFaces;
    unsigned long long _numMipmapLevels;
    unsigned long long _width;
    unsigned long long _height;
    unsigned long long _depth;
    unsigned long long _textureType;
    unsigned long long _pixelFormat;
}

@property (retain, nonatomic) NSString *imageOrigin;
@property (nonatomic) unsigned long long numArrayElements;
@property (nonatomic) unsigned long long numFaces;
@property (nonatomic) unsigned long long numMipmapLevels;
@property (nonatomic) unsigned long long width;
@property (nonatomic) unsigned long long height;
@property (nonatomic) unsigned long long depth;
@property (nonatomic) unsigned long long textureType;
@property (nonatomic) unsigned long long pixelFormat;

- (id)init;
- (void)dealloc;
- (id)getDataForArrayElement:(unsigned long long)arg1 face:(unsigned long long)arg2 level:(unsigned long long)arg3 depthPlane:(unsigned long long)arg4 bytesPerRow:(unsigned long long *)arg5 bytesPerImage:(unsigned long long *)arg6;

@end
