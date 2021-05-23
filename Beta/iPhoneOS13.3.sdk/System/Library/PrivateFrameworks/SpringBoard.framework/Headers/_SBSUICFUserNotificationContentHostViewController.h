/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <UIKit/_UIRemoteViewController.h>

@class NSString, SBUserNotificationAlert;

@interface _SBSUICFUserNotificationContentHostViewController : _UIRemoteViewController

{
    SBUserNotificationAlert *_userNotification;
}

@property (weak, nonatomic) SBUserNotificationAlert *userNotification;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

- (_Bool)_canShowWhileLocked;
- (void)configureWithCompletion:(CDUnknownBlockType)arg1;
- (void)invalidateWithCompletion:(CDUnknownBlockType)arg1;

@end
