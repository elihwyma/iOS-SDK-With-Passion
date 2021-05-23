/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMapTable, NSMutableArray, NSString, PXUpdater;

@protocol OS_dispatch_queue;

@interface PXGridInlinePlaybackController : NSObject

{
    NSObject<OS_dispatch_queue> *_recordsQueue;
    struct os_unfair_lock_s _lookupLock;
    NSMapTable *_lookupLock_recordsByDisplayAsset;
    NSMutableArray *_currentlyPlayingRecords;
    NSMutableArray *_visibleRecords;
    PXUpdater *_updater;
    _Bool _isContentViewVisible;
    _Bool _isOneUpVisible;
    _Bool _isContextMenuInteractionActive;
    _Bool _isDragSessionActive;
    _Bool _active;
    _Bool _canCreateRecords;
    _Bool _playbackEnabled;
    _Bool _applicationActive;
    _Bool _lowPowerModeEnabled;
    _Bool _autoplaySettingEnabled;
}

@property (nonatomic) _Bool active;
@property (nonatomic) _Bool canCreateRecords;
@property (nonatomic) _Bool playbackEnabled;
@property (nonatomic) _Bool applicationActive;
@property (nonatomic) _Bool lowPowerModeEnabled;
@property (nonatomic) _Bool autoplaySettingEnabled;
@property (copy, nonatomic, readonly) NSArray *currentRecords;
@property (nonatomic, readonly) struct CGRect currentVisibleRect;
@property (nonatomic, readonly) _Bool canProvideGeometriesForRecords;
@property (nonatomic, readonly) _Bool shouldEnablePlayback;
@property (nonatomic) _Bool isContentViewVisible;
@property (nonatomic) _Bool isOneUpVisible;
@property (nonatomic) _Bool isContextMenuInteractionActive;
@property (nonatomic) _Bool isDragSessionActive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)setNeedsUpdate;
- (void)_applicationDidBecomeActive:(id)arg1;
- (void)visibleRectDidChange;
- (void)preferencesDidChange;
- (void)_processInfoPowerStateDidChange:(id)arg1;
- (void)_applicationDidResignActive:(id)arg1;
- (id)createPlaybackRecordForDisplayAsset:(id)arg1 mediaProvider:(id)arg2 geometryReference:(id)arg3;
- (_Bool)canUpdatePlayingRecords;
- (void)didUpdatePlayingRecords;
- (id)filterSortedRecordsToPlay:(id)arg1;
- (struct CGRect)frameForPlaybackRecord:(id)arg1 minPlayableSize:(out struct CGSize *)arg2;
- (_Bool)canPlayAsset:(id)arg1;
- (id)checkOutPlaybackRecordForDisplayAsset:(id)arg1 mediaProvider:(id)arg2 geometryReference:(id)arg3;
- (id)checkOutPlaybackRecordForDisplayAsset:(id)arg1 mediaProvider:(id)arg2 geometryReference:(id)arg3 configurationBlock:(CDUnknownBlockType)arg4;
- (void)willCheckInPlaybackRecordForDisplayAsset:(id)arg1;
- (void)checkInPlaybackRecordForDisplayAsset:(id)arg1;
- (void)checkInPlaybackRecordForDisplayAssets:(id)arg1;
- (_Bool)isPlayingDisplayAsset:(id)arg1;
- (void)invalidatePlaybackEnabled;
- (void)invalidatePlayingRecords;
- (void)_updateActive;
- (void)_updateLowPowerModeEnabled;
- (void)_updateCanCreateRecords;
- (void)_updatePlaybackEnabled;
- (void)_updateVisibilityOfRecords;
- (void)_updatePlayingRecords;
- (void)_startPlaybackForRecords:(id)arg1;
- (void)_stopPlaybackForRecords:(id)arg1;
- (_Bool)_isDisplayAssetEligibleForAutoPlayback:(id)arg1;
- (_Bool)_hasAnyPlaybackRecords;

@end
