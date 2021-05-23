/*
 Image: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
 */

#import <UserNotificationsUIKit/NCAttachmentViewController.h>

@class AVPlayerViewController, NCMediaPlayPauseButton;

@interface NCVideoAttachmentViewController : NCAttachmentViewController

{
    AVPlayerViewController *_playerViewController;
    NCMediaPlayPauseButton *_playPauseButton;
    struct CGSize _contentSize;
}

@property (retain, nonatomic) AVPlayerViewController *playerViewController;
@property (retain, nonatomic) NCMediaPlayPauseButton *playPauseButton;
@property (nonatomic) struct CGSize contentSize;

- (void)dealloc;
- (void)viewDidLoad;
- (_Bool)_canShowWhileLocked;
- (void)viewDidLayoutSubviews;
- (void)_pause;
- (void)_play;
- (void)_mediaPlayPauseButtonTapped:(id)arg1;
- (id)initWithAttachment:(id)arg1 forNotificationRequest:(id)arg2;
- (void)handlePlayerItemDidPlayToEndTimeNotification:(id)arg1;
- (void)handlePlayerItemFailedToPlayToEndTimeNotification:(id)arg1;
- (struct CGSize)_sizeForVideoAsset:(id)arg1;
- (void)_mediaPlayPauseButtonUpdateSize;
- (void)_rewind;

@end
