/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <UIKit/UIViewController.h>

@class GKExtensionManager, GKScore, GKTournament, GKTournamentDefinition, GKTournamentViewRequest, NSString, UIAlertController;

@protocol GKTournamentViewControllerDelegate;

@interface GKTournamentViewController : UIViewController

{
    _Bool _playerResigned;
    GKTournament *_tournament;
    GKTournamentDefinition *_tournamentDefinition;
    id <GKTournamentViewControllerDelegate> _delegate;
    GKExtensionManager *_extensionManager;
    UIAlertController *_alertController;
    NSString *_tournamentID;
    GKScore *_playerScore;
    GKTournamentViewRequest *_viewRequest;
}

@property (retain, nonatomic) GKExtensionManager *extensionManager;
@property (retain, nonatomic) UIAlertController *alertController;
@property (retain, nonatomic) NSString *tournamentID;
@property (retain, nonatomic) GKScore *playerScore;
@property (nonatomic) _Bool playerResigned;
@property (retain, nonatomic) GKTournamentViewRequest *viewRequest;
@property (nonatomic, readonly) GKTournament *tournament;
@property (retain, nonatomic) GKTournamentDefinition *tournamentDefinition;
@property (weak, nonatomic) id <GKTournamentViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dismissViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)didReceiveMemoryWarning;
- (void)loadRemoteView;
- (oneway void)extensionWillFinish;
- (oneway void)extensionDidTerminateWithError:(id)arg1;
- (oneway void)playTournament:(id)arg1 withTryToken:(id)arg2;
- (void)willFinishWithError:(id)arg1;
- (id)initWithViewRequest:(id)arg1;

@end
