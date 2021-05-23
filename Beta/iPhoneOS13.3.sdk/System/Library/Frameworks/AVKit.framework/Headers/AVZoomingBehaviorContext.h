/*
 Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

#import <NSObject.h>

#import <AVKit/Swift-Protocol.h>

@class AVObservationController, AVPlaybackContentContainerView, AVPlaybackContentZoomingView, AVPlayerViewController, AVZoomingBehavior, NSString, UITapGestureRecognizer;

__attribute__((visibility("hidden")))
@interface AVZoomingBehaviorContext : NSObject <Swift>

{
    _Bool _zoomingEnabled;
    AVPlayerViewController *_playerViewController;
    AVZoomingBehavior *_behavior;
    AVPlaybackContentZoomingView *_contentZoomingView;
    AVObservationController *_observationController;
    UITapGestureRecognizer *_doubleTapGestureRecognizer;
    struct CGSize _contentAspectRatio;
}

@property (weak, nonatomic) AVZoomingBehavior *behavior;
@property (retain, nonatomic) AVPlaybackContentZoomingView *contentZoomingView;
@property (retain, nonatomic) AVObservationController *observationController;
@property (retain, nonatomic) UITapGestureRecognizer *doubleTapGestureRecognizer;
@property (nonatomic, readonly) AVPlaybackContentContainerView *activeContentView;
@property (nonatomic, getter=isZoomingEnabled) _Bool zoomingEnabled;
@property (nonatomic) struct CGSize contentAspectRatio;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic, readonly) AVPlayerViewController *playerViewController;

- (void)dealloc;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)viewDidLoad;
- (id)makePlaybackContentContainerWithFrame:(struct CGRect)arg1 activeContentView:(id)arg2;
- (id)initWithAVKitOwner:(id)arg1;
- (void)willAddBehavior:(id)arg1;
- (void)didAddBehavior:(id)arg1;
- (void)willRemoveBehavior:(id)arg1;
- (void)didRemoveBehavior:(id)arg1;
- (void)_handleDoubleTapGestureRecognizer:(id)arg1;
- (void)_updateZoomingView;

@end
