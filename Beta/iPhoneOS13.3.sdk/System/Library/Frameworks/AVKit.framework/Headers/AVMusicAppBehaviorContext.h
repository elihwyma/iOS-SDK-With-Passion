/*
 Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

#import <NSObject.h>

#import <AVKit/Swift-Protocol.h>

@class AVMusicAppBehavior, AVObservationController, AVPlayerController, AVPlayerViewController, NSNumber, NSString;

@interface AVMusicAppBehaviorContext : NSObject <Swift>

{
    _Bool _showsSkipItemButtons;
    _Bool _skipToPreviousItemButtonEnabled;
    _Bool _skipToNextItemButtonEnabled;
    _Bool _scrubbing;
    AVPlayerViewController *_playerViewController;
    AVMusicAppBehavior *_behavior;
    AVObservationController *_observationController;
    AVPlayerController *_playerController;
    NSNumber *_seekTargetTime;
}

@property (weak, nonatomic) AVMusicAppBehavior *behavior;
@property (nonatomic, readonly) AVObservationController *observationController;
@property (retain, nonatomic) AVPlayerController *playerController;
@property (nonatomic, getter=isScrubbing) _Bool scrubbing;
@property (retain, nonatomic) NSNumber *seekTargetTime;
@property (nonatomic) _Bool showsSkipItemButtons;
@property (nonatomic, getter=isSkipToPreviousItemButtonEnabled) _Bool skipToPreviousItemButtonEnabled;
@property (nonatomic, getter=isSkipToNextItemButtonEnabled) _Bool skipToNextItemButtonEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic, readonly) AVPlayerViewController *playerViewController;

- (void)dealloc;
- (void)viewDidLoad;
- (void)playerViewController:(id)arg1 didCollectMetricsEvent:(long long)arg2;
- (id)initWithAVKitOwner:(id)arg1;
- (void)willAddBehavior:(id)arg1;
- (void)didAddBehavior:(id)arg1;
- (void)willRemoveBehavior:(id)arg1;
- (void)didRemoveBehavior:(id)arg1;
- (void)_updateSkipItemButtonsEnabled;

@end
