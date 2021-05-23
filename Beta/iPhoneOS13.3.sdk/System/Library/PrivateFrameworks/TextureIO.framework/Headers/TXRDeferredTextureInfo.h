/*
 Image: /System/Library/PrivateFrameworks/TextureIO.framework/TextureIO
 */

#import <NSObject.h>

@class NSMutableArray, TXRTextureInfo;

__attribute__((visibility("hidden")))
@interface TXRDeferredTextureInfo : NSObject

{
    TXRTextureInfo *_info;
    NSMutableArray *_mipmaps;
}

@property (retain, nonatomic) TXRTextureInfo *info;
@property (nonatomic, readonly) NSMutableArray *mipmaps;

- (id)initWithMipmapLevelCount:(unsigned long long)arg1 arrayLength:(unsigned long long)arg2 cubemap:(_Bool)arg3;

@end
