/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

@class NSMapTable, NSMutableArray, NSOperationQueue, NSString;

@protocol OS_dispatch_queue;

@interface MPStreamingDownloadSessionController : NSObject

{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSMapTable *_assetDownloadSessionToDownloadSession;
    NSMapTable *_assetDownloadSessionToPlaybackMetadata;
    NSMutableArray *_assetDownloadSessionsPendingStart;
    unsigned long long _pausingAllDownloadsTransactionCount;
    struct vector<unsigned long long, std::__1::allocator<unsigned long long>> _prioritizedDownloadTokens;
    NSOperationQueue *_streamingOperationQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedDownloadSessionController;

- (id)init;
- (void)dealloc;
- (id).cxx_construct;
- (void)beginPrioritizingDownloadSession:(id)arg1;
- (void)endPrioritizingDownloadSession:(id)arg1;
- (void)environmentMonitorDidChangeNetworkType:(id)arg1;
- (void)beginPausingAllDownloadSessions;
- (void)endPausingAllDownloadSessions;
- (void)acquireDownloadSessionWithRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)releaseDownloadSession:(id)arg1;
- (void)startDownloadSession:(id)arg1;
- (void)_assetDownloadSessionDownloadFailedNotification:(id)arg1;
- (void)_assetDownloadSessionDownloadSucceededNotification:(id)arg1;
- (void)_assetDownloadSessionFileSizeAvailableNotification:(id)arg1;
- (void)_playbackItemMetadataNetworkConstraintsDidChangeNotification:(id)arg1;
- (id)_assetDownloadSessionForDownloadSession:(id)arg1;
- (unsigned long long)_assetQualityForAssetFlavor:(id)arg1;
- (void)_auditAssetDownloadSession:(id)arg1 withNetworkConstraints:(id)arg2;
- (void)_auditNetworkConstraintsForAssetDownloadSession:(id)arg1 playbackItemMetadata:(id)arg2;
- (id)_downloadKeyCookieWithValue:(id)arg1 URL:(id)arg2;
- (void)_getNetworkConstraintsForPlaybackItemMetadata:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)_handleNewDownloadSession:(id)arg1 withAssetDownloadSession:(id)arg2 forPlaybackItemMetadata:(id)arg3;
- (void)_handlePrioritizationForFinishingAssetDownloadSession:(id)arg1;
- (id)_newDownloadSessionForRequest:(id)arg1 sourceURL:(id)arg2 downloadKey:(id)arg3 sinfs:(id)arg4 pathExtension:(id)arg5 assetFlavor:(id)arg6 allowAssetCaching:(_Bool)arg7 allowITunesContentConfiguration:(_Bool)arg8 protectionType:(unsigned long long)arg9 returningAssetDownloadSession:(id *)arg10;
- (void)_postFailedForDownloadSession:(id)arg1;
- (void)_postFailedForDownloadSession:(id)arg1 withError:(id)arg2;
- (id)_preferredAssetFlavorsForAssetQuality:(unsigned long long)arg1;
- (void)_removeFileForAssetDownloadSession:(id)arg1 playbackItemMetadata:(id)arg2;
- (void)_registerForNotificationsForAssetDownloadSession:(id)arg1;
- (void)_registerForNotificationsForPlaybackItemMetadata:(id)arg1;
- (id)_sinfsByCleaningSinfs:(id)arg1;
- (void)_unregisterDownloadSession:(id)arg1;
- (void)_unregisterForNotificationsForAssetDownloadSession:(id)arg1;
- (void)_unregisterForNotificationsForPlaybackItemMetadata:(id)arg1;

@end
