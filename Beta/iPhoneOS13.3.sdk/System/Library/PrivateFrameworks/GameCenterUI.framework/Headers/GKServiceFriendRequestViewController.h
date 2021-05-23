/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <GameCenterUI/GKServiceViewController.h>

@class MFMessageComposeViewController, NSString;

@interface GKServiceFriendRequestViewController : GKServiceViewController

{
    _Bool _messageComposeSent;
    MFMessageComposeViewController *_composeController;
    NSString *_friendCode;
    NSString *_friendSupportPageURL;
}

@property (retain, nonatomic) MFMessageComposeViewController *composeController;
@property (retain, nonatomic) NSString *friendCode;
@property (retain, nonatomic) NSString *friendSupportPageURL;
@property (nonatomic) _Bool messageComposeSent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)viewWillAppear:(_Bool)arg1;
- (void)messageComposeViewController:(id)arg1 didFinishWithResult:(long long)arg2;
- (void)messageComposeViewController:(id)arg1 shouldSendMessage:(id)arg2 toRecipients:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)setInitialState:(id)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)constructPrivateViewController;
- (void)displayAlertWithTitle:(id)arg1 andMessage:(id)arg2;
- (_Bool)_useBackdropViewForWindowBackground;

@end
