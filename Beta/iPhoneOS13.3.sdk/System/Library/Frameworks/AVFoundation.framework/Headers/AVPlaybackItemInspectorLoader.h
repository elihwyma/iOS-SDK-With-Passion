/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <AVFoundation/AVAssetMakeReadyForInspectionLoader.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface AVPlaybackItemInspectorLoader : AVAssetMakeReadyForInspectionLoader

{
    struct OpaqueFigPlaybackItem *_playbackItem;
    NSArray *_trackIDs;
    _Bool _shouldCacheDuration;
    CDStruct_1b6d18a9 _cachedDuration;
}

@property (nonatomic, readonly, getter=_playbackItem) struct OpaqueFigPlaybackItem *playbackItem;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (CDStruct_1b6d18a9)duration;
- (void)cancelLoading;
- (id)initWithURL:(id)arg1 playbackItem:(struct OpaqueFigPlaybackItem *)arg2 trackIDs:(id)arg3 dynamicBehavior:(_Bool)arg4;
- (Class)_classForTrackInspectors;
- (id)assetInspector;
- (struct OpaqueFigFormatReader *)_copyFormatReaderFromFigObjectWithFigErrorCode:(int *)arg1;
- (id)_dictionaryOfSpecialGettersForKeyValueStatus;
- (_Bool)_inspectionRequiresAFormatReader;
- (id)_loadValuesUsingDefaultLoadingMethodWhileMutexLockedForKeys:(id)arg1;
- (void)_addFigObjectNotifications;
- (void)_removeFigObjectNotifications;
- (id)_playbackItemPropertiesForKeys:(id)arg1;

@end
