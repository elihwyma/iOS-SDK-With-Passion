/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSData, NSMutableArray, NSMutableDictionary;

@interface PLPhotoBakedThumbnails : NSObject

{
    unsigned short _format;
    int _singleThumbnailImageLength;
    unsigned long long _count;
    _Bool _dataIsMutable;
    NSData *_thumbnailData;
    NSMutableArray *_thumbnailImages;
    NSMutableDictionary *_options;
    NSData *_optionsData;
    _Bool _optionsAccessed;
    _Bool _missingHeader;
    struct CGSize _size;
}

@property (nonatomic, readonly) unsigned short format;
@property (nonatomic, readonly) NSMutableDictionary *options;
@property (nonatomic, readonly) NSData *optionsData;
@property (nonatomic, readonly) struct CGSize size;
@property (nonatomic, readonly) int bitsPerComponent;
@property (nonatomic, readonly) int bytesPerPixel;
@property (nonatomic, readonly) unsigned int bitmapInfo;
@property (nonatomic, readonly) struct CGRect imageRect;

+ (_Bool)_transformForImage:(struct CGImage *)arg1 isCropped:(_Bool)arg2 captureOrientation:(int)arg3 sizeInOut:(struct CGSize *)arg4 contextSizeOut:(struct CGSize *)arg5 transformOut:(struct CGAffineTransform *)arg6;
+ (id)thumbnailsWithContentsOfFile:(id)arg1 format:(unsigned short)arg2;

- (id)description;
- (unsigned long long)count;
- (id)_thumbnailData;
- (id)initWithData:(id)arg1 format:(unsigned short)arg2 readOnly:(_Bool)arg3;
- (id)initWithData:(id)arg1 format:(unsigned short)arg2;
- (id)initWithContentsOfFile:(id)arg1 format:(unsigned short)arg2 readOnly:(_Bool)arg3;
- (id)initWithContentsOfFile:(id)arg1 format:(unsigned short)arg2;
- (id)initWithImages:(id)arg1 format:(unsigned short)arg2 orientation:(int *)arg3 options:(id)arg4 delegate:(id)arg5;
- (id)serializedData;
- (_Bool)saveToFile:(id)arg1;
- (id)thumbnailDataAtIndex:(long long)arg1;
- (char *)thumbnailBytesAtIndex:(long long)arg1;
- (struct CGImage *)thumbnailImageAtIndex:(long long)arg1;
- (_Bool)writeBorderedThumbnailOfImage:(struct CGImage *)arg1 toBuffer:(void *)arg2 orientation:(int *)arg3 format:(unsigned short)arg4 formatInfo:(const CDStruct_0d559a47 *)arg5 delegate:(id)arg6;

@end
