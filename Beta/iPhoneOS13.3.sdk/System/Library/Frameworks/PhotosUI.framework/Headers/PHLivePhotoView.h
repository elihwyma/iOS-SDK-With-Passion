/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <UIKit/UIView.h>

@class ISLivePhotoPlayer, ISLivePhotoUIView, ISPlayerItem, NSString, PHLivePhoto, UIGestureRecognizer;

@protocol PHLivePhotoViewDelegate;

@interface PHLivePhotoView : UIView

{
    struct {
        _Bool respondsToWillBeginPlaybackWithStyle;
        _Bool respondsToDidEndPlayback;
    } _delegateFlags;
    struct {
        _Bool respondsToDidEndPlayingVitality;
        _Bool respondsToDidBeginHinting;
        _Bool respondsToDidBeginScrubbing;
        _Bool respondsToDidEndScrubbing;
    } _delegatePrivateFlags;
    long long _currentPlaybackStyle;
    _Bool _muted;
    _Bool __playingVitality;
    _Bool __playbackRequested;
    _Bool _scrubbing;
    _Bool _shouldApplyTargetReadiness;
    _Bool _showsStatusBorder;
    id <PHLivePhotoViewDelegate> _delegate;
    PHLivePhoto *_livePhoto;
    ISPlayerItem *__playerItem;
    long long _targetReadiness;
    UIView *_photoView;
    ISLivePhotoUIView *_playerView;
    ISLivePhotoPlayer *_player;
    struct CGPoint _scaleAnchorOffset;
    CDStruct_e83c9415 _trimmedTimeRange;
}

@property (retain, nonatomic) ISLivePhotoPlayer *player;
@property (retain, nonatomic, setter=_setPlayerItem:) ISPlayerItem *_playerItem;
@property (nonatomic, setter=_setPlayingVitality:) _Bool _playingVitality;
@property (nonatomic, setter=_setPlaybackRequested:) _Bool _playbackRequested;
@property (nonatomic, setter=_setScrubbing:) _Bool scrubbing;
@property (nonatomic) long long targetReadiness;
@property (nonatomic) _Bool shouldApplyTargetReadiness;
@property (retain, nonatomic) UIView *photoView;
@property (nonatomic) struct CGPoint scaleAnchorOffset;
@property (retain, nonatomic) ISLivePhotoUIView *playerView;
@property (retain, nonatomic) ISLivePhotoPlayer *player;
@property (nonatomic) _Bool showsStatusBorder;
@property (nonatomic) CDStruct_e83c9415 trimmedTimeRange;
@property (nonatomic) struct CGImage *overridePhoto;
@property (nonatomic) CDStruct_1b6d18a9 seekTime;
@property (nonatomic, readonly, getter=isDisplayingPhoto) _Bool displayingPhoto;
@property (weak, nonatomic) id <PHLivePhotoViewDelegate> delegate;
@property (retain, nonatomic) PHLivePhoto *livePhoto;
@property (nonatomic, getter=isMuted) _Bool muted;
@property (nonatomic, readonly) UIGestureRecognizer *playbackGestureRecognizer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)livePhotoBadgeImageWithOptions:(unsigned long long)arg1;

- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setContentMode:(long long)arg1;
- (void)stopPlayback;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)startPlaybackWithStyle:(long long)arg1;
- (id)generateSnapshotImage;
- (void)_commonPHLivePhotoViewInitialization;
- (void)_updatePlayerAudioEnabled;
- (void)_updatePlayingVitality;
- (void)_updateStatusBorder;
- (void)_updateCurrentPlaybackStyleAndSeeking;
- (void)_playerDidBeginHinting;
- (void)_updatePlayerTargetReadiness;
- (void)_handlePlayerItemStatusChanged;

@end
