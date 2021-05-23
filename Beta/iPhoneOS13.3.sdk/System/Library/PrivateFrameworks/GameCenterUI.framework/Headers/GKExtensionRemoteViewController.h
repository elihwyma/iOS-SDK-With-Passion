/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <UIKit/_UIRemoteViewController.h>

#import <GameCenterUI/Swift-Protocol.h>

@class GKGame, NSExtension, NSString;

@interface GKExtensionRemoteViewController : _UIRemoteViewController <Swift>

{
    GKGame *_game;
    NSExtension *_extension;
    id _requestIdentifier;
}

@property (retain, nonatomic) NSExtension *extension;
@property (copy, nonatomic) id requestIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) GKGame *game;

+ (_Bool)shouldPropagateAppearanceCustomizations;
+ (void)setupCallbackBlocksForExtension:(id)arg1 withParentViewController:(id)arg2;
+ (void)viewControllerForExtension:(id)arg1 inputItems:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (id)initialItemsForExtension;
+ (_Bool)dismissAutomaticallyAfterExtensionCompletion;

- (id)init;
- (void)dealloc;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidDisappear:(_Bool)arg1;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)setInitialState:(id)arg1 withReply:(CDUnknownBlockType)arg2;
- (long long)_desiredStatusBarStyle;
- (void)messageFromExtension:(id)arg1;
- (void)cancelExtension;
- (void)extensionIsCanceling;
- (id)extensionObjectProxy;
- (void)messageFromClient:(id)arg1;
- (void)sendMessageToExtension:(id)arg1;
- (void)hostApp:(id)arg1 grantingAccessExtensionSandbox:(id)arg2 replyWithEndpoint:(CDUnknownBlockType)arg3;
- (void)extensionIsFinishing;

@end
