/*
 Image: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
 */

#import <PhotosPlayer/ISBasePlayerUIView.h>

@class ISLivePhotoPlayer, ISTouchLivePhotoPlaybackFilter, NSString, UIGestureRecognizer, UIImpactFeedbackGenerator, UILabel;

@interface ISLivePhotoUIView : ISBasePlayerUIView

{
    UIImpactFeedbackGenerator *_feedbackGenerator;
    _Bool __playingVitality;
    UIGestureRecognizer *_playbackGestureRecognizer;
    ISTouchLivePhotoPlaybackFilter *__playbackFilter;
    UILabel *__overlayLabel;
    long long __overlayDismissalID;
}

@property (retain, nonatomic, setter=_setPlaybackFilter:) ISTouchLivePhotoPlaybackFilter *_playbackFilter;
@property (nonatomic, setter=_setPlayingVitality:) _Bool _playingVitality;
@property (nonatomic, readonly) UILabel *_overlayLabel;
@property (nonatomic, setter=_setOverlayDismissalID:) long long _overlayDismissalID;
@property (retain, nonatomic) ISLivePhotoPlayer *player;
@property (nonatomic, readonly) UIGestureRecognizer *playbackGestureRecognizer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)contentDidChange;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (id)livePhotoPlayer;
- (void)audioSessionDidChange;
- (void)_ISLivePhotoUIViewCommonInitialization;
- (void)_handlePlaybackRecognizer:(id)arg1;
- (void)_updatePlaybackFilterInput;
- (void)_updatePlaybackFilter;
- (void)_showOverlayLabel;
- (void)_dismissOverlayLabel:(long long)arg1;
- (void)_playerDidChangePlaybackStyle;
- (void)_playerDidChangeHinting;
- (void)_updateGestureRecognizerParameters;

@end
