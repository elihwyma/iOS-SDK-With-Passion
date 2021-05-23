/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSMutableSet, NSURL, WBSCacheRetainReleasePolicy, WBSCoalescedAsynchronousWriter;

@protocol OS_dispatch_queue, WBSSiteMetadataImageCacheDelegate;

@interface WBSSiteMetadataImageCache : NSObject

{
    NSObject<OS_dispatch_queue> *_diskAccessQueue;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSMutableDictionary *_imagesForKeyStrings;
    NSMutableSet *_pendingKeyStringRequests;
    NSMutableSet *_missingImageKeyStrings;
    WBSCacheRetainReleasePolicy *_cachePolicy;
    NSMutableDictionary *_cacheSettings;
    WBSCoalescedAsynchronousWriter *_cacheSettingsWriter;
    unsigned long long _fileProtectionOptions;
    _Bool _terminating;
    NSURL *_imageDirectoryURL;
    long long _imageType;
    id <WBSSiteMetadataImageCacheDelegate> _delegate;
}

@property (nonatomic, readonly) NSURL *imageDirectoryURL;
@property (nonatomic, readonly) long long imageType;
@property (nonatomic, readonly, getter=isTerminating) _Bool terminating;
@property (weak, nonatomic) id <WBSSiteMetadataImageCacheDelegate> delegate;

- (id)init;
- (void)emptyCache;
- (void)removeAllImages;
- (void)savePendingChangesBeforeTermination;
- (id)initWithImageDirectoryURL:(id)arg1 imageType:(long long)arg2;
- (void)setUpImageCache;
- (void)imageForKeyString:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)saveImageToDisk:(id)arg1 forKeyString:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)removeImagesFromCacheForKeyStrings:(id)arg1;
- (void)purgeUnneededImages;
- (id)_internalQueueName;
- (void)_internalQueueDispatchSync:(CDUnknownBlockType)arg1;
- (id)_diskAccessQueueName;
- (id)_cacheSettingsFileURL;
- (void)_dispatchDiskAccessBlock:(CDUnknownBlockType)arg1;
- (id)_fileLocationForKeyString:(id)arg1;
- (id)settingForKey:(id)arg1;
- (void)setSetting:(id)arg1 forKey:(id)arg2;
- (id)imageForKeyString:(id)arg1 getImageState:(long long *)arg2;
- (void)setImageState:(long long)arg1 forKeyString:(id)arg2;
- (id)initWithImageDirectoryURL:(id)arg1 imageType:(long long)arg2 fileProtectionOptions:(unsigned long long)arg3;
- (void)_internalReleaseImageForKeyString:(id)arg1;
- (void)_notifyDidFinishLoadingSettings;
- (void)_internalQueueDispatchBarrierAsync:(CDUnknownBlockType)arg1;
- (void)_internalSetUpImageCache;
- (void)_internalPurgeUnneededImages;
- (id)_fileNameForKeyString:(id)arg1;
- (void)_removeImagesPassingTest:(CDUnknownBlockType)arg1;
- (void)_emptyCacheDirectory;
- (void)_didLoadImage:(id)arg1 forKeyString:(id)arg2 fromDisk:(_Bool)arg3;
- (id)_loadImageFromDiskForKeyString:(id)arg1;
- (long long)_internalImageStateForKeyString:(id)arg1;
- (void)_internalSetImageState:(long long)arg1 forKeyString:(id)arg2;
- (id)_internalImageForKeyString:(id)arg1;
- (void)_requestImageForKeyString:(id)arg1;
- (void)_internalSaveImageToDisk:(id)arg1 forKeyString:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_internalRemoveAllImages;
- (void)_internalRemoveImagesFromCacheForKeyStrings:(id)arg1;
- (id)_internalSettingForKey:(id)arg1;
- (void)_internalSetSetting:(id)arg1 forKey:(id)arg2;
- (void)_saveCacheSettingsSoon;
- (void)setImage:(id)arg1 forKeyString:(id)arg2;
- (long long)imageStateForKeyString:(id)arg1;
- (void)retainImageWithKeyStringProvider:(CDUnknownBlockType)arg1;
- (void)retainImageForKeyString:(id)arg1;
- (void)retainImagesForKeyStrings:(id)arg1;
- (void)releaseImageWithKeyStringProvider:(CDUnknownBlockType)arg1;
- (void)releaseImageForKeyString:(id)arg1;
- (void)releaseImagesForKeyStrings:(id)arg1;
- (_Bool)isImageRetainedForKeyString:(id)arg1;

@end
