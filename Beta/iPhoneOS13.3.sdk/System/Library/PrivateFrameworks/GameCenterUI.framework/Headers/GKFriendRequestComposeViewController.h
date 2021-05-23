/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <UIKit/UINavigationController.h>

@class NSString, UIAlertController;

@protocol GKFriendRequestComposeViewControllerDelegate;

@interface GKFriendRequestComposeViewController : UINavigationController

{
    unsigned int _rid;
    id <GKFriendRequestComposeViewControllerDelegate> _composeViewDelegateWeak;
    NSString *_message;
    unsigned long long _recipientCount;
    UIAlertController *_alertController;
}

@property (copy, nonatomic) NSString *message;
@property (nonatomic) unsigned long long recipientCount;
@property (nonatomic) unsigned int rid;
@property (retain, nonatomic) UIAlertController *alertController;
@property (nonatomic) id <GKFriendRequestComposeViewControllerDelegate> composeViewDelegate;

+ (unsigned long long)maxNumberOfRecipients;
+ (_Bool)_preventsAppearanceProxyCustomization;

- (id)init;
- (void)dealloc;
- (void)viewWillAppear:(_Bool)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (_Bool)shouldAutomaticallyForwardAppearanceMethods;
- (_Bool)shouldAutomaticallyForwardRotationMethods;
- (_Bool)automaticallyForwardAppearanceAndRotationMethodsToChildViewControllers;
- (void)_setupChildViewController;
- (void)sendFinishedMessageToDelegateCancelled:(_Bool)arg1;
- (void)prepareForNewRecipients:(id)arg1;
- (void)_addRecipientInternals:(id)arg1;
- (void)addRecipientPlayers:(id)arg1;
- (void)addRecipientsWithPlayerIDs:(id)arg1;
- (void)addRecipientsWithEmailAddresses:(id)arg1;

@end
