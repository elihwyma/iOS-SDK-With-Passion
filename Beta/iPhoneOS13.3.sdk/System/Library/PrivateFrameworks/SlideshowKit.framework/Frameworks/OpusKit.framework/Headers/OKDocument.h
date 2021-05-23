/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
 */

#import <UIKit/UIDocument.h>

@class NSRecursiveLock, OKPresentation;

@protocol OKDocumentDelegate;

@interface OKDocument : UIDocument

{
    OKPresentation *_presentation;
    NSRecursiveLock *_posterImageLock;
    struct CGImage *_posterImage;
    _Bool _hasPosterImageChanged;
    _Bool _isClosing;
    id <OKDocumentDelegate> _delegate;
}

@property _Bool hasPosterImageChanged;
@property _Bool isClosing;
@property (retain) OKPresentation *presentation;
@property struct CGImage *posterImage;
@property (nonatomic) id <OKDocumentDelegate> delegate;

+ (id)_fileWrapperPosterImageFilenameKeyWithResolution:(unsigned long long)arg1;
+ (id)_posterImageURLForFileURL:(id)arg1 withResolution:(unsigned long long)arg2;
+ (id)_importedResourceURLWithHash:(id)arg1;
+ (id)_importedResourcesDirectoryURLForDocumentURL:(id)arg1;
+ (id)_hashForImportedResourceURL:(id)arg1;
+ (id)_importedResourceDirectoryURLForImportedResourceURL:(id)arg1 withDocumentURL:(id)arg2;
+ (struct CGImage *)retainedPosterImageForFileURL:(id)arg1 withResolution:(unsigned long long)arg2 coordinateReading:(_Bool)arg3;
+ (id)infoForFileURL:(id)arg1 coordinateReading:(_Bool)arg2;
+ (id)_scriptURLForDocumentURL:(id)arg1;
+ (id)_importedMediaURLForImportedResourceURL:(id)arg1 withDocumentURL:(id)arg2 extension:(id)arg3;
+ (id)_importedThumbnailURLForImportedResourceURL:(id)arg1 withDocumentURL:(id)arg2 withExtension:(id)arg3;
+ (id)_importedMetadataURLForImportedResourceURL:(id)arg1 withDocumentURL:(id)arg2;

- (void)dealloc;
- (id)URLForResource:(id)arg1 withExtension:(id)arg2;
- (id)localizedName;
- (id)documentURL;
- (void)openWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_commonInit;
- (_Bool)readFromURL:(id)arg1 error:(id *)arg2;
- (_Bool)loadFromContents:(id)arg1 ofType:(id)arg2 error:(id *)arg3;
- (id)contentsForType:(id)arg1 error:(id *)arg2;
- (_Bool)writeContents:(id)arg1 andAttributes:(id)arg2 safelyToURL:(id)arg3 forSaveOperation:(long long)arg4 error:(id *)arg5;
- (void)saveToURL:(id)arg1 forSaveOperation:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)revertToContentsOfURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithFileURL:(id)arg1;
- (void)closeWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)enableEditing;
- (void)disableEditing;
- (void)_didReceiveMemoryWarningNotification:(id)arg1;
- (void)_willTerminateNotification:(id)arg1;
- (id)_scriptURL;
- (void)_didEnterBackgroundNotification:(id)arg1;
- (void)_willEnterForegroundNotification:(id)arg1;
- (void)_cleanupUnusedResources;
- (_Bool)_hasUnusedResources;
- (void)_updateChangeCount:(unsigned long long)arg1;
- (id)_metadataObjectForKey:(id)arg1 forImportedResourceURL:(id)arg2;
- (id)_importedResourcesDirectoryURL;
- (id)_importedResourceDirectoryURLForImportedResourceURL:(id)arg1;
- (id)_extensionForImportedResourceURL:(id)arg1;
- (id)_extensionForThumbnailImportedResourceURL:(id)arg1;
- (id)_importedThumbnailsDirectoryURLForImportedResourceURL:(id)arg1;
- (id)_importedResourceURLForRessourceURL:(id)arg1;
- (_Bool)isImportedResourceURLEmbedded:(id)arg1;
- (id)importResourceURL:(id)arg1 opaque:(_Bool)arg2 force:(_Bool)arg3 progressBlock:(CDUnknownBlockType)arg4 error:(id *)arg5;
- (id)_importedResourceDirectoryURLForImportedResourceURL:(id)arg1 withImportedResourcesDirectoryURL:(id)arg2;
- (id)_importedMediaURLForImportedResourceURL:(id)arg1;
- (id)_importedThumbnailURLForImportedResourceURL:(id)arg1;
- (id)_importedMetadataURLForImportedResourceURL:(id)arg1;
- (id)_importedThumbnailURLForImportedResourceURL:(id)arg1 resolution:(unsigned long long)arg2;
- (_Bool)_readImportedResourceURL:(id)arg1 size:(struct CGSize)arg2 error:(id *)arg3 byThumbnailAccessor:(CDUnknownBlockType)arg4;
- (_Bool)_readImportedResourceURL:(id)arg1 error:(id *)arg2 byMediaAccessor:(CDUnknownBlockType)arg3;
- (_Bool)_updateImportedResourceURL:(id)arg1 size:(struct CGSize)arg2 error:(id *)arg3 byThumbnailAccessor:(CDUnknownBlockType)arg4;
- (_Bool)_readImportedResourceURL:(id)arg1 error:(id *)arg2 byThumbnailAccessor:(CDUnknownBlockType)arg3;
- (_Bool)_readImportedResourceURL:(id)arg1 error:(id *)arg2 byMetadataAccessor:(CDUnknownBlockType)arg3;
- (id)_metadataForImportedResourceURL:(id)arg1;
- (id)_importedMediaURLForImportedResourceURL:(id)arg1 withImportedResourceDirectoryURL:(id)arg2 withExtension:(id)arg3;
- (id)_importedThumbnailURLForImportedResourceURL:(id)arg1 withImportedResourceDirectoryURL:(id)arg2 withExtension:(id)arg3;
- (id)_importedMetadataURLWithImportedResourceDirectoryURL:(id)arg1;
- (id)_importedThumbnailsURLWithImportedResourceDirectoryURL:(id)arg1;
- (id)importResourceURLs:(id)arg1 opaque:(_Bool)arg2 force:(_Bool)arg3 progressBlock:(CDUnknownBlockType)arg4 error:(id *)arg5;
- (_Bool)deleteImportedResourceURLs:(id)arg1 progressBlock:(CDUnknownBlockType)arg2 error:(id *)arg3;
- (id)prepareMediaURL:(id)arg1 force:(_Bool)arg2 colorSpace:(id)arg3 progressBlock:(CDUnknownBlockType)arg4 error:(id *)arg5;
- (id)prepareMediaURLs:(id)arg1 force:(_Bool)arg2 colorSpace:(id)arg3 progressBlock:(CDUnknownBlockType)arg4 error:(id *)arg5;
- (_Bool)_updateImportedResourceURL:(id)arg1 error:(id *)arg2 byMetadataAccessor:(CDUnknownBlockType)arg3;
- (id)importedResourceURLs;
- (_Bool)_hasThumbnailForImportedResourceURL:(id)arg1 size:(struct CGSize)arg2;
- (struct CGImage *)_thumbnailForImportedResourceURL:(id)arg1 size:(struct CGSize)arg2;
- (_Bool)_hasThumbnailFromMediaForImportedResourceURL:(id)arg1;
- (struct CGImage *)_thumbnailFromMediaForImportedResourceURL:(id)arg1;
- (struct CGImage *)_thumbnailFromMediaForImportedResourceURL:(id)arg1 size:(struct CGSize)arg2;
- (void)_saveThumbnailToDisk:(struct CGImage *)arg1 forImportedResourceURL:(id)arg2 size:(struct CGSize)arg3;
- (_Bool)_hasThumbnailForImportedResourceURL:(id)arg1;
- (struct CGImage *)_thumbnailForImportedResourceURL:(id)arg1;

@end
