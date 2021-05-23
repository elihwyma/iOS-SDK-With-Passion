/*
 Image: /System/Library/Frameworks/QuickLookThumbnailing.framework/QuickLookThumbnailing
 */

#import <Foundation/NSObject.h>

@class NSURL, QLExternalThumbnailCacheDatabase;

@interface QLExternalThumbnailCache : NSObject

{
    QLExternalThumbnailCacheDatabase *_db;
    NSURL *_directoryURL;
    NSURL *_thumbnailsDirectoryURL;
    NSURL *_databaseURL;
    unsigned long long _maximumCacheSize;
}

@property (retain, nonatomic) QLExternalThumbnailCacheDatabase *db;
@property (nonatomic, readonly) NSURL *directoryURL;
@property (nonatomic, readonly) NSURL *thumbnailsDirectoryURL;
@property (nonatomic, readonly) NSURL *databaseURL;
@property (nonatomic, readonly) unsigned long long maximumCacheSize;

+ (id)writeThumbnailImage:(struct CGImage *)arg1 inInboxAtURL:(id)arg2;

- (void)dealloc;
- (void)close;
- (_Bool)_createDirectoryWithURL:(id)arg1 error:(id *)arg2;
- (id)_urlForThumbnailWithFPItemIdentifier:(id)arg1 fileExtension:(id)arg2;
- (_Bool)_saveOrUpdateCachedThumbnailRepresentingFPItem:(id)arg1 withFileAtURL:(id)arg2 error:(id *)arg3;
- (_Bool)storeThumbnailAtURL:(id)arg1 forItem:(id)arg2 error:(id *)arg3;
- (id)thumbnailURLForItem:(id)arg1 error:(id *)arg2;
- (_Bool)removeAllThumbnails:(id *)arg1;
- (_Bool)_freeDiskSpaceToSaveThumbnailRepresentingFPItem:(id)arg1 withFileAtURL:(id)arg2 error:(id *)arg3;
- (_Bool)_updateDatabaseWithCachedThumbnailRepresentingFPItem:(id)arg1 withFileAtURL:(id)arg2 error:(id *)arg3;
- (_Bool)_saveToDiskCachedThumbnailRepresentingFPItem:(id)arg1 withFileAtURL:(id)arg2 error:(id *)arg3;
- (id)_urlForThumbnailWithFPItem:(id)arg1 originalThumbnailURL:(id)arg2;
- (id)inboxDirectoryURL;
- (void)storeThumbnailAtURL:(id)arg1 forItem:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)getThumbnailURLForItem:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getThumbnailCacheURLWrappersWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithDirectoryURL:(id)arg1 maximumCacheSize:(unsigned long long)arg2 error:(id *)arg3;
- (id)writeThumbnailImageInInbox:(struct CGImage *)arg1;

@end
