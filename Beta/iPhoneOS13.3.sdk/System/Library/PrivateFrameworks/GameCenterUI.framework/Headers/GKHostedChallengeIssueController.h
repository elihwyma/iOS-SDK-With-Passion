/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <UIKit/UIViewController.h>

@class GKChallenge, GKChallengeIssueHostViewController, NSArray, NSString;

@interface GKHostedChallengeIssueController : UIViewController

{
    _Bool _forcePicker;
    GKChallengeIssueHostViewController *_remoteViewController;
    NSArray *_players;
    NSString *_defaultMessage;
    GKChallenge *_challenge;
    CDUnknownBlockType _completionHandler;
    CDUnknownBlockType _receivedRemoteHandler;
    CDUnknownBlockType _dismissCompletionHandler;
}

@property (retain, nonatomic) NSArray *players;
@property (copy, nonatomic) NSString *defaultMessage;
@property (retain, nonatomic) GKChallenge *challenge;
@property (nonatomic) _Bool forcePicker;
@property (copy, nonatomic) CDUnknownBlockType completionHandler;
@property (retain, nonatomic) GKChallengeIssueHostViewController *remoteViewController;
@property (copy, nonatomic) CDUnknownBlockType receivedRemoteHandler;
@property (copy, nonatomic) CDUnknownBlockType dismissCompletionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)_preventsAppearanceProxyCustomization;
+ (id)presentationQueue;
+ (id)hostedIssueControllerWithChallenge:(id)arg1 players:(id)arg2 defaultMessage:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
+ (void)presentHostedIssueControllerWithChallenge:(id)arg1 players:(id)arg2 defaultMessage:(id)arg3;

- (void)dealloc;
- (_Bool)shouldAutomaticallyForwardAppearanceMethods;
- (_Bool)shouldAutomaticallyForwardRotationMethods;
- (_Bool)automaticallyForwardAppearanceAndRotationMethodsToChildViewControllers;
- (void)_setupRemoteViewController;
- (void)_setupChildViewController;
- (void)extensionDidFinishWithError:(id)arg1;
- (void)doneWithPlayers:(id)arg1 message:(id)arg2;
- (id)initWithChallenge:(id)arg1 players:(id)arg2 defaultMessage:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;

@end
