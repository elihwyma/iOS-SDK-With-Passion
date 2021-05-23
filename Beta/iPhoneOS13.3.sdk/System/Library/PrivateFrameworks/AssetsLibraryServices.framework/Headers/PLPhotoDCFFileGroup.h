/*
 Image: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
 */

#import <AssetsLibraryServices/PLPhotoDCFObject.h>

@class NSDate, NSMutableSet, NSString, PLPhotoDCFDirectory;

@interface PLPhotoDCFFileGroup : PLPhotoDCFObject

{
    id _delegate;
    PLPhotoDCFDirectory *_directory;
    NSString *_directoryPath;
    NSString *_prebakedThumbnailPath;
    NSString *_videoFileExtension;
    NSMutableSet *_extensions;
    NSDate *_date;
    NSString *_preferredExtension;
    unsigned long long _hash;
    unsigned int _hashComputed:1;
    unsigned int _addedExtensions:1;
    unsigned int _writeIsPending:1;
}

+ (id)allMetadataFileExtensions;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (_Bool)isValid;
- (long long)compare:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)date;
- (id)directory;
- (_Bool)hasThumbnail;
- (void)setDate:(id)arg1;
- (id)extensions;
- (id)pathForFullSizeImage;
- (id)pathForTrimmedVideoFile;
- (id)pathForVideoPreviewFile;
- (id)pathForVideoFile;
- (id)pathForPrebakedLandscapeScrubberThumbnails;
- (id)pathForPrebakedPortraitScrubberThumbnails;
- (void)setWriteIsPending:(_Bool)arg1;
- (id)initWithName:(id)arg1 number:(int)arg2 directory:(id)arg3;
- (id)imageSourceTypeHint;
- (void)deleteObsoleteFiles;
- (_Bool)hasObsoleteFiles;
- (void)addExtension:(id)arg1;
- (void)addExtensionsFromMetadataDirectory;
- (void)forceAddExtensionsFromMetadataDirectory;
- (id)pathForContainingDirectory;
- (id)pathForGroupWithoutExtension;
- (id)pathForMetadata;
- (id)pathForMetadataWithGroupName;
- (void)createMetadataDirectoryIfNecessary;
- (id)thumbnailFilename;
- (id)prebakedThumbnailFilename;
- (id)prebakedLandscapeScrubberThumbnailsFilename;
- (id)prebakedPortraitScrubberThumbnailsFilename;
- (id)prebakedWildcatThumbnailsFilename;
- (id)lowResolutionFilename;
- (id)videoPreviewFilename;
- (id)pathForThumbnailFile;
- (id)pathForPrebakedThumbnail;
- (id)pathForPrebakedWildcatThumbnailsFile;
- (id)pathForLowResolutionFile;
- (_Bool)hasVideoFile;
- (_Bool)hasPrebakedThumbnail;
- (_Bool)hasPrebakedLandscapeScrubberThumbnails;
- (_Bool)hasPrebakedPortraitScrubberThumbnails;
- (_Bool)hasPrebakedWildcatThumbnails;
- (void)deleteFiles;
- (_Bool)isWritePending;

@end
