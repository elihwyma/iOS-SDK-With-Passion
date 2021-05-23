/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Foundation/NSObject.h>

@class NSDate, NSMetadataQuery, NSMutableArray, NSMutableDictionary, NSString, Project;

@protocol NSFilePresenter;

__attribute__((visibility("hidden")))
@interface ProjectPlaceholder : NSObject

{
    NSString *m_path;
    NSDate *m_modDate;
    int m_duration;
    int m_frameRate;
    int m_currentTime;
    NSString *m_themeID;
    NSString *m_displayName;
    int m_isReadOnly;
    Project *m_project;
    NSString *m_trashPath;
    NSString *m_exportedTrashPath;
    NSString *m_theaterUUID;
    NSDate *m_theaterSavedDate;
    unsigned long long m_bytesToDownload;
    unsigned long long m_bytesComplete;
    _Bool _isInCloud;
    _Bool _downloadStarted;
    _Bool _restartCloudDownload;
    _Bool _projectPreviewNeedsToBeRegenerated;
    _Bool _unsynched;
    _Bool _inihibitCoordinatedWrites;
    id <NSFilePresenter> _filePresenter;
    NSMetadataQuery *_ubiquitousQuery;
    NSMutableDictionary *_nonresidentURLs;
    NSMutableArray *_essentialNrURLS;
}

@property (retain, nonatomic) NSMetadataQuery *ubiquitousQuery;
@property (retain, nonatomic) NSMutableDictionary *nonresidentURLs;
@property (retain, nonatomic) NSMutableArray *essentialNrURLS;
@property _Bool inihibitCoordinatedWrites;
@property (retain, nonatomic) NSString *path;
@property (retain, nonatomic) NSString *trashPath;
@property (retain, nonatomic) NSString *exportedTrashPath;
@property (nonatomic, readonly) Project *project;
@property (nonatomic, readonly) NSString *themeID;
@property (nonatomic, readonly, getter=isTrailer) _Bool trailer;
@property (retain, nonatomic) NSString *theaterUUID;
@property (retain, nonatomic) NSDate *theaterSavedDate;
@property (nonatomic) _Bool isInCloud;
@property (nonatomic, readonly) _Bool downloadStarted;
@property _Bool restartCloudDownload;
@property _Bool projectPreviewNeedsToBeRegenerated;
@property _Bool unsynched;
@property (nonatomic) id <NSFilePresenter> filePresenter;
@property (nonatomic, readonly) NSString *persistedStorageName;
@property (retain, nonatomic) NSString *displayName;

+ (id)miroProjectPlaceholder;
+ (id)trashProjectPath:(id)arg1;
+ (id)tempProjectPlaceHolderAtPath:(id)arg1;
+ (id)tempProjectPath:(id)arg1;
+ (id)themeProjectPreviewPath:(id)arg1;
+ (id)documentPathForNewProject:(_Bool)arg1;
+ (void)setProjectPlaceholderClass:(Class)arg1;
+ (id)trashProjectPlaceHolderWithName:(id)arg1;
+ (id)tempProjectPlaceHolderWithName:(id)arg1;
+ (id)timelineProjectPlaceholderWithID:(id)arg1 name:(id)arg2 previewMode:(_Bool)arg3;
+ (id)trailerPlaceholderWithID:(id)arg1 previewMode:(_Bool)arg2;

- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithPath:(id)arg1;
- (id)modificationDate;
- (id)dateFormatter;
- (int)currentTime;
- (_Bool)isReadOnly;
- (id)thumbnailImage;
- (int)frameRate;
- (id)assetsDirectory;
- (void)queryTheCloud;
- (void)removeQueryObservers;
- (id)loadProjectAndValidate:(_Bool)arg1;
- (void)unloadProject;
- (void)coordinateMove:(CDUnknownBlockType)arg1;
- (void)startCloudQuery;
- (void)stopCloudQuery;
- (void)coordinateRenameFrom:(id)arg1 to:(id)arg2 renameHandler:(CDUnknownBlockType)arg3;
- (void)removeFilePresenter;
- (void)removeCloudDownloadProject;
- (_Bool)renameTo:(id)arg1;
- (_Bool)updateFile;
- (void)clearMicacheFolder;
- (void)addQueryObservers;
- (void)didStart:(id)arg1;
- (void)gathering:(id)arg1;
- (void)finishGathering:(id)arg1;
- (void)didUpdate:(id)arg1;
- (void)configureFilePresenter;
- (_Bool)isMissingAssets;
- (void)didFinishDownload:(id)arg1;
- (id)holderFilePath;
- (void)coordinateWrite:(CDUnknownBlockType)arg1;
- (void)readFile;
- (int)durationInFrame;
- (id)theaterPosterImage;
- (id)videoPreviewImage;
- (id)previewImagesCacheFolder;
- (id)videoPreviewImageAllowingLowQuality:(_Bool)arg1 lowQualityFetched:(_Bool *)arg2;
- (id)videoPreviewImagePathForSize:(struct CGSize)arg1;
- (id)legacyThumbnailImagePath;
- (void)updateImage:(id)arg1 atPath:(id)arg2;
- (_Bool)checkForEmoji:(id)arg1;
- (_Bool)isDuplicateProjectName:(id)arg1;
- (void)resetCloudQuery;
- (void)rebuildNonEssentialCacheForProjectURL:(id)arg1 oldURL:(id)arg2;
- (void)resync;
- (unsigned long long)movieFileSizeForPath:(id)arg1 preset:(id)arg2;
- (void)unloadAllProjectsExceptMe;
- (id)initAsUnpersistable;
- (id)loadPreviewProject;
- (void)updateWithTrailerID:(id)arg1 previewMode:(_Bool)arg2;
- (double)percentDownloaded;
- (_Bool)hasMissingCloudAssets;
- (_Bool)isEssentialURL:(id)arg1;
- (_Bool)lowOnSpace;
- (void)cacheItem:(id)arg1 downloadImmediately:(_Bool)arg2;
- (void)downloadEssentials;
- (_Bool)downloadEverything;
- (void)notifyLowSpace;
- (void)addCloudDownloadProject;
- (id)filePresenterForURL:(id)arg1;
- (void)coordinateWrite:(CDUnknownBlockType)arg1 withOptions:(unsigned long long)arg2;
- (void)projectWasSaved:(id)arg1;
- (void)projectWasChanged:(id)arg1;
- (void)projectDidInvalidateSharingInfo:(id)arg1;
- (id)thumbnailImageForProject:(id)arg1;
- (void)coordinateRemove:(CDUnknownBlockType)arg1;
- (void)updateCurrentTime;
- (_Bool)projectIsEmpty;
- (_Bool)projectNotOptimizedAndNotMissingAssets;
- (_Bool)deletable;
- (id)durationDictionary;
- (id)validateProposedName:(id)arg1 minimumLength:(long long)arg2;
- (void)disablePreviewContent;
- (unsigned long long)sizeOfExportForPresets:(id)arg1;
- (void)updateWithMediaURL:(id)arg1 asset:(id)arg2 adjustments:(id)arg3 selectedRange:(id)arg4;
- (void)startDownloading;
- (void)pauseDownloading;

@end
