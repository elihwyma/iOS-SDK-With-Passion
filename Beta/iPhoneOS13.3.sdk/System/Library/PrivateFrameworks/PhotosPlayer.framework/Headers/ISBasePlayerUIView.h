/*
 Image: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
 */

#import <UIKit/UIView.h>

@class ISBasePlayer, ISPlayerOutputContent, ISVideoPlayerUIView, ISWrappedAVAudioSession, NSObject, NSString, UIImage, UIImageView;

@protocol ISBasePlayerUIViewChangeObserver, OS_dispatch_queue;

@interface ISBasePlayerUIView : UIView

{
    NSObject<OS_dispatch_queue> *_audioSessionQueue;
    ISPlayerOutputContent *_content;
    struct {
        _Bool didChangeWithAnimationDuration;
    } _changeObserverRespondsTo;
    ISBasePlayer *_player;
    UIView *_customPhotoView;
    UIImage *_overrideImage;
    CDUnknownBlockType _videoLayerReadyForDisplayChangeHandler;
    UIImageView *__photoView;
    ISVideoPlayerUIView *__videoView;
    UIView *__containerView;
    ISWrappedAVAudioSession *_wrappedAudioSession;
    id <ISBasePlayerUIViewChangeObserver> __changeObserver;
    struct CGPoint _scaleAnchorOffset;
    struct CGRect _contentsRect;
}

@property (nonatomic, readonly) UIImageView *_photoView;
@property (nonatomic, readonly) ISVideoPlayerUIView *_videoView;
@property (nonatomic, readonly) UIView *_containerView;
@property (retain, nonatomic, setter=_setWrappedAudioSession:) ISWrappedAVAudioSession *wrappedAudioSession;
@property (weak, nonatomic, setter=_setChangeObserver:) id <ISBasePlayerUIViewChangeObserver> _changeObserver;
@property (retain, nonatomic) ISBasePlayer *player;
@property (nonatomic) struct CGPoint scaleAnchorOffset;
@property (retain, nonatomic) UIView *customPhotoView;
@property (retain, nonatomic) UIImage *overrideImage;
@property (nonatomic, readonly, getter=isDisplayingPhoto) _Bool displayingPhoto;
@property (nonatomic) struct CGRect contentsRect;
@property (copy, nonatomic) CDUnknownBlockType videoLayerReadyForDisplayChangeHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool isVideoReadyForDisplay;

+ (Class)playerClass;

- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setContentMode:(long long)arg1;
- (void)layoutSubviews;
- (void)contentDidChange;
- (void)setContent:(id)arg1;
- (void)_updatePhotoView;
- (void)registerChangeObserver:(id)arg1;
- (void)unregisterChangeObserver:(id)arg1;
- (void)_performCommonInitialization;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (id)generateSnapshotImage;
- (void)playerDidChange;
- (void)applyScale:(double)arg1 withTransitionOptions:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)applyOutputInfo:(id)arg1 withTransitionOptions:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)audioSessionDidChange;
- (void)_videoViewReadyForDisplayDidChange;
- (void)_updatePlayerAudioSession;
- (void)_signalChange:(unsigned long long)arg1 withAnimationDuration:(double)arg2;

@end
