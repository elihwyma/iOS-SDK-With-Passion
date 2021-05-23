/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVAssetDownloadSessionInternal, AVMediaSelection, NSArray, NSError, NSURL;

@interface AVAssetDownloadSession : NSObject

{
    AVAssetDownloadSessionInternal *_internal;
}

@property (nonatomic, readonly) long long status;
@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) NSURL *URL;
@property (nonatomic, readonly) NSURL *destinationURL;
@property (nonatomic, readonly) long long priority;
@property (nonatomic, readonly) unsigned long long fileSize;
@property (nonatomic, readonly) unsigned long long availableFileSize;
@property (nonatomic, readonly) unsigned long long countOfBytesReceived;
@property (nonatomic, readonly) unsigned long long downloadToken;
@property (nonatomic, readonly) NSArray *loadedTimeRanges;
@property (nonatomic, readonly) AVMediaSelection *resolvedMediaSelection;

+ (void)registerDownloadLocation:(id)arg1 forURLAsset:(id)arg2;
+ (id)assetDownloadSessionWithURL:(id)arg1 destinationURL:(id)arg2 options:(id)arg3;
+ (id)assetDownloadSessionWithDownloadToken:(unsigned long long)arg1;
+ (id)assetDownloadSessionWithAsset:(id)arg1 destinationURL:(id)arg2 options:(id)arg3;

- (id)init;
- (void)dealloc;
- (void)pause;
- (void)stop;
- (void)start;
- (id)_weakReference;
- (struct OpaqueFigAsset *)_figAsset;
- (struct OpaqueFigPlaybackItem *)_playbackItem;
- (id)_errorForFigNotificationPayload:(struct __CFDictionary *)arg1 key:(struct __CFString *)arg2;
- (id)_common_init;
- (int)_setFileFigAsset:(struct OpaqueFigAsset *)arg1;
- (void)_transitionToTerminalStatus:(long long)arg1 error:(id)arg2;
- (void)_selectMediaOptionsFromMediaSelection:(id)arg1;
- (void)_addFigAssetListeners;
- (void)_addFigAssetDownloaderListeners;
- (struct OpaqueFigAsset *)_createDuplicateFigAssetFromAVAsset:(id)arg1;
- (void)_removeFigAssetListeners;
- (void)_removeFigPlaybackItemListeners;
- (void)_removeFigAssetDownloaderListeners;
- (id)initWithURL:(id)arg1 destinationURL:(id)arg2 options:(id)arg3;
- (id)initWithDownloadToken:(unsigned long long)arg1;
- (id)initWithAsset:(id)arg1 destinationURL:(id)arg2 options:(id)arg3;
- (id)_verifyDownloadConfigurationForAssetType;
- (int)_primeCache;
- (int)_readyForInspection;
- (id)_loadedTimeRangesFromFigLoadedTimeRanges:(id)arg1;
- (void)startLoadingMetadata;
- (void)_addFigPlaybackItemListeners;
- (id)_figAssetNotificationNames;
- (id)_figPlaybackItemNotificationNames;
- (id)_figAssetDownloaderNotificationNames;
- (void)_primeCacheOnDispatchQueue;
- (id)_errorFromAssetNotificationPayload:(id)arg1;
- (void)_forwardLoadedTimeRangesChangedNotification:(id)arg1;

@end
