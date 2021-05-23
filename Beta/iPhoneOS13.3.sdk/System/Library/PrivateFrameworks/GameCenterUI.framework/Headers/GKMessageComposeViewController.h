/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <UIKit/UIViewController.h>

@class GKTournament, MFMessageComposeViewController, NSArray, NSDictionary, NSMutableArray, NSString, NSURL;

@protocol GKDashboardNearbyBrowserDelegate, GKMessageComposeViewControllerDelegate;

@interface GKMessageComposeViewController : UIViewController

{
    NSURL *_shareURL;
    id <GKMessageComposeViewControllerDelegate> _delegate;
    id <GKDashboardNearbyBrowserDelegate> _nearbyDelegate;
    GKTournament *_tournament;
    long long _maximumSelectablePlayersForPicker;
    NSArray *_currentlySelectedPlayersForPicker;
    MFMessageComposeViewController *_composeController;
    NSDictionary *_playerNamesToPlayers;
    NSString *_messageToSend;
    NSMutableArray *_friendsToInvite;
    NSMutableArray *_contactsToInvite;
}

@property (retain, nonatomic) MFMessageComposeViewController *composeController;
@property (retain, nonatomic) NSDictionary *playerNamesToPlayers;
@property (retain, nonatomic) NSString *messageToSend;
@property (retain, nonatomic) NSMutableArray *friendsToInvite;
@property (retain, nonatomic) NSMutableArray *contactsToInvite;
@property (retain, nonatomic) NSURL *shareURL;
@property (weak, nonatomic) id <GKMessageComposeViewControllerDelegate> delegate;
@property (weak, nonatomic) id <GKDashboardNearbyBrowserDelegate> nearbyDelegate;
@property (retain, nonatomic) GKTournament *tournament;
@property (nonatomic) long long maximumSelectablePlayersForPicker;
@property (retain, nonatomic) NSArray *currentlySelectedPlayersForPicker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)canSendText;

- (void)messageComposeViewController:(id)arg1 didFinishWithResult:(long long)arg2;
- (void)messageComposeViewController:(id)arg1 shouldSendMessage:(id)arg2 toRecipients:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)preparePresentationForMinPlayers:(long long)arg1 maxPlayers:(long long)arg2 shareURL:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)setupPickerBlock;
- (void)showPlayerPickerForCompose;
- (id)contactForAddress:(id)arg1 fromContactStore:(id)arg2;
- (id)initWithMessage:(id)arg1 maxNumberOfPlayers:(long long)arg2;

@end
