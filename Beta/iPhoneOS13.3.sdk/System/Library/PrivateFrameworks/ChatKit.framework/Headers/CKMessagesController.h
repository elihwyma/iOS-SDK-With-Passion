/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <UIKit/UISplitViewController.h>

#import <ChatKit/Swift-Protocol.h>

@class CKAlertUtilities, CKConversation, CKConversationListController, CKCoreChatController, CKInboxViewController, CKNavigationController, CKOnboardingController, CKViewController, NSMutableArray, NSSet, NSString, UIViewController;

@protocol CKBrowserViewControllerProtocol, CKMessagesControllerDelegate;

@interface CKMessagesController : UISplitViewController <Swift>

{
    CKConversation *_currentConversation;
    NSMutableArray *_conversationCache;
    CDUnknownBlockType _alertViewHandler;
    unsigned int _attachmentPreviewQosClass;
    _Bool _isInitialLoad;
    id <CKMessagesControllerDelegate> _messagesControllerDelegate;
    CKCoreChatController *_chatController;
    CKCoreChatController *_composeChatController;
    CKNavigationController *_composeChatNavigationController;
    CDUnknownBlockType _deferredHandleURLBlock;
    CKConversationListController *_conversationListController;
    CKOnboardingController *_onboardingController;
    CKNavigationController *_conversationListNavigationController;
    CKNavigationController *_chatNavigationController;
    CKViewController *_blankViewController;
    UIViewController *_statusBarStyleViewController;
    UIViewController<CKBrowserViewControllerProtocol> *_prewarmedCameraBrowser;
    CKAlertUtilities *_alertUtilities;
    CKInboxViewController *_inboxViewController;
}

@property (retain, nonatomic) CKConversationListController *conversationListController;
@property (retain, nonatomic) CKCoreChatController *chatController;
@property (retain, nonatomic) CKCoreChatController *composeChatController;
@property (retain, nonatomic) CKConversation *currentConversation;
@property (retain, nonatomic) CKOnboardingController *onboardingController;
@property (retain, nonatomic) CKNavigationController *conversationListNavigationController;
@property (retain, nonatomic) CKNavigationController *chatNavigationController;
@property (retain, nonatomic) CKNavigationController *composeChatNavigationController;
@property (retain, nonatomic) CKViewController *blankViewController;
@property (copy, nonatomic) CDUnknownBlockType alertViewHandler;
@property (nonatomic) _Bool isInitialLoad;
@property (retain, nonatomic) UIViewController *statusBarStyleViewController;
@property (retain, nonatomic) UIViewController<CKBrowserViewControllerProtocol> *prewarmedCameraBrowser;
@property (retain, nonatomic) CKAlertUtilities *alertUtilities;
@property (retain, nonatomic) CKInboxViewController *inboxViewController;
@property (weak, nonatomic) id <CKMessagesControllerDelegate> messagesControllerDelegate;
@property (nonatomic, readonly) _Bool isShowingConversationListController;
@property (copy, nonatomic) CDUnknownBlockType deferredHandleURLBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSSet *alertSuppressionContexts;

- (id)init;
- (void)dealloc;
- (void)loadView;
- (_Bool)becomeFirstResponder;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)dismiss;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (_Bool)shouldAutorotate;
- (_Bool)isCollapsed;
- (long long)preferredStatusBarStyle;
- (id)childViewControllerForStatusBarStyle;
- (id)childViewControllerForStatusBarHidden;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(_Bool)arg3;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(_Bool)arg3;
- (_Bool)splitViewController:(id)arg1 collapseSecondaryViewController:(id)arg2 ontoPrimaryViewController:(id)arg3;
- (id)splitViewController:(id)arg1 separateSecondaryViewControllerFromPrimaryViewController:(id)arg2;
- (_Bool)_splitViewControllerShouldRestoreResponderAfterTraitCollectionTransition:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)_chatItemsDidChange:(id)arg1;
- (void)prepareForResume;
- (void)prepareForSuspend;
- (void)chatController:(id)arg1 willSendComposition:(id)arg2 inConversation:(id)arg3;
- (void)chatController:(id)arg1 didSendCompositionInConversation:(id)arg2;
- (void)chatController:(id)arg1 didReportSpamForConversation:(id)arg2;
- (void)chatController:(id)arg1 forwardComposition:(id)arg2;
- (void)prewarmCameraIfNecessaryForChatController:(id)arg1;
- (id)navigationBarBackdropLayerGroupNameForChatController:(id)arg1;
- (void)parentControllerDidResume:(_Bool)arg1 animating:(_Bool)arg2;
- (void)parentControllerDidBecomeActive;
- (void)performResumeDeferredSetup;
- (void)startEditingPayload:(id)arg1;
- (_Bool)isAnimatingMessageSend;
- (void)setLocalUserIsTyping:(_Bool)arg1;
- (id)dragControllerTranscriptDelegate;
- (id)presentingViewControllerForOnboardingController:(id)arg1;
- (void)onboardingControllerDidFinish:(id)arg1;
- (id)conversationList;
- (void)_conversationFilteringStateChangedNotification:(id)arg1;
- (_Bool)isComposingMessage;
- (void)showNewMessageCompositionPanelWithRecipients:(id)arg1 composition:(id)arg2 animated:(_Bool)arg3;
- (void)showConversation:(id)arg1 animate:(_Bool)arg2 userInitiated:(_Bool)arg3;
- (void)showConversation:(id)arg1 animate:(_Bool)arg2;
- (_Bool)isShowingChatController;
- (void)conversationListWillBeginEditing:(_Bool)arg1;
- (void)conversationListIsDeletingConversations:(id)arg1;
- (void)showConversationAndMessageForChatGUID:(id)arg1 messageGUID:(id)arg2 animate:(_Bool)arg3;
- (_Bool)isShowingInboxViewController;
- (void)composeChatControllerDidCancelComposition:(id)arg1;
- (_Bool)composeChatControllerCanEditRecipients;
- (void)composeChatController:(id)arg1 didSelectNewConversation:(id)arg2;
- (_Bool)composeChatControllerShouldShowBackButtonViewDuringSendAnimation:(id)arg1;
- (void)dismissAndReloadInputViews:(_Bool)arg1;
- (void)requestPresentationStyleExpanded:(_Bool)arg1;
- (void)presentCKAlertController:(id)arg1;
- (void)didFinishCheckingMissingCarrierSetting;
- (void)commitPayload:(id)arg1;
- (void)startEditingPayload:(id)arg1 dismiss:(_Bool)arg2;
- (void)openURL:(id)arg1 pluginID:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)openURL:(id)arg1 applicationIdentifier:(id)arg2 pluginID:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)dismissToKeyboard:(_Bool)arg1;
- (void)commitSticker:(id)arg1;
- (void)commitSticker:(id)arg1 withDragTarget:(id)arg2;
- (void)didBeginInstallingAppWithBundleIdentifier:(id)arg1;
- (void)_conversationLeft:(id)arg1;
- (void)_chatRegistryDidLoad:(id)arg1;
- (void)_appStateChange:(id)arg1;
- (void)keyCommandCompose:(id)arg1;
- (void)keyCommandNextConversation:(id)arg1;
- (void)keyCommandPreviousConversation:(id)arg1;
- (void)updateConversationListNavigationControllerViewStack;
- (_Bool)_hasCurrentConversations;
- (void)_setIsShowingNoSelectionUI:(_Bool)arg1;
- (void)_updateAlertSuppressionContext;
- (void)presentOnboardingViewControllerIfNeeded;
- (void)showConversationList:(_Bool)arg1;
- (void)teardownCamera;
- (id)_sharedBalloonPluginManager;
- (void)setupBizNavBarForConversation:(id)arg1;
- (void)setCurrentConversation:(id)arg1 keepAllCurrentlyLoadedMessages:(_Bool)arg2;
- (void)_keyCommandChangeConversation:(_Bool)arg1;
- (_Bool)_isShowingFullscreenController;
- (_Bool)_isShowingModalChatController;
- (_Bool)_isShowingFullScreenAppViewController;
- (void)__updateAlertSuppressionContext;
- (void)executeDeferredHandleURLBlock;
- (void)notifyThatKeepMessagesSettingWasResetIfNeeded;
- (void)showNewMessageCompositionPanelWithRecipients:(id)arg1 composition:(id)arg2 animated:(_Bool)arg3 bizIntent:(id)arg4 launchPluginWithBundleID:(id)arg5 pluginLaunchPayload:(id)arg6;
- (void)cancelAndDestroyCompositionWithoutDismiss;
- (void)showConversation:(id)arg1 animate:(_Bool)arg2 forceToTranscript:(_Bool)arg3 keepAllCurrentlyLoadedMessages:(_Bool)arg4 userInitiated:(_Bool)arg5;
- (void)_checkPushToTranscriptTimingWithStartTime:(double)arg1;
- (void)showConversation:(id)arg1 animate:(_Bool)arg2 keepAllCurrentlyLoadedMessages:(_Bool)arg3;
- (void)showConversation:(id)arg1 animate:(_Bool)arg2 forceToTranscript:(_Bool)arg3 keepAllCurrentlyLoadedMessages:(_Bool)arg4;
- (void)cleanUpBizNavBarForConversation:(id)arg1;
- (_Bool)isShowingDirtyComposeModalView;
- (_Bool)resumeToConversation:(id)arg1;
- (void)_presentAppStoreWithLaunchURL:(id)arg1 fromSourceApplication:(id)arg2;
- (void)_setEntryViewHidden:(_Bool)arg1;
- (void)executeDeferredTasks;
- (void)dismissKeyboadIfUp;
- (void)performSearchForQuery:(id)arg1;
- (void)showInboxViewController:(_Bool)arg1;
- (void)keyCommandDeleteConversation:(id)arg1;
- (void)_popToConversationListAndPerformBlockAnimated:(_Bool)arg1 block:(CDUnknownBlockType)arg2;
- (_Bool)hasBusinessRecipientWithRecipientIDs:(id)arg1;
- (void)cancelNewMessageComposition;
- (_Bool)isDownTimeActiveForCurrentChat;
- (void)showConversationAndMessageForSearchURL:(id)arg1;
- (void)_hideConversationListForIPadPPTTest;
- (_Bool)isShowingBlankChatController;
- (_Bool)currentCompositionHasContent;
- (_Bool)hasUnreadFilteredConversationsIgnoringMessages:(id)arg1;
- (_Bool)showUnreadConversationsWithLastConversation:(id)arg1 ignoringMessages:(id)arg2;
- (_Bool)isShowingChatControllerWithUnsentText;
- (void)showStoreForURL:(id)arg1 fromSourceApplication:(id)arg2;
- (void)showSurfAppForCurrentConversationWithAmount:(double)arg1 currency:(id)arg2;
- (id)_newCameraBrowser;
- (void)prewarmCameraIfNecessary;

@end
