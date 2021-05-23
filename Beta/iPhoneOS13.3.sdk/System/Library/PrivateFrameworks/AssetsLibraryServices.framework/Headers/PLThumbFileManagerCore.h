/*
 Image: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSString, PLImageFormat, PLPhotoLibraryPathManager;

@interface PLThumbFileManagerCore : NSObject

{
    PLImageFormat *_format;
    _Bool _readOnly;
    PLPhotoLibraryPathManager *_pathManager;
    NSString *_path;
    NSString *_filename;
}

@property (readonly) PLImageFormat *format;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *path;
@property (nonatomic, readonly) _Bool isReadOnly;

+ (CDStruct_1ef3fb1f)maxMasterSizeFromSourceImageSize:(CDStruct_1ef3fb1f)arg1 format:(id)arg2;

- (id)_debugDescription;
- (id)beginThumbnailSafePropertyUpdatesOnAssetThumbnailIdentifier:(id)arg1;
- (void)endThumbnailSafePropertyUpdatesOnAssetThumbnailIdentifier:(id)arg1 withToken:(id)arg2;
- (_Bool)validateData:(id)arg1 withToken:(id)arg2;
- (id)imageDataWithIdentifier:(id)arg1 orIndex:(unsigned long long)arg2 width:(int *)arg3 height:(int *)arg4 bytesPerRow:(int *)arg5 dataWidth:(int *)arg6 dataHeight:(int *)arg7 dataOffset:(int *)arg8;
- (_Bool)usesThumbIdentifiers;
- (id)thumbnailPathForThumbIdentifier:(id)arg1;
- (void)preheatDataForThumbnailIndexes:(id)arg1;
- (void)deleteEntryWithIdentifier:(id)arg1;
- (_Bool)setImageForEntry:(id)arg1 withIdentifier:(id)arg2 orIndex:(unsigned long long)arg3 photoUUID:(id)arg4 options:(id)arg5;
- (struct CGImage *)createImageWithIdentifier:(id)arg1 orIndex:(unsigned long long)arg2 decodeSession:(void *)arg3;
- (id)initWithImageFormat:(id)arg1 pathManager:(id)arg2;

@end
