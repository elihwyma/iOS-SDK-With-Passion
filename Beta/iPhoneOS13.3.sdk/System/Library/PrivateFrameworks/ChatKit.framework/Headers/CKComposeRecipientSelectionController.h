/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <ChatKit/CKRecipientSelectionController.h>

@class CTXPCServiceSubscriptionContext, NSArray, NSString, TPPillView, UIView;

@protocol CKComposeRecipientSelectionControllerDelegate;

@interface CKComposeRecipientSelectionController : CKRecipientSelectionController

{
    _Bool _hasUserSetContextPreference;
    _Bool _firstAppear;
    UIView *_pillContainerView;
    CTXPCServiceSubscriptionContext *_selectedSubscriptionContext;
    CDUnknownBlockType _sendBlock;
    TPPillView *_pillView;
}

@property (copy, nonatomic) CDUnknownBlockType sendBlock;
@property (retain, nonatomic) UIView *pillContainerView;
@property (retain, nonatomic) TPPillView *pillView;
@property (retain, nonatomic) CTXPCServiceSubscriptionContext *selectedSubscriptionContext;
@property (nonatomic) _Bool hasUserSetContextPreference;
@property (nonatomic, getter=isFirstAppear) _Bool firstAppear;
@property (weak, nonatomic) id <CKComposeRecipientSelectionControllerDelegate> delegate;
@property (nonatomic, readonly) NSArray *expandedRecipients;
@property (nonatomic, readonly) NSArray *proposedRecipients;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)reset;
- (id)recipients;
- (void)loadView;
- (_Bool)_canShowWhileLocked;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)addRecipient:(id)arg1;
- (void)viewDidAppearDeferredSetup;
- (_Bool)homogenizePreferredServiceForiMessage;
- (void)recipientSelectionControllerDidChange;
- (_Bool)shouldAtomizeToConversationName;
- (_Bool)shouldSuppressSearchResultsTable;
- (_Bool)alwaysShowSearchResultsTable;
- (id)conversationList;
- (_Bool)deviceHasMultipleSubscriptions;
- (_Bool)allContextsiMessageable;
- (id)startNewConversationAccountDisplayName;
- (void)atomizeAndInvokeBlock:(CDUnknownBlockType)arg1;
- (void)atomizeAndSendTimeoutHandler;
- (void)configureSubscriptionContextForRecipients:(id)arg1;
- (void)presentAlertForSubscriptionContext;
- (void)_layoutPillViewKeepHidden:(_Bool)arg1;
- (_Bool)hasBackfilledConversation;
- (void)_updatePillViewIfIsNewConversation:(_Bool)arg1;
- (id)_getSubscriptionContextToDisplay;
- (id)_startNewConverationFromContextInSettingsPreference;
- (id)_bestSenderIdentityForRecipient:(id)arg1;
- (void)setSelectedSubscriptionContext:(id)arg1 updatePillView:(_Bool)arg2;
- (void)presentContextSelectionAlertWithCompletion:(CDUnknownBlockType)arg1;
- (id)_senderIdentityForSubscriptionContext:(id)arg1;
- (unsigned long long)_pillViewThemeForCurrentService;
- (void)_updatePillViewForContext:(id)arg1;
- (_Bool)_shouldHidePillViewForSenderIdentity:(id)arg1 recipientCount:(unsigned long long)arg2;
- (void)_updateContentOfPillView:(id)arg1 withSenderIdentity:(id)arg2;
- (_Bool)hasMultipleActiveSharedSubscriptions;
- (void)_legacyAddRecipient:(id)arg1;
- (_Bool)_hasExistingConversationWithAddedRecipient:(id)arg1;
- (id)_subscriptionContextForSimID:(id)arg1 phoneNumber:(id)arg2;
- (void)_atomizeToConversationNameIfNecessary:(unsigned long long)arg1;
- (_Bool)_isOniMessageService:(id)arg1;
- (_Bool)_updateBackfillForNewRecipients;
- (void)_updatePillViewIfNeededIfIsNewConversation:(_Bool)arg1;
- (id)_handlesForRecipients:(id)arg1;
- (id)autocompleteResultIdentifier:(id)arg1;
- (id)conversationGUIDForRecipient:(id)arg1;
- (_Bool)recipientIsiMessagable:(id)arg1;
- (_Bool)shouldInvalidateIDSRequests;
- (void)pillViewWasTapped:(id)arg1;

@end
