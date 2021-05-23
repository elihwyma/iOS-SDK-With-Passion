/*
 Image: /System/Library/PrivateFrameworks/TextureIO.framework/TextureIO
 */

#import <NSObject.h>

@class NSDictionary, NSString, TXRDeferredTextureInfo, TXRTextureInfo;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface TXRParserKTX : NSObject

{
    TXRTextureInfo *_textureInfo;
    unsigned int _bytesOfKeyValueData;
    _Bool _isCompressed;
    NSDictionary *_internalSizedFormatLookup;
    TXRDeferredTextureInfo *_deferredTextureInfo;
    NSObject<OS_dispatch_queue> *_parserQueue;
    _Bool _shouldFlipVertically;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) TXRTextureInfo *textureInfo;

+ (_Bool)exportTexture:(id)arg1 url:(id)arg2 error:(id *)arg3;
+ (_Bool)handlesData:(id)arg1;

- (unsigned long long)determineFormatFromType:(unsigned int)arg1 format:(unsigned int)arg2 internalFormat:(unsigned int)arg3 baseInternalFormat:(unsigned int)arg4;
- (_Bool)parseData:(id)arg1 bufferAllocator:(id)arg2 options:(id)arg3 error:(id *)arg4;
- (id)parsedImageAtLevel:(unsigned long long)arg1 element:(unsigned long long)arg2 face:(unsigned long long)arg3;
- (void)parseImageData:(id)arg1 WithOptions:(id)arg2 bufferAllocator:(id)arg3;

@end
