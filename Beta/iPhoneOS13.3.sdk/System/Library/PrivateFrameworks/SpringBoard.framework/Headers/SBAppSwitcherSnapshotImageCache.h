/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableDictionary, NSString, SBAppSwitcherSettings, SBApplicationController, SBIconController, SBOrientationLockManager;

@protocol BSInvalidatable, OS_dispatch_queue, SBAppSwitcherSnapshotImageCacheDelegate;

@interface SBAppSwitcherSnapshotImageCache : NSObject

{
    NSObject<OS_dispatch_queue> *_snapshotQueue;
    NSObject<OS_dispatch_queue> *_controlQueue;
    NSMutableDictionary *_cachedSnapshots;
    NSMutableDictionary *_cacheEntryUpdateObservers;
    NSMutableDictionary *_snapshotRequestsCurrentlyBeingLoaded;
    unsigned long long _snapshotRequestSequenceID;
    NSArray *_appLayoutsInPriorityOrder;
    NSArray *_appLayoutsRequiringFullSizeSnapshots;
    NSArray *_defaultAppLayouts;
    long long _lastKnownInterfaceOrientation;
    long long _lastKnownUserInterfaceStyle;
    SBAppSwitcherSettings *_settings;
    id <BSInvalidatable> _stateCaptureInvalidatable;
    struct _NSRange _lastVisibleRange;
    NSArray *_lastHighPriorityAppLayouts;
    NSArray *_lastAllAppLayouts;
    _Bool _lastPriorityBiasedForward;
    _Bool _shouldPurgeNilEntries;
    SBIconController *_iconController;
    SBApplicationController *_applicationController;
    SBOrientationLockManager *_orientationLockManager;
    _Bool _cachingEnabled;
    _Bool _reloadsSnapshotsForActiveInterfaceOrientationChange;
    id <SBAppSwitcherSnapshotImageCacheDelegate> _delegate;
    NSString *_debugName;
    unsigned long long _atomicNumberOfAppLayoutsToCache;
}

@property unsigned long long atomicNumberOfAppLayoutsToCache;
@property (weak, nonatomic) id <SBAppSwitcherSnapshotImageCacheDelegate> delegate;
@property (nonatomic, readonly) _Bool cachingEnabled;
@property (nonatomic) _Bool reloadsSnapshotsForActiveInterfaceOrientationChange;
@property (copy, nonatomic) NSString *debugName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;
- (void)disableCaching;
- (void)activeInterfaceOrientationWillChangeToOrientation:(long long)arg1;
- (void)activeInterfaceOrientationDidChangeToOrientation:(long long)arg1 willAnimateWithDuration:(double)arg2 fromOrientation:(long long)arg3;
- (void)reloadSnapshotsForInterfaceStyleChange:(long long)arg1;
- (void)enableCachingWithMaximumNumberOfAppLayoutsToCache:(unsigned long long)arg1;
- (void)updateCacheWithMaximumNumberOfAppLayoutsToCache:(unsigned long long)arg1;
- (void)_resetLastCachedValues;
- (id)_initWithDelegate:(id)arg1 iconController:(id)arg2 applicationController:(id)arg3 orientationLockManager:(id)arg4 settings:(id)arg5;
- (void)_snapshotChanged:(id)arg1;
- (void)_updateActiveOrientationObservingIfNeeded;
- (void)_setCachingEnabled:(_Bool)arg1 numberOfAppLayoutsToCache:(unsigned long long)arg2;
- (void)_updateAppLayoutPriorityList;
- (void)_purgeLowPriorityFullSizeSnapshots;
- (void)_purgeLowPriorityFullSizeSnapshotRequests;
- (void)_purgeLowPrioritySnapshots;
- (void)_purgeLowPrioritySnapshotRequests;
- (void)_enqueueNextSnapshotRequestIfNecessary;
- (void)_purgeSnapshotRequestsForDisplayItem:(id)arg1 withReason:(id)arg2;
- (void)_setSnapshotNeedsUpdateForDisplayItem:(id)arg1;
- (id)_cachableAppLayouts;
- (void)_addObserver:(id)arg1 forDisplayItem:(id)arg2;
- (void)_purgeSnapshotsForDisplayItem:(id)arg1;
- (void)_purgeAllSnapshots;
- (void)_purgeAllSnapshotRequests;
- (void)_updateCacheForDisplayItem:(id)arg1;
- (id)_highPriorityAppLayouts;
- (id)_allAppLayouts;
- (struct _NSRange)_visibleAppLayoutRange;
- (_Bool)_biasForwardLoading;
- (id)_fullSizeSnapshotAppLayouts;
- (id)_defaultAppLayouts;
- (void)_snapshotImage:(id)arg1 finishedLoadingForRequest:(id)arg2;
- (void)_asynchronouslyLoadSnapshotFromRequest:(id)arg1;
- (_Bool)_isValidSnapshotRequest:(id)arg1;
- (id)_representedApplicationSceneEntityForDisplayItem:(id)arg1;
- (long long)_orientationForAppLayout:(id)arg1;
- (_Bool)_isLoadingForDefaultDisplayItem:(id)arg1;
- (void)_createDownscaledVariantForRequest:(id)arg1 snapshot:(id)arg2 displayItem:(id)arg3 sceneHandle:(id)arg4 application:(id)arg5;
- (void)_cacheSnapshotForRequest:(id)arg1 withDisplayItem:(id)arg2 inAppLayout:(id)arg3;
- (double)_scaleForDownscaledSnapshots;
- (_Bool)_isValidAppLayout:(id)arg1 withSnapshot:(id)arg2 givenCachableAppLayouts:(id)arg3;
- (id)_cachableAppLayoutsRequiringFullSizeSnapshots;
- (void)_enqueueSnapshotRequestsForCachableAppLayouts:(id)arg1 forFullSizeSnapshots:(_Bool)arg2;
- (id)_createSnapshotRequestWithDisplayItem:(id)arg1 inAppLayout:(id)arg2 forFullSizeSnapshot:(_Bool)arg3;
- (void)_loadSnapshotForRequest:(id)arg1 withDisplayItem:(id)arg2 inAppLayout:(id)arg3;
- (void)_purgeSnapshotRequest:(id)arg1 withReason:(id)arg2;
- (void)_addCacheEntryForImage:(id)arg1 fromRequest:(id)arg2;
- (void)_updateObserversForDisplayItem:(id)arg1 withCacheEntry:(id)arg2;
- (_Bool)_keepGoingForRequest:(id)arg1;
- (id)_uiImageForCGImage:(struct CGImage *)arg1 forSnapshotRequest:(id)arg2;
- (struct CGImage *)_createDecodedImageIfPossible:(struct CGImage *)arg1;
- (void)addSnapshotUpdateObserver:(id)arg1 forDisplayItem:(id)arg2 inAppLayout:(id)arg3;
- (void)removeSnapshotObserver:(id)arg1;
- (id)_appLayoutsInPriorityOrder;
- (id)_cachableAppLayoutsForTesting;
- (void)_setShouldPurgeNilEntry:(_Bool)arg1;

@end
