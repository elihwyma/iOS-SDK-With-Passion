/*
 Image: /System/Library/PrivateFrameworks/HDRProcessing.framework/HDRProcessing
 */

#import <Foundation/NSObject.h>

@protocol MTLTexture;

@interface ResamplerTextures : NSObject

{
    id <MTLTexture> _inputTexture;
    id <MTLTexture> _inputTexureUV;
    id <MTLTexture> _tempTextureY;
    id <MTLTexture> _tempTextureUV;
    id <MTLTexture> _outputTextureY;
    id <MTLTexture> _outputTextureUV;
}

@property (retain) id <MTLTexture> inputTexture;
@property (retain) id <MTLTexture> inputTexureUV;
@property (retain) id <MTLTexture> tempTextureY;
@property (retain) id <MTLTexture> tempTextureUV;
@property (retain) id <MTLTexture> outputTextureY;
@property (retain) id <MTLTexture> outputTextureUV;

@end
