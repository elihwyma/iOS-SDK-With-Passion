/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

@class NSMapTable, NSMutableArray, NSString, SSDownloadHandler;

@protocol OS_dispatch_queue;

@interface MPStorePlayWhileDownloadController : NSObject

{
    NSObject<OS_dispatch_queue> *_accessQueue;
    SSDownloadHandler *_downloadHandler;
    NSMapTable *_downloadToActiveSessions;
    NSMapTable *_downloadToDownloadTokenPendingCompletionHandlers;
    NSMapTable *_downloadToProcessingDownloadHandlerSessions;
    NSMapTable *_downloadToObservationTransactionCount;
    NSMapTable *_downloadToValidStatePendingCompletionHandlers;
    NSMutableArray *_pausedDownloads;
    NSMutableArray *_prioritizedDownloads;
}

@property (nonatomic, readonly) long long downloadHandlerIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedController;

- (id)init;
- (void)dealloc;
- (void)downloadHandler:(id)arg1 handleSession:(id)arg2;
- (void)downloadHandler:(id)arg1 cancelSession:(id)arg2;
- (void)downloadManager:(id)arg1 downloadDidFinish:(id)arg2;
- (void)downloadManager:(id)arg1 downloadDidProgress:(id)arg2;
- (void)downloadManager:(id)arg1 downloadPurchaseDidFinish:(id)arg2;
- (void)acquirePlayWhileDownloadSessionForDownload:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)beginPrioritizingDownloadSession:(id)arg1;
- (void)endPrioritizingDownloadSession:(id)arg1;
- (void)releasePlayWhileDownloadSession:(id)arg1;
- (void)_beginDownloadObservationForDownload:(id)arg1;
- (void)_beginPrioritizingDownload:(id)arg1;
- (void)_beginPrioritizingDownloadSession:(id)arg1;
- (void)_endDownloadObservationForDownload:(id)arg1;
- (void)_endPrioritizingDownload:(id)arg1;
- (void)_endPrioritizingDownloadSession:(id)arg1;
- (void)_getDownloadPropertiesForStoreDownload:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)_getDownloadTokenForStoreDownload:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)_handleDownloadPrioritization;
- (_Bool)_isStoreDownloadValidForPlayWhileDownload:(id)arg1;
- (void)_postActiveSessionsDidFinishForStoreDownload:(id)arg1;
- (void)_suspendUntilValidDownloadStateForStoreDownload:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)_updateActiveSessionsForDownload:(id)arg1;
- (void)_updateForDownloadStateRefreshWithDownload:(id)arg1;
- (void)_updateForDownloadTokenRefreshWithDownload:(id)arg1;

@end
