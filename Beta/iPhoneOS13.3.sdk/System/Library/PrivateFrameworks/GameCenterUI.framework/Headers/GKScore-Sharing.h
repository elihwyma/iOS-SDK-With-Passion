/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <GameCenterFoundation/GKScore.h>

@interface GKScore (Sharing)

+ (void)reportScores:(id)arg1 withEligibleChallenges:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;

- (id)activityViewControllerPlaceholderItems:(id)arg1;
- (id)activityViewController:(id)arg1 thumbnailForActivityType:(id)arg2;
- (long long)activityViewController:(id)arg1 attachmentULRTypeForActivityType:(id)arg2;
- (id)activityViewControllerSubject:(id)arg1;
- (id)activityViewController:(id)arg1 itemsForActivityType:(id)arg2;
- (id)activityViewControllerOperation:(id)arg1;
- (_Bool)canBeShared;
- (void)_gkSetSharingInfo:(id)arg1;
- (id)fetchSharingInfo;
- (id)_gkSharingInfo;
- (id)challengeComposeControllerWithMessage:(id)arg1 players:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)challengeComposeControllerWithPlayers:(id)arg1 message:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)issueChallengeToPlayers:(id)arg1 message:(id)arg2;

@end
