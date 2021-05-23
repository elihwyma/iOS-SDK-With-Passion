/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <GameCenterUI/GKExtensionHostViewController.h>

@class GKTournamentViewRequest, NSString;

@interface GKTournamentExtensionHostViewController : GKExtensionHostViewController

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) GKTournamentViewRequest *viewRequest;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

- (oneway void)setupWithViewRequest:(id)arg1;
- (oneway void)initializeWithLocalPlayer:(id)arg1 hostPID:(int)arg2 reply:(CDUnknownBlockType)arg3;
- (oneway void)playTournament:(id)arg1 withTryToken:(id)arg2;
- (id)tournamentHostViewController;

@end
