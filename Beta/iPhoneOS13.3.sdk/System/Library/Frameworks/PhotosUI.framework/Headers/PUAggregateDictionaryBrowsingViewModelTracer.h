/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

@class NSHashTable, NSString, PUBrowsingViewModel, PXAssetAnalyzer;

@protocol PUDisplayAsset;

__attribute__((visibility("hidden")))
@interface PUAggregateDictionaryBrowsingViewModelTracer : NSObject

{
    PXAssetAnalyzer *_assetAnalyzer;
    _Bool __isPerformingChanges;
    _Bool __isPerformingUpdate;
    _Bool __needsUpdateViewedAsset;
    _Bool __needsUpdateViewedAssetLongEnough;
    _Bool __needsUpdatePlayingVideo;
    _Bool __didScheduleCurrentAssetChange;
    _Bool __isApplicationActive;
    _Bool __viewedAssetLongEnough;
    _Bool __didScheduleViewUpdate;
    _Bool __isPlayingVideo;
    _Bool __isPlayingStreamedVideo;
    _Bool __isStreamedVideoActuallyPlaying;
    _Bool __isStreamedVideoStalled;
    _Bool __needsUpdateOneUpSessionActive;
    _Bool __oneUpSessionActive;
    PUBrowsingViewModel *_browsingViewModel;
    NSHashTable *__viewingContexts;
    id <PUDisplayAsset> __viewedAsset;
    double __viewedAssetStartTime;
    double __oneUpSessionStartTime;
}

@property (nonatomic, readonly) NSHashTable *_viewingContexts;
@property (nonatomic, setter=_setPerformingChanges:) _Bool _isPerformingChanges;
@property (nonatomic, setter=_setPerformingUpdate:) _Bool _isPerformingUpdate;
@property (nonatomic, setter=_setNeedsUpdateViewedAsset:) _Bool _needsUpdateViewedAsset;
@property (nonatomic, setter=_setNeedsUpdateViewedAssetLongEnough:) _Bool _needsUpdateViewedAssetLongEnough;
@property (nonatomic, setter=_setNeedsUpdatePlayingVideo:) _Bool _needsUpdatePlayingVideo;
@property (nonatomic, setter=_setDidScheduleCurrentAssetChange:) _Bool _didScheduleCurrentAssetChange;
@property (nonatomic, setter=_setApplicationActive:) _Bool _isApplicationActive;
@property (retain, nonatomic, setter=_setViewedAsset:) id <PUDisplayAsset> _viewedAsset;
@property (nonatomic, setter=_setViewedAssetStartTime:) double _viewedAssetStartTime;
@property (nonatomic, setter=_setViewedAssetLongEnough:) _Bool _viewedAssetLongEnough;
@property (nonatomic, setter=_setDidScheduleViewUpdate:) _Bool _didScheduleViewUpdate;
@property (nonatomic, setter=_setPlayingVideo:) _Bool _isPlayingVideo;
@property (nonatomic, setter=_setPlayingStreamedVideo:) _Bool _isPlayingStreamedVideo;
@property (nonatomic, setter=_setStreamedVideoActuallyPlaying:) _Bool _isStreamedVideoActuallyPlaying;
@property (nonatomic, setter=_setStreamedVideoStalled:) _Bool _isStreamedVideoStalled;
@property (nonatomic, setter=_setNeedsUpdateOneUpSessionActive:) _Bool _needsUpdateOneUpSessionActive;
@property (nonatomic, setter=_setOneUpSessionActive:) _Bool _oneUpSessionActive;
@property (nonatomic, setter=_setOneUpSessionStartTime:) double _oneUpSessionStartTime;
@property (weak, nonatomic, readonly) PUBrowsingViewModel *browsingViewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)_applicationWillResignActive:(id)arg1;
- (void)_applicationDidBecomeActive:(id)arg1;
- (_Bool)_needsUpdate;
- (void)performChanges:(CDUnknownBlockType)arg1;
- (void)_setNeedsUpdate;
- (void)_updateIfNeeded;
- (void)viewModel:(id)arg1 didChange:(id)arg2;
- (id)initWithBrowsingViewModel:(id)arg1;
- (void)addViewingContext:(id)arg1;
- (void)removeViewingContext:(id)arg1;
- (void)_assertInsideChangeBlock;
- (void)_scheduleViewUpdate;
- (void)_handleScheduledViewUpdate;
- (void)_invalidateOneUpSessionActive;
- (void)_updateOneUpSessionActive;
- (void)_invalidateViewedAsset;
- (void)_updateViewedAssetIfNeeded;
- (void)_invalidateViewedAssetLongEnough;
- (void)_updateViewedAssetLongEnoughIfNeeded;
- (void)_invalidatePlayingVideo;
- (void)_updatePlayingVideoIfNeeded;
- (void)_scheduleCurrentAssetChange;
- (void)_handleScheduledCurrentAssetChange;

@end
