/*
 Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

#import <NSObject.h>

@class AVObservationController, AVPictureInPicturePlatformAdapter, AVPictureInPictureViewController, AVPlayerController, AVPlayerLayer, NSString;

@protocol AVPictureInPictureContentSource, AVPictureInPictureControllerDelegate;

@interface AVPictureInPictureController : NSObject

{
    _Bool _pictureInPicturePossible;
    _Bool _pictureInPictureActive;
    _Bool _pictureInPictureSuspended;
    _Bool _otherPictureInPictureActive;
    _Bool _wantsImmediateAssetInspection;
    _Bool _retainsSourceDuringPictureInPicturePlayback;
    _Bool _allowsPictureInPicturePlayback;
    _Bool _allowsPictureInPictureFromInlineWhenEnteringBackground;
    _Bool _pictureInPictureWasStartedWhenEnteringBackground;
    long long _controlsStyle;
    AVPlayerLayer *_playerLayer;
    id <AVPictureInPictureControllerDelegate> _delegate;
    AVPictureInPicturePlatformAdapter *_platformAdapter;
    AVObservationController *_observationController;
    id <AVPictureInPictureContentSource> _sourceIfRetainedDuringPictureInPicturePlayback;
    id <AVPictureInPictureContentSource> _source;
    AVPlayerController *_playerController;
}

@property (nonatomic, readonly) AVPictureInPicturePlatformAdapter *platformAdapter;
@property (nonatomic, readonly) AVObservationController *observationController;
@property (retain, nonatomic) id <AVPictureInPictureContentSource> sourceIfRetainedDuringPictureInPicturePlayback;
@property (nonatomic, getter=isPictureInPicturePossible) _Bool pictureInPicturePossible;
@property (nonatomic, getter=isPictureInPictureActive) _Bool pictureInPictureActive;
@property (nonatomic, getter=isPictureInPictureSuspended) _Bool pictureInPictureSuspended;
@property (nonatomic, getter=isOtherPictureInPictureActive) _Bool otherPictureInPictureActive;
@property (nonatomic) _Bool wantsImmediateAssetInspection;
@property (weak, nonatomic, readonly) id <AVPictureInPictureContentSource> source;
@property (nonatomic, readonly) AVPictureInPictureViewController *pictureInPictureViewController;
@property (retain, nonatomic) AVPlayerController *playerController;
@property (nonatomic) _Bool retainsSourceDuringPictureInPicturePlayback;
@property (nonatomic) _Bool allowsPictureInPicturePlayback;
@property (nonatomic) _Bool allowsPictureInPictureFromInlineWhenEnteringBackground;
@property (nonatomic) _Bool pictureInPictureWasStartedWhenEnteringBackground;
@property (nonatomic, readonly) AVPlayerLayer *playerLayer;
@property (weak, nonatomic) id <AVPictureInPictureControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) long long controlsStyle;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (id)initWithSource:(id)arg1;
- (void)startPictureInPicture;
- (void)stopPictureInPicture;
- (id)initWithPlayerLayer:(id)arg1;
- (void)pictureInPicturePlatformAdapter:(id)arg1 failedToStartError:(id)arg2;
- (void)pictureInPicturePlatformAdapter:(id)arg1 prepareToStopForRestoringUserInterface:(CDUnknownBlockType)arg2;
- (void)pictureInPicturePlatformAdapterPrepareToStopForDismissal:(id)arg1;
- (void)pictureInPicturePlatformAdapter:(id)arg1 stopPictureInPictureAndRestoreUserInterface:(_Bool)arg2;
- (void)pictureInPicturePlatformAdapter:(id)arg1 handlePlaybackCommand:(long long)arg2;
- (void)pictureInPicturePlatformAdapter:(id)arg1 statusDidChange:(long long)arg2 fromStatus:(long long)arg3;
- (void)_commonInitWithSource:(id)arg1;
- (void)stopPictureInPictureEvenWhenInBackground;
- (void)contentSourceVideoRectInWindowChanged;
- (id)_delegateIfRespondsToSelector:(SEL)arg1;
- (void)_stopPictureInPictureAndRestoreUserInterface:(_Bool)arg1;

@end
