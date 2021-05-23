/*
 Image: /System/Library/PrivateFrameworks/TextureIO.framework/TextureIO
 */

#import <NSObject.h>

#import <TextureIO/Swift-Protocol.h>

@class MISSING_TYPE, NSArray, NSMutableArray;

@protocol TXRBufferAllocator;

@interface TXRTexture : NSObject <Swift>

{
    id <TXRBufferAllocator> _bufferAllocator;
    NSMutableArray *_mipmapLevels;
    MISSING_TYPE *_dimensions;
    _Bool _cubemap;
    unsigned long long _pixelFormat;
    unsigned long long _alphaInfo;
}

@property (nonatomic, readonly) MISSING_TYPE *dimensions;
@property (nonatomic, readonly) _Bool cubemap;
@property (nonatomic, readonly) unsigned long long pixelFormat;
@property (nonatomic, readonly) unsigned long long alphaInfo;
@property (nonatomic, readonly) NSArray *mipmapLevels;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDataSourceProvider:(id)arg1;
- (void)reformat:(unsigned long long)arg1 gammaDegamma:(_Bool)arg2 bufferAllocator:(id)arg3 error:(id *)arg4;
- (_Bool)exportToURL:(id)arg1 error:(id *)arg2;
- (id)initWithContentsOfURL:(id)arg1 bufferAllocator:(id)arg2 options:(id)arg3 error:(id *)arg4;
- (id)initWithDimensions:(unsigned long long)arg1 pixelFormat:(unsigned long long)arg2 alphaInfo:(unsigned long long)arg3 mipmapLevelCount:(unsigned long long)arg4 arrayLength:(_Bool)arg5 cubemap:(id)arg6 bufferAllocator: /* Error: Ran out of types for this method. */;
- (id)initWithData:(id)arg1 bufferAllocator:(id)arg2 options:(id)arg3 error:(id *)arg4;
- (id)exportToAssetCatalogWithName:(id)arg1 location:(id)arg2 error:(id *)arg3;
- (void)generateMipmapsForRange:(struct _NSRange)arg1 filter:(unsigned long long)arg2 error:(id *)arg3;
- (id)copyWithPixelFormat:(unsigned long long)arg1 options:(id)arg2 bufferAllocator:(id)arg3;

@end
