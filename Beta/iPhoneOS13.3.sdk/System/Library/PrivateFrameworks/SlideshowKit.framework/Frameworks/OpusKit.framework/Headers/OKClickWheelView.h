/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
 */

#import <OpusFoundation/OFUIView.h>

@class CAShapeLayer, NSOperationQueue, NSString, OFUIButton, OKAudioPlaylist, OKCircleGestureRecognizer, OKPresentationViewAllGestureRecognizer, UIGestureRecognizer, UIImageView, UILabel;

@protocol OKClickWheelViewDelegate;

@interface OKClickWheelView : OFUIView

{
    OFUIView *_containerView;
    OFUIButton *_playButton;
    _Bool _isAnimating;
    UIGestureRecognizer *_tapGestureRecognizer;
    OKCircleGestureRecognizer *_circleGestureRecognizer;
    OKPresentationViewAllGestureRecognizer *_allGestureRecognizer;
    _Bool _delegateRespondToDidCircleGesture;
    _Bool _delegateRespondWillAppear;
    _Bool _delegateRespondWillDisappear;
    _Bool _delegateRespondShouldAppear;
    CAShapeLayer *_volumeLayer;
    CAShapeLayer *_progressLayer;
    OFUIView *_musicInformationView;
    UIImageView *_thumbnailMusic;
    UILabel *_titleMusic;
    UILabel *_artisteName;
    UILabel *_beatsSentence;
    UIImageView *_chevronView;
    NSOperationQueue *_fetchInformationsQueue;
    _Bool _isInformationLoaded;
    OFUIButton *_closeButton;
    _Bool _wantsProgress;
    id <OKClickWheelViewDelegate> _delegate;
    double _volume;
    double _progress;
    OKAudioPlaylist *_audioPlaylist;
}

@property (nonatomic) _Bool wantsProgress;
@property (nonatomic) id <OKClickWheelViewDelegate> delegate;
@property (nonatomic) double progress;
@property (nonatomic) double volume;
@property (nonatomic) OKAudioPlaylist *audioPlaylist;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)layoutSubviews;
- (void)show;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)hide;
- (void)buttonPressed:(id)arg1;
- (void)handleLongPress:(id)arg1;
- (_Bool)isPresented;
- (id)initWithContainerView:(id)arg1 andAuthoringGuidelines:(id)arg2;
- (void)audioStartedPlayingWithAVAsset:(id)arg1;
- (void)audioFinishedPlayingWithAVAsset:(id)arg1;
- (void)initGesture;
- (void)initButtons;
- (void)initAlbumInformationView;
- (void)_setupLayerShadowForLabel:(id)arg1;
- (void)closeButtonPressed:(id)arg1;
- (void)notifyProgress:(id)arg1;
- (void)handleAllGestures:(id)arg1;
- (void)updateMusicInformation:(id)arg1;
- (id)animationForKeyPath:(id)arg1 fromValue:(id)arg2 toValue:(id)arg3 duration:(double)arg4 timmingFunctionName:(id)arg5 delegate:(id)arg6;
- (void)activateProgress:(id)arg1;

@end
