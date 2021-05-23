/*
 Image: /System/Library/PrivateFrameworks/ReminderKitUI.framework/ReminderKitUI
 */

#import <UIKit/_UIRemoteViewController.h>

@class UIViewController;

@protocol REMReminderCreationPublicViewController, REMReminderCreationViewServiceViewController;

@interface REMReminderCreationRemoteViewController : _UIRemoteViewController

{
    UIViewController<REMReminderCreationPublicViewController> *_publicViewController;
}

@property (weak, nonatomic) UIViewController<REMReminderCreationPublicViewController> *publicViewController;
@property (nonatomic, readonly, getter=viewServiceViewController) id <REMReminderCreationViewServiceViewController> viewServiceViewController;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

- (void)viewServiceDidTerminateWithError:(id)arg1;
- (void)viewServicePreferredSizeDidChange:(struct CGSize)arg1;
- (void)viewServiceDidFailWithError:(id)arg1;
- (void)viewHostDidDismiss;
- (void)viewServiceDidCancel;
- (void)viewServiceDidFinish;

@end
