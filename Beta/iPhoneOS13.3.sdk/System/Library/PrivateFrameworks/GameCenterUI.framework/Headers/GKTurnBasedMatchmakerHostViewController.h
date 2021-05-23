/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <GameCenterUI/GKExtensionRemoteViewController.h>

@class GKGame, GKTurnBasedMatchmakerViewController, NSString;

@interface GKTurnBasedMatchmakerHostViewController : GKExtensionRemoteViewController

{
    GKTurnBasedMatchmakerViewController *_delegateWeak;
}

@property (nonatomic) GKTurnBasedMatchmakerViewController *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) GKGame *game;

+ (id)turnBasedMatchmakerExtension;
+ (_Bool)dismissAutomaticallyAfterExtensionCompletion;

- (void)dealloc;
- (void)messageFromExtension:(id)arg1;
- (void)refreshMatches;
- (void)setShowExistingMatches:(_Bool)arg1;
- (void)extensionIsCanceling;
- (id)extensionObjectProxy;
- (void)setMatchRequestInternal:(id)arg1;
- (void)setShowPlay:(_Bool)arg1;
- (void)setShowQuit:(_Bool)arg1;

@end
