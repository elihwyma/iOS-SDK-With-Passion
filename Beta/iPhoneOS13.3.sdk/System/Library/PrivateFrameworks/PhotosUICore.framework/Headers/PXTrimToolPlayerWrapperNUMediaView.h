/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class AVPlayer, NSArray, NSMutableArray, NSString, NUMediaView, _PXTrimToolPlayerWrapperAVPlayerView;

@protocol NUMediaPlayer, PXTrimToolPlayerObserver, PXTrimToolPlayerWrapperNUMediaViewPlayerItemSource;

@interface PXTrimToolPlayerWrapperNUMediaView : NSObject

{
    CDStruct_42e984b2 _delegateFlags;
    _Bool _didPlayBeforeSeek;
    _Bool _didLoopVideoBeforeSeek;
    _Bool _showsUntrimmed;
    id <PXTrimToolPlayerObserver> _playerObserver;
    id <PXTrimToolPlayerWrapperNUMediaViewPlayerItemSource> _playerItemSource;
    NSArray *_fullVideoPipelineFilters;
    NUMediaView *_mediaView;
    id <NUMediaPlayer> _mediaPlayer;
    NSMutableArray *_mediaViewObservers;
    id _mediaViewTimeObserver;
    _PXTrimToolPlayerWrapperAVPlayerView *_loupePlayerView;
    NSArray *_pipelineFiltersBeforeSeek;
    CDStruct_1b6d18a9 _seekTime;
    CDStruct_e83c9415 _trimRange;
}

@property (nonatomic, readonly) NUMediaView *mediaView;
@property (retain, nonatomic) id <NUMediaPlayer> mediaPlayer;
@property (nonatomic, readonly) AVPlayer *_currentAVPlayer;
@property (retain, nonatomic) NSMutableArray *mediaViewObservers;
@property (retain, nonatomic) id mediaViewTimeObserver;
@property (retain, nonatomic) _PXTrimToolPlayerWrapperAVPlayerView *loupePlayerView;
@property (nonatomic) CDStruct_e83c9415 trimRange;
@property (nonatomic) CDStruct_1b6d18a9 seekTime;
@property (nonatomic) _Bool didPlayBeforeSeek;
@property (nonatomic) _Bool didLoopVideoBeforeSeek;
@property (copy, nonatomic) NSArray *pipelineFiltersBeforeSeek;
@property (nonatomic) _Bool showsUntrimmed;
@property (weak, nonatomic) id <PXTrimToolPlayerWrapperNUMediaViewPlayerItemSource> playerItemSource;
@property (copy, nonatomic) NSArray *fullVideoPipelineFilters;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <PXTrimToolPlayerObserver> playerObserver;
@property (nonatomic, readonly, getter=isReadyToPlay) _Bool readyToPlay;
@property (nonatomic, readonly, getter=isPlaying) _Bool playing;

- (void)dealloc;
- (void)pause;
- (void)play;
- (void)seekToTime:(CDStruct_1b6d18a9)arg1;
- (void)invalidateComposition;
- (void)seekToTime:(CDStruct_1b6d18a9)arg1 untrimmed:(_Bool)arg2 exact:(_Bool)arg3;
- (void)applyTrimTimeRange:(CDStruct_e83c9415)arg1;
- (void)requestPlayerItemWithCompletion:(CDUnknownBlockType)arg1;
- (void)startPeriodicTimeObserver;
- (void)stopPeriodicTimeObserver;
- (id)initWithNUMediaView:(id)arg1;
- (void)_updateLoupePlayerView;
- (void)_registerDefaultMediaViewObserver;
- (void)_registerTimeMediaViewObserver;
- (void)_removeMediaPlayerObserver;
- (void)_removeTimeObserver;
- (void)_handleMediaPlayerObserverMediaChanged;
- (void)_handleMediaPlayerObserverTimeChanged:(CDStruct_1b6d18a9)arg1;
- (void)_handleMediaPlayerObserverStatusChanged:(long long)arg1;

@end
