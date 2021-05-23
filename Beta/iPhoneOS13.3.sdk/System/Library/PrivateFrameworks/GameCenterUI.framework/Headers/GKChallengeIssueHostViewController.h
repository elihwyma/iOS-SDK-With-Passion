/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <GameCenterUI/GKExtensionRemoteViewController.h>

@class GKGame, GKHostedChallengeIssueController, NSString;

@interface GKChallengeIssueHostViewController : GKExtensionRemoteViewController

{
    GKHostedChallengeIssueController *_delegateWeak;
}

@property (nonatomic) GKHostedChallengeIssueController *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) GKGame *game;

+ (id)challengeExtension;

- (void)dealloc;
- (void)messageFromExtension:(id)arg1;
- (void)extensionIsCanceling;
- (id)extensionObjectProxy;

@end
