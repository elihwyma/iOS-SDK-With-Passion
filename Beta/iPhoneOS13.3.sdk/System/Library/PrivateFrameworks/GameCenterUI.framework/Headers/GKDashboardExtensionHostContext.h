/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <GameCenterUI/GKExtensionHostContext.h>

@class GKGame, NSString;

@interface GKDashboardExtensionHostContext : GKExtensionHostContext

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) GKGame *game;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void)requestImagesForLeaderboardsInSet:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)getMethodsImplementedByChallengeEventHandlerDelegate:(CDUnknownBlockType)arg1;
- (void)requestDashboardLogoImageWithHandler:(CDUnknownBlockType)arg1;
- (void)requestImagesForLeaderboardSetsWithHandler:(CDUnknownBlockType)arg1;

@end
