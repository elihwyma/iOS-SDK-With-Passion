/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <GameCenterUI/GKExtensionRemoteViewController.h>

@class GKGame, GKHostedAuthenticateViewController, NSString;

@interface GKAuthenticateHostViewController : GKExtensionRemoteViewController

{
    GKHostedAuthenticateViewController *_delegateWeak;
}

@property (nonatomic) GKHostedAuthenticateViewController *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) GKGame *game;

+ (_Bool)dismissAutomaticallyAfterExtensionCompletion;
+ (id)authenticateExtension;

- (void)dealloc;
- (void)viewDidLoad;
- (void)applicationWillTerminate:(id)arg1;
- (void)messageFromExtension:(id)arg1;
- (void)extensionIsCanceling;
- (void)extensionIsFinishing;

@end
