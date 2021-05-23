/*
 Image: /System/Library/PrivateFrameworks/TextureIO.framework/TextureIO
 */

#import <NSObject.h>

@class MISSING_TYPE, NSError;

@interface TXRTextureInfo : NSObject

{
    unsigned long long _pixelFormat;
    unsigned long long _alphaInfo;
    MISSING_TYPE *_dimensions;
    unsigned long long _mipmapLevelCount;
    unsigned long long _arrayLength;
    _Bool _cubemap;
    NSError *_error;
}

@property (nonatomic) unsigned long long alphaInfo;
@property (nonatomic) unsigned long long pixelFormat;
@property (nonatomic) MISSING_TYPE *dimensions;
@property (nonatomic) unsigned long long mipmapLevelCount;
@property (nonatomic) unsigned long long arrayLength;
@property (nonatomic) _Bool cubemap;
@property (readonly) NSError *error;

@end
