/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <Foundation/NSExtensionContext.h>

#import <GameCenterUI/Swift-Protocol.h>

@class GKExtensionRemoteViewController, GKGame, NSString;

@interface GKExtensionHostContext : NSExtensionContext <Swift>

{
    GKGame *_game;
    GKExtensionRemoteViewController *_remoteViewControllerWeak;
}

@property (nonatomic) GKExtensionRemoteViewController *remoteViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) GKGame *game;

- (void)dealloc;
- (void)messageFromExtension:(id)arg1;

@end
