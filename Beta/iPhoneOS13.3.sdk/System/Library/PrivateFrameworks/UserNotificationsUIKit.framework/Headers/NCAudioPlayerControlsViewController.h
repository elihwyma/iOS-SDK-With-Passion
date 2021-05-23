/*
 Image: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
 */

#import <UIKit/UIViewController.h>

@class NCAudioPlayerController, NCAudioPlayerControlsView, NSString, NSURL;

@interface NCAudioPlayerControlsViewController : UIViewController

{
    NSURL *_URL;
    NCAudioPlayerController *_playerController;
    NCAudioPlayerControlsView *_playerControlsView;
}

@property (retain, nonatomic) NCAudioPlayerController *playerController;
@property (retain, nonatomic) NCAudioPlayerControlsView *playerControlsView;
@property (retain, nonatomic) NSURL *URL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (_Bool)_canShowWhileLocked;
- (void)detailSliderTrackingDidBegin:(id)arg1;
- (void)detailSliderTrackingDidEnd:(id)arg1;
- (void)detailSliderTrackingDidCancel:(id)arg1;
- (void)detailSlider:(id)arg1 didChangeValue:(float)arg2;
- (void)playerController:(id)arg1 didChangeToCurrentTime:(float)arg2;
- (void)playerController:(id)arg1 didChangeToDuration:(double)arg2;
- (void)playerController:(id)arg1 didChangeToPlaybackState:(long long)arg2;
- (void)playerController:(id)arg1 didChangeToStatus:(long long)arg2;
- (void)playerController:(id)arg1 didSeekToTime:(float)arg2;
- (void)playbackControls:(id)arg1 didRequestState:(long long)arg2;

@end
