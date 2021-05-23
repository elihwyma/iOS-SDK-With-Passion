/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <GameCenterFoundation/GKAchievement.h>

@interface GKAchievement (Sharing)

+ (void)reportAchievements:(id)arg1 withEligibleChallenges:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;

- (id)imageURL;
- (id)activityViewControllerPlaceholderItems:(id)arg1;
- (id)activityViewController:(id)arg1 thumbnailForActivityType:(id)arg2;
- (long long)activityViewController:(id)arg1 attachmentULRTypeForActivityType:(id)arg2;
- (id)activityViewControllerSubject:(id)arg1;
- (id)activityViewController:(id)arg1 itemsForActivityType:(id)arg2;
- (id)activityViewControllerOperation:(id)arg1;
- (_Bool)canBeShared;
- (void)loadImageWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_gkSetSharingInfo:(id)arg1;
- (id)fetchSharingInfo;
- (id)_gkSharingInfo;
- (void)showBanner;
- (id)challengeComposeControllerWithMessage:(id)arg1 players:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)challengeComposeControllerWithPlayers:(id)arg1 message:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)issueChallengeToPlayers:(id)arg1 message:(id)arg2;
- (void)selectChallengeablePlayers:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)selectChallengeablePlayerIDs:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;

@end
