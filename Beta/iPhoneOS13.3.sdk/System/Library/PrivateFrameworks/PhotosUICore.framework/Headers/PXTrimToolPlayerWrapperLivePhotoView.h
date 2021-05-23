/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class ISVideoPlayerUIView, ISWrappedAVPlayer, NSString, UIView;

@protocol PXLivePhotoView, PXTrimToolPlayerObserver;

@interface PXTrimToolPlayerWrapperLivePhotoView : NSObject

{
    CDStruct_42e984b2 _delegateFlags;
    _Bool _needsPlayerUpdate;
    id <PXTrimToolPlayerObserver> _playerObserver;
    UIView *_loupePlayerView;
    ISVideoPlayerUIView *_videoPlayerView;
    ISWrappedAVPlayer *_wrappedAVPlayer;
    id <PXLivePhotoView> _livePhotoView;
    id _periodicTimeObserver;
    CDStruct_1b6d18a9 _periodicTimeObservationInterval;
}

@property (retain, nonatomic) ISWrappedAVPlayer *wrappedAVPlayer;
@property (nonatomic, readonly) id <PXLivePhotoView> livePhotoView;
@property (nonatomic) _Bool needsPlayerUpdate;
@property (retain, nonatomic) ISVideoPlayerUIView *_videoPlayerView;
@property (nonatomic) CDStruct_1b6d18a9 periodicTimeObservationInterval;
@property (retain, nonatomic) id periodicTimeObserver;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <PXTrimToolPlayerObserver> playerObserver;
@property (nonatomic, readonly) UIView *loupePlayerView;
@property (nonatomic, readonly, getter=isReadyToPlay) _Bool readyToPlay;
@property (nonatomic, readonly, getter=isPlaying) _Bool playing;

- (void)pause;
- (void)play;
- (void)seekToTime:(CDStruct_1b6d18a9)arg1;
- (void)invalidateComposition;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)seekToTime:(CDStruct_1b6d18a9)arg1 untrimmed:(_Bool)arg2 exact:(_Bool)arg3;
- (void)applyTrimTimeRange:(CDStruct_e83c9415)arg1;
- (void)requestPlayerItemWithCompletion:(CDUnknownBlockType)arg1;
- (void)startPeriodicTimeObserver;
- (void)stopPeriodicTimeObserver;
- (id)initWithLivePhotoView:(id)arg1;
- (void)_loadWrappedAVPlayerIfNecessary;
- (id)_videoPlayerViewIfLoaded;
- (id)videoPlayerView;
- (void)_createLoupePlayerView;
- (void)_addPeriodicTimeObserver;
- (void)_timeObserverTimeChanged:(CDStruct_1b6d18a9)arg1;

@end
