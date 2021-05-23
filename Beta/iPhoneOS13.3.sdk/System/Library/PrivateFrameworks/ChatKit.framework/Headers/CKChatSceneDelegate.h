/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <ChatKit/CKSceneDelegate.h>

#import <ChatKit/Swift-Protocol.h>

@class CKCoreChatController, CKNavigationController, NSString;

@interface CKChatSceneDelegate : CKSceneDelegate <Swift>

{
    CKNavigationController *_navigationController;
    CKCoreChatController *_chatController;
}

@property (retain, nonatomic) CKNavigationController *navigationController;
@property (retain, nonatomic) CKCoreChatController *chatController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (long long)type;
- (void)scene:(id)arg1 willConnectToSession:(id)arg2 options:(id)arg3;
- (void)sceneDidDisconnect:(id)arg1;
- (void)sceneWillEnterForeground:(id)arg1;
- (void)sceneDidEnterBackground:(id)arg1;
- (void)scene:(id)arg1 openURLContexts:(id)arg2;
- (id)stateRestorationActivityForScene:(id)arg1;
- (void)scene:(id)arg1 continueUserActivity:(id)arg2;
- (id)conversation;
- (void)showConversation:(id)arg1;
- (void)_chatItemsDidChange:(id)arg1;
- (void)_handleRegistryWillUnregisterChatNotification:(id)arg1;
- (void)_updateAppSnapshot;
- (void)__updateAppSnapshot;
- (id)prefersToActivatePredicate;
- (void)chatController:(id)arg1 willSendComposition:(id)arg2 inConversation:(id)arg3;
- (void)chatController:(id)arg1 didSendCompositionInConversation:(id)arg2;
- (void)chatController:(id)arg1 didReportSpamForConversation:(id)arg2;
- (void)chatController:(id)arg1 forwardComposition:(id)arg2;
- (void)prewarmCameraIfNecessaryForChatController:(id)arg1;
- (void)doneButtonPressedForChatController:(id)arg1;
- (id)canActivatePredicate;

@end
