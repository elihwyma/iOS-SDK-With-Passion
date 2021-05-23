/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <GameCenterUI/GKExtensionRemoteViewController.h>

@class GKGame, GKMatchmakerViewController, NSString;

@interface GKMatchmakerHostViewController : GKExtensionRemoteViewController

{
    GKMatchmakerViewController *_delegateWeak;
}

@property (nonatomic) GKMatchmakerViewController *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) GKGame *game;

+ (_Bool)dismissAutomaticallyAfterExtensionCompletion;
+ (id)matchmakerExtension;

- (void)dealloc;
- (void)applicationWillEnterForeground;
- (void)setHosted:(_Bool)arg1;
- (void)messageFromExtension:(id)arg1;
- (void)setAutomatchPlayerCount:(long long)arg1;
- (void)setExistingPlayers:(id)arg1;
- (void)setPlayer:(id)arg1 responded:(long long)arg2;
- (void)setPlayer:(id)arg1 connected:(_Bool)arg2;
- (void)setPlayer:(id)arg1 sentData:(id)arg2;
- (void)setInvitesFailedWithError:(id)arg1;
- (void)setAutomatchFailedWithError:(id)arg1;
- (void)setFailedWithError:(id)arg1;
- (void)inviterCancelled;
- (void)extensionIsCanceling;
- (id)extensionObjectProxy;
- (void)setDefaultInvitationMessage:(id)arg1;
- (void)setNearbyPlayer:(id)arg1 reachable:(_Bool)arg2;
- (void)shareMatchWithRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)setMatchRequestInternal:(id)arg1;
- (void)setAcceptedInviteInternal:(id)arg1;

@end
