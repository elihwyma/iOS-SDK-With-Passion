/*
 Image: /System/Library/PrivateFrameworks/NanoMusicSync.framework/NanoMusicSync
 */

#import <Foundation/NSObject.h>

@class ATAssetLinkController, NSMutableDictionary, NSMutableOrderedSet, NSOperationQueue, NSString;

@protocol OS_dispatch_source;

@interface NMSMediaSyncInfoUpdater : NSObject

{
    NSMutableDictionary *_syncInfo;
    NSMutableOrderedSet *_targetsNeedingSyncInfoSynchronize;
    NSObject<OS_dispatch_source> *_currentSyncInfoSynchronizeTimer;
    NSOperationQueue *_queue;
    _Bool _observing;
    ATAssetLinkController *_assetLinkController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedMediaSyncInfoUpdater;

- (id)init;
- (void)assetLinkController:(id)arg1 didFinishAsset:(id)arg2;
- (void)assetLinkController:(id)arg1 didUpdateAsset:(id)arg2;
- (void)assetLinkController:(id)arg1 didEnqueueAsset:(id)arg2;
- (void)assetLinkController:(id)arg1 didUpdateAssetState:(id)arg2;
- (void)_handleMediaLibraryDidChangeNotification:(id)arg1;
- (void)_handleMediaPinningMusicContentsInvalidatedNotification:(id)arg1;
- (void)_handleMediaPinningPodcastsContentsInvalidatedNotification:(id)arg1;
- (void)_handleMediaPinningAudiobooksContentsInvalidatedNotification:(id)arg1;
- (void)_handleMusicRecommendationsDidUpdateNotification:(id)arg1;
- (void)_setNeedsMediaSyncInfoUpdate;
- (void)_applyUpdatesFromAsset:(id)arg1;
- (void)beginUpdatingSyncInfo;
- (void)endUpdatingSyncInfo;

@end
