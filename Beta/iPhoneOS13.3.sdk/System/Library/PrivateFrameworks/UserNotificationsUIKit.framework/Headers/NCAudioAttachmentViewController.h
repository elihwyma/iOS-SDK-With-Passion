/*
 Image: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
 */

#import <UserNotificationsUIKit/NCAttachmentViewController.h>

@class NCAudioPlayerControlsViewController;

@interface NCAudioAttachmentViewController : NCAttachmentViewController

{
    NCAudioPlayerControlsViewController *_playerViewController;
}

@property (retain, nonatomic) NCAudioPlayerControlsViewController *playerViewController;

- (void)dealloc;
- (struct CGSize)contentSize;
- (void)viewDidLoad;
- (_Bool)_canShowWhileLocked;
- (unsigned long long)customContentLocation;
- (id)initWithAttachment:(id)arg1 forNotificationRequest:(id)arg2;

@end
