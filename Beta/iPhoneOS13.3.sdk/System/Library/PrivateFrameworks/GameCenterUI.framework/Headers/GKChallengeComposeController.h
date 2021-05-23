/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <GameCenterUI/GKSimpleComposeController.h>

@class GKChallenge, GKComposeHeaderField, NSArray;

@interface GKChallengeComposeController : GKSimpleComposeController

{
    GKComposeHeaderField *_challengeField;
    GKChallenge *_challenge;
    NSArray *_playersToLoad;
}

@property (retain, nonatomic) GKComposeHeaderField *challengeField;
@property (retain, nonatomic) GKChallenge *challenge;
@property (retain, nonatomic) NSArray *playersToLoad;

+ (id)friendPickerFlowForChallenge:(id)arg1 selectPlayers:(id)arg2 defaultMessage:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
+ (id)composeFlowForChallenge:(id)arg1 players:(id)arg2 defaultMessage:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
+ (void)composeAndSendFlowForChallenge:(id)arg1 selectPlayers:(id)arg2 defaultMessage:(id)arg3 forcePicker:(_Bool)arg4 readyHandler:(CDUnknownBlockType)arg5 completionHandler:(CDUnknownBlockType)arg6;

- (id)init;
- (void)dealloc;
- (void)cancel;
- (void)loadView;
- (void)viewWillAppear:(_Bool)arg1;
- (void)donePressed;
- (id)initWithChallenge:(id)arg1 defaultMessage:(id)arg2 players:(id)arg3;
- (void)updateChallengeText;

@end
