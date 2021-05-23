/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <ChatKit/CKChatController.h>

@class CKBusinessInfoView, CKComposeNavbarManager, CKComposeRecipientSelectionController, CKComposition, CKTranscriptMultilineLabelCell, NSArray, NSDictionary, NSString, OBWelcomeController, UIBarButtonItem;

@protocol CKComposeChatControllerDelegate;

@interface CKComposeChatController : CKChatController

{
    _Bool _ignoreKeyboardNotifications;
    _Bool _newComposeCancelled;
    _Bool _sendingViaCardUI;
    CKComposeRecipientSelectionController *_composeRecipientSelectionController;
    NSArray *_prepopulatedRecipients;
    CKComposition *_prepopulatedComposition;
    UIBarButtonItem *_composeCancelItem;
    CKComposeNavbarManager *_navbarManager;
    NSDictionary *_bizIntent;
    CKBusinessInfoView *_businessInfoView;
    OBWelcomeController *_businessChatController;
    CKTranscriptMultilineLabelCell *_blackholeAlertView;
    CDUnknownBlockType _deferredSendAnimationBlock;
}

@property (retain, nonatomic) CKComposeRecipientSelectionController *composeRecipientSelectionController;
@property (retain, nonatomic) NSArray *prepopulatedRecipients;
@property (retain, nonatomic) CKComposition *prepopulatedComposition;
@property (nonatomic) _Bool newComposeCancelled;
@property (retain, nonatomic) UIBarButtonItem *composeCancelItem;
@property (retain, nonatomic) CKComposeNavbarManager *navbarManager;
@property (retain, nonatomic) NSDictionary *bizIntent;
@property (retain, nonatomic) CKBusinessInfoView *businessInfoView;
@property (retain, nonatomic) OBWelcomeController *businessChatController;
@property (retain, nonatomic) CKTranscriptMultilineLabelCell *blackholeAlertView;
@property (nonatomic) _Bool sendingViaCardUI;
@property (copy, nonatomic) CDUnknownBlockType deferredSendAnimationBlock;
@property (weak, nonatomic) id <CKComposeChatControllerDelegate> delegate;
@property (nonatomic, readonly) NSArray *proposedRecipients;
@property (nonatomic, readonly) NSString *unatomizedRecipientText;
@property (nonatomic) _Bool ignoreKeyboardNotifications;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (_Bool)becomeFirstResponder;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (id)inputAccessoryView;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewLayoutMarginsDidChange;
- (id)inputAccessoryViewController;
- (void)cancelButtonTapped:(id)arg1;
- (void)prepareForSuspend;
- (void)recipientSelectionController:(id)arg1 textDidChange:(id)arg2;
- (void)recipientSelectionControllerReturnPressed:(id)arg1;
- (void)recipientSelectionControllerDidChangeSize:(id)arg1;
- (void)recipientSelectionControllerRequestDismissKeyboard:(id)arg1;
- (void)recipientSelectionControllerDidPushABViewController:(id)arg1;
- (void)recipientSelectionControllerDidBecomeFirstResponder:(id)arg1;
- (id)handleForRecipientNormalizedAddress:(id)arg1;
- (id)chatForIMHandle:(id)arg1;
- (void)recipientSelectionController:(id)arg1 didFinishAvailaiblityLookupForRecipient:(id)arg2;
- (void)recipientSelectionControllerSearchListDidShowOrHide:(id)arg1;
- (struct UIEdgeInsets)navigationBarInsetsForRecipientSelectionController:(id)arg1;
- (void)parentControllerDidResume:(_Bool)arg1 animating:(_Bool)arg2;
- (_Bool)hasUnreachableEmergencyRecipient;
- (void)messageEntryViewSendButtonHitWhileDisabled:(id)arg1;
- (id)textViewOnscreenWithEntryView;
- (void)messageEntryViewDidChange:(id)arg1;
- (void)messageEntryViewSendButtonHit:(id)arg1;
- (_Bool)hasFailedRecipients;
- (_Bool)isComposingRecipient;
- (void)sendComposition:(id)arg1;
- (void)transcriptCollectionViewController:(id)arg1 balloonView:(id)arg2 tappedForChatItem:(id)arg3;
- (_Bool)transcriptCollectionViewControllerPlaybackForOutgoingEffectsIsAllowed:(id)arg1;
- (_Bool)transcriptCollectionViewControllerShouldForceOpaqueMask:(id)arg1;
- (_Bool)shouldPresentBlockingDowntimeViewController;
- (_Bool)shouldUseNavigationBarCanvasView;
- (_Bool)_chatShowsUnexpectedlyLoggedOutNotification;
- (void)_showNicknameBannerIfNeeded;
- (void)_saveDraftState;
- (void)reloadEntryViewIfNeeded;
- (void)invalidateChatItemLayoutForTraitCollectionChangeIfNeeded:(id)arg1;
- (void)_updateNavigationButtons;
- (void)_setConversationDeferredSetup;
- (_Bool)isSafeToMarkAsRead;
- (void)keyboardWillShowOrHide:(id)arg1;
- (double)topInsetPadding;
- (void)_updateTitleAnimated:(_Bool)arg1;
- (_Bool)shouldShowEntryView;
- (double)_entryViewTopInsetPadding;
- (void)_passKitUIDismissed:(id)arg1;
- (_Bool)_shouldValidatePayloadBeforeSendingPayload:(id)arg1;
- (void)chatInputWillUpdateInputViewShowingBrowser;
- (id)outgoingComposeViewForSendAnimation;
- (void)handleCancelAction:(id)arg1;
- (void)businessInfoView:(id)arg1 infoButtonTapped:(id)arg2;
- (void)sendAnimationManagerWillStartAnimation:(id)arg1 context:(id)arg2;
- (void)completedOnboarding;
- (void)completedOnboardingWithCompletion:(CDUnknownBlockType)arg1;
- (void)keyCommandCancel:(id)arg1;
- (void)setBusinessInfoViewInfoIfNecessary;
- (void)handleAddressBookChange:(id)arg1;
- (void)displayBusinessChatPrivacyIfNecessary;
- (void)_updateBlackholeAlertView;
- (void)layoutBusinessInfoViewIfNecessary;
- (_Bool)_shouldSetToFieldAsFirstResponder;
- (id)selectedContextLastAddressHandleOrDefaultSettingsHandle;
- (void)addBizIntentToConversation:(id)arg1;
- (void)_prepareForSendFromCardIfNecessaryAndSend:(CDUnknownBlockType)arg1;
- (void)_processBizIntentIfNeeded;
- (_Bool)_isWhitelistedBusinessRecipient;
- (id)_anisetteData;
- (void)cancelCompose;
- (void)_triggerRecipientFinalization;
- (_Bool)shouldForceToSMSForConversation:(id)arg1 forRecipient:(id)arg2;
- (_Bool)_isNewBusinessConversation;
- (void)displayBusinessChatPrivacyAndSkipDefaultsCheck:(_Bool)arg1;
- (void)setPrivacyPageHasBeenDisplayed:(_Bool)arg1;
- (_Bool)privacyPageHasBeenDisplayed;
- (void)presentBusinessChatOnboarding;
- (id)_businessChatController;
- (void)aboutLinkTapped;
- (void)recipientSelectionController:(id)arg1 didSelectConversation:(id)arg2 isiMessagable:(_Bool)arg3;
- (void)recipientSelectionControllerDidLoadPillView;
- (id)initWithRecipientAddresses:(id)arg1 composition:(id)arg2 bizIntent:(id)arg3;
- (void)conversationLeft;

@end
