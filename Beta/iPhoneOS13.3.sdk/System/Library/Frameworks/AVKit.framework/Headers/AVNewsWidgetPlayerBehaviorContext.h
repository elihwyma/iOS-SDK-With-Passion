/*
 Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

#import <NSObject.h>

#import <AVKit/Swift-Protocol.h>

@class AVNewsWidgetPlayerBehavior, AVPlaybackContentTransitioningView, AVPlayer, AVPlayerViewController, NSString, UIView;

@interface AVNewsWidgetPlayerBehaviorContext : NSObject <Swift>

{
    _Bool _startNextContentTransitionButtonEnabled;
    _Bool _startPreviousContentTransitionButtonEnabled;
    AVPlayerViewController *_playerViewController;
    AVNewsWidgetPlayerBehavior *_behavior;
    AVPlayer *_contentTransitioningPlayer;
    UIView *_customContentTransitioningInfoPanel;
    AVPlaybackContentTransitioningView *_contentTransitionView;
}

@property (retain, nonatomic) AVPlayer *contentTransitioningPlayer;
@property (retain, nonatomic) AVPlaybackContentTransitioningView *contentTransitionView;
@property (weak, nonatomic) AVNewsWidgetPlayerBehavior *behavior;
@property (nonatomic, readonly) long long activeContentTransitionType;
@property (nonatomic, readonly, getter=isContentTransitionInteractive) _Bool contentTransitionInteractive;
@property (nonatomic, readonly) UIView *contentTransitioningOverlayView;
@property (nonatomic, getter=isStartNextContentTransitionButtonEnabled) _Bool startNextContentTransitionButtonEnabled;
@property (nonatomic, getter=isStartPreviousContentTransitionButtonEnabled) _Bool startPreviousContentTransitionButtonEnabled;
@property (retain, nonatomic) UIView *customContentTransitioningInfoPanel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic, readonly) AVPlayerViewController *playerViewController;

- (void)viewDidLoad;
- (id)makePlaybackContentContainerWithFrame:(struct CGRect)arg1 activeContentView:(id)arg2;
- (id)initWithAVKitOwner:(id)arg1;
- (void)willAddBehavior:(id)arg1;
- (void)didAddBehavior:(id)arg1;
- (void)willRemoveBehavior:(id)arg1;
- (void)didRemoveBehavior:(id)arg1;
- (_Bool)contentTransitioningViewShouldBeginDragging:(id)arg1 locationInView:(struct CGPoint)arg2;
- (_Bool)contentTransitioningView:(id)arg1 shouldBeginTransitionWithDirection:(long long)arg2;
- (id)contentTransitioningPlayerContentViewForTransition:(id)arg1;
- (void)contentTransitioningViewDidChangeTransitionStatus:(id)arg1 oldState:(long long)arg2 oldTransitionDirection:(long long)arg3 oldProgress:(double)arg4;
- (void)setVideoGravityForTransitioningContent:(id)arg1;
- (void)startContentTransition:(long long)arg1;
- (long long)_transitionDirectionForContentTransitionType:(long long)arg1;
- (void)updateStartLeftRightContentTransitionButtonsEnabled;
- (long long)contentTransitionTypeForTransitionDirection:(long long)arg1;

@end
