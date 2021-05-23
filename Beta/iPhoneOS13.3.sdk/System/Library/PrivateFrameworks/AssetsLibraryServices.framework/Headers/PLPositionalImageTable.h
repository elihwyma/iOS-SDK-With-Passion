/*
 Image: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSString, PLImageFormat;

@interface PLPositionalImageTable : NSObject

{
    struct tagPLImageTableMemoryPool *_pool;
    struct os_unfair_lock_s _expansionLock;
    _Bool _isReadOnly;
    _Bool _flushAfterWrite;
    _Bool _formatIsCropped;
    _Bool _readOnly;
    int _formatSideLen;
    int _descriptor;
    NSString *_path;
    unsigned long long _entryLength;
    PLImageFormat *_format;
    long long _entryCapacity;
}

@property (nonatomic) int descriptor;
@property (nonatomic) long long entryCapacity;
@property (nonatomic) _Bool formatIsCropped;
@property (nonatomic) int formatSideLen;
@property (nonatomic) unsigned long long entryLength;
@property (nonatomic) _Bool flushAfterWrite;
@property (nonatomic, readonly, getter=isReadOnly) _Bool readOnly;
@property (nonatomic, readonly) PLImageFormat *format;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *path;
@property (nonatomic, readonly) _Bool isReadOnly;

- (void)dealloc;
- (void)flush;
- (id)_debugDescription;
- (id)beginThumbnailSafePropertyUpdatesOnAssetThumbnailIdentifier:(id)arg1;
- (void)endThumbnailSafePropertyUpdatesOnAssetThumbnailIdentifier:(id)arg1 withToken:(id)arg2;
- (_Bool)validateData:(id)arg1 withToken:(id)arg2;
- (id)imageDataWithIdentifier:(id)arg1 orIndex:(unsigned long long)arg2 width:(int *)arg3 height:(int *)arg4 bytesPerRow:(int *)arg5 dataWidth:(int *)arg6 dataHeight:(int *)arg7 dataOffset:(int *)arg8;
- (_Bool)usesThumbIdentifiers;
- (long long)fileLength;
- (void)preheatDataForThumbnailIndexes:(id)arg1;
- (void)deleteEntryWithIdentifier:(id)arg1 orIndex:(unsigned long long)arg2 uuid:(id)arg3;
- (_Bool)writeEntryData:(id)arg1 toIndex:(unsigned long long)arg2;
- (id)initWithPath:(id)arg1 readOnly:(_Bool)arg2 format:(id)arg3;
- (struct CGImage *)createImageWithIdentifier:(id)arg1 orIndex:(unsigned long long)arg2 decodeSession:(void *)arg3;
- (void)touchEntriesInRange:(struct _NSRange)arg1;
- (_Bool)_increaseEntryCapacityIfNeededToStoreIndex:(long long)arg1;
- (_Bool)_setEntryCapacity:(long long)arg1;

@end
