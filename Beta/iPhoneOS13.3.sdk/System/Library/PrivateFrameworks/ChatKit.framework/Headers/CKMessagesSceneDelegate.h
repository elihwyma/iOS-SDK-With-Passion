/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <ChatKit/CKSceneDelegate.h>

@class CKMessagesController, CKRegistrationViewController, CKSceneDelegateState, NSSet;

@interface CKMessagesSceneDelegate : CKSceneDelegate

{
    _Bool _suspended;
    _Bool _locked;
    _Bool _shouldShowRegistrationOverride;
    CKMessagesController *_messagesController;
    CKSceneDelegateState *_storedState;
    CKRegistrationViewController *_madridRegistrationController;
}

@property (nonatomic, getter=isSuspended) _Bool suspended;
@property (nonatomic, getter=isLocked) _Bool locked;
@property (retain, nonatomic) CKSceneDelegateState *storedState;
@property (retain, nonatomic) CKRegistrationViewController *madridRegistrationController;
@property (nonatomic) _Bool shouldShowRegistrationOverride;
@property (nonatomic, readonly) CKMessagesController *messagesController;
@property (nonatomic, readonly) NSSet *alertSuppressionContexts;

- (id)init;
- (void)dealloc;
- (long long)type;
- (void)scene:(id)arg1 willConnectToSession:(id)arg2 options:(id)arg3;
- (void)sceneDidDisconnect:(id)arg1;
- (void)sceneDidBecomeActive:(id)arg1;
- (void)sceneWillResignActive:(id)arg1;
- (void)sceneWillEnterForeground:(id)arg1;
- (void)sceneDidEnterBackground:(id)arg1;
- (void)scene:(id)arg1 openURLContexts:(id)arg2;
- (id)stateRestorationActivityForScene:(id)arg1;
- (void)scene:(id)arg1 continueUserActivity:(id)arg2;
- (void)_prepareForSuspend;
- (void)windowScene:(id)arg1 performActionForShortcutItem:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_chatItemsDidChange:(id)arg1;
- (id)sharedConversationList;
- (void)_updateAppSnapshot;
- (void)__updateAppSnapshot;
- (id)prefersToActivatePredicate;
- (id)canActivatePredicate;
- (_Bool)_messageFilteringEnabled;
- (_Bool)_shouldShowInboxView;
- (void)_conversationFilteringStateChangedNotification:(id)arg1;
- (void)openURL:(id)arg1 sourceApplication:(id)arg2;
- (void)openSMSURL:(id)arg1;
- (void)messagesController:(id)arg1 didUpdateCurrentConversation:(id)arg2;
- (_Bool)hasBusinessRecipientWithRecipientIDs:(id)arg1;
- (void)_handleAccountsChanged:(id)arg1;
- (void)_handleDaemonConnected:(id)arg1;
- (void)_handleDaemonDisconnected:(id)arg1;
- (void)_destroyMadridRegistrationView;
- (void)_scheduleDeferredSetup;
- (void)_prepareForResume:(_Bool)arg1;
- (void)_showMadridRegistrationViewIfNecessary;
- (void)_updateStoredState;
- (_Bool)restoreStateFromUserActivity:(id)arg1;
- (void)_showPeerPaymentUIForPerson:(id)arg1 amount:(id)arg2;
- (_Bool)_shouldShowMadridRegistrationView;
- (void)_updateMadridRegistrationViewAnimated:(_Bool)arg1;
- (_Bool)_restoreState:(id)arg1;
- (void)_clearOldInputContextIdentifiersIfNeeded;
- (void)openSURFURL:(id)arg1;
- (void)loadConversationWithMessageGUID:(id)arg1;
- (id)validIntentDictionaryWithURLParameters:(id)arg1;
- (_Bool)shouldRestoreToConversationListForState:(id)arg1;
- (void)__showMadridRegistrationViewIfNecessary;
- (void)_createMadridRegistrationViewIfNecessary;
- (id)_oldInputContextIdentifiers;

@end
