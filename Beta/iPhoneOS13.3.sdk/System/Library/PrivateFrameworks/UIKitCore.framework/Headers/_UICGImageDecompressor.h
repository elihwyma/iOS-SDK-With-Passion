/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface _UICGImageDecompressor : NSObject

{
    NSData *_imageData;
    struct CGSize _maxSize;
    struct CGImage *_imageRef;
    unsigned long long _renderingIntent;
    unsigned long long _jpegDecodeRequestID;
    struct os_unfair_lock_s _metadataLock;
    struct os_unfair_lock_s _decompressionLock;
    struct {
        unsigned int metadataFinished:1;
        unsigned int imageOrientation:3;
        unsigned int decompressionFinished:1;
        unsigned int cache:1;
    } _decompressorFlags;
}

@property (nonatomic, readonly) _Bool _isHardwareBased;

+ (void)flushCaches;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithData:(id)arg1 immediateLoadWithMaxSize:(struct CGSize)arg2 renderingIntent:(unsigned long long)arg3 cache:(_Bool)arg4;
- (struct CGImage *)waitForImageRef;
- (long long)waitForOrientation;
- (void)_decompressEagerly:(_Bool)arg1;
- (void)_waitForMetadata;
- (void)_decompressionFallbackImageCreation;

@end
