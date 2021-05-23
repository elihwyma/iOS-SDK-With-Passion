/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <ChatKit/CKScrollViewController.h>

@class CKConversation, CKFullScreenBalloonViewController, CKScheduledUpdater, CKTranscriptCollectionView, CKTranscriptCollectionViewController, IMChat, NSString, STLockoutViewController, UIProgressView;

@protocol CKCoreChatControllerDelegate;

@interface CKCoreChatController : CKScrollViewController

{
    _Bool _sendingMessage;
    _Bool _viewIsVisible;
    _Bool _transitionedFromComposing;
    _Bool _userInitiatedTranscriptPush;
    _Bool _initialLayoutComplete;
    _Bool _ignoreLastBalloonVisibleInMarkAsReadCheck;
    _Bool _disableAnimationsUnderTest;
    _Bool _isShowingLockoutView;
    id <CKCoreChatControllerDelegate> _delegate;
    CKConversation *_conversation;
    CKTranscriptCollectionViewController *_collectionViewController;
    CKScheduledUpdater *_refreshServiceForSendingUpdater;
    UIProgressView *_progressBar;
    double _sendProgress;
    unsigned long long _sendProgressSendCount;
    unsigned long long _sendProgressTotalCount;
    CKFullScreenBalloonViewController *_fullScreenBalloonViewController;
    long long _acknowledgmentToSend;
    CDUnknownBlockType _overrideScrollBlock;
    STLockoutViewController *_lockoutViewController;
}

@property (retain, nonatomic) CKConversation *conversation;
@property (nonatomic, readonly) IMChat *chat;
@property (retain, nonatomic) CKTranscriptCollectionViewController *collectionViewController;
@property (nonatomic) _Bool initialLayoutComplete;
@property (nonatomic, readonly) double balloonMaxWidth;
@property (nonatomic, readonly) double gradientBottomPlaceholderHeight;
@property (nonatomic) _Bool ignoreLastBalloonVisibleInMarkAsReadCheck;
@property (retain, nonatomic) CKScheduledUpdater *refreshServiceForSendingUpdater;
@property (retain, nonatomic) UIProgressView *progressBar;
@property (nonatomic, getter=isSendingMessage) _Bool sendingMessage;
@property (nonatomic) double sendProgress;
@property (nonatomic) unsigned long long sendProgressSendCount;
@property (nonatomic) unsigned long long sendProgressTotalCount;
@property (retain, nonatomic) CKFullScreenBalloonViewController *fullScreenBalloonViewController;
@property (nonatomic) long long acknowledgmentToSend;
@property (nonatomic) _Bool disableAnimationsUnderTest;
@property (copy, nonatomic) CDUnknownBlockType overrideScrollBlock;
@property (retain, nonatomic) STLockoutViewController *lockoutViewController;
@property (nonatomic) _Bool isShowingLockoutView;
@property (weak, nonatomic) id <CKCoreChatControllerDelegate> delegate;
@property (nonatomic, readonly) CKTranscriptCollectionView *collectionView;
@property (nonatomic, readonly) _Bool shouldDismissAfterSend;
@property (nonatomic) _Bool viewIsVisible;
@property (nonatomic) _Bool transitionedFromComposing;
@property (nonatomic) _Bool userInitiatedTranscriptPush;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)loadView;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)_contentSizeCategoryDidChangeNotification:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)_setTitle:(id)arg1 animated:(_Bool)arg2;
- (id)scrollView;
- (id)textInputContextIdentifier;
- (void)significantTimeChange;
- (void)systemApplicationWillEnterForeground;
- (void)systemApplicationDidResume;
- (id)initWithConversation:(id)arg1;
- (void)viewDidAppearDeferredSetup;
- (void)prepareForSuspend;
- (void)_handleAddressBookChangedNotification:(id)arg1;
- (void)parentControllerDidResume:(_Bool)arg1 animating:(_Bool)arg2;
- (void)sendComposition:(id)arg1;
- (id)gradientReferenceView;
- (void)transcriptCollectionViewController:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)transcriptCollectionViewController:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)transcriptCollectionViewController:(id)arg1 balloonView:(id)arg2 tappedForChatItem:(id)arg3;
- (void)transcriptCollectionViewController:(id)arg1 balloonView:(id)arg2 longPressedForItemWithIndexPath:(id)arg3;
- (void)transcriptCollectionViewController:(id)arg1 balloonView:(id)arg2 doubleTappedItemAtIndexPath:(id)arg3;
- (void)transcriptCollectionViewController:(id)arg1 balloonViewTitleTappedForItemWithIndexPath:(id)arg2;
- (void)transcriptCollectionViewControllerWillInset:(id)arg1 targetContentInset:(inout struct UIEdgeInsets *)arg2;
- (void)transcriptCollectionViewControllerDidInset:(id)arg1;
- (_Bool)transcriptCollectionViewControllerShouldPlayAudio:(id)arg1;
- (void)transcriptCollectionViewControllerPlayingAudioDidChange:(id)arg1;
- (void)transcriptCollectionViewControllerChatItemsDidChange:(id)arg1;
- (void)transcriptCollectionViewController:(id)arg1 collectionViewContentSizeDidChange:(struct CGSize)arg2;
- (void)transcriptCollectionViewControllerWillScrollToBottom:(id)arg1;
- (void)transcriptCollectionViewControllerReportSpamButtonTapped:(id)arg1;
- (void)transcriptCollectionViewControllerWillDisplayLastBalloon:(id)arg1;
- (void)transcriptCollectionViewControllerDidInsertAssociatedChatItem:(id)arg1;
- (id)traitCollectionForTranscriptCollectionViewController:(id)arg1;
- (_Bool)transcriptCollectionViewControllerPlaybackForOutgoingEffectsIsAllowed:(id)arg1;
- (_Bool)transcriptCollectionViewController:(id)arg1 shouldSetupFullscreenEffectUI:(id)arg2;
- (_Bool)transcriptCollectionViewControllerShouldLayoutFullscreenEffects:(id)arg1;
- (_Bool)transcriptCollectionViewController:(id)arg1 shouldCleanupFullscreenEffectUI:(id)arg2;
- (id)transcriptCollectionViewControllerAdditionalFullscreenEffectViews:(id)arg1;
- (void)transcriptCollectionViewController:(id)arg1 willBeginImpactEffectAnimationWithSendAnimationContext:(id)arg2;
- (void)transcriptCollectionViewController:(id)arg1 didEndImpactEffectAnimationWithSendAnimationContext:(id)arg2;
- (void)transcriptCollectionViewController:(id)arg1 balloonViewDidRequestPresentationStyle:(unsigned long long)arg2 forChatItem:(id)arg3 allowAllStyles:(_Bool)arg4;
- (_Bool)transcriptCollectionViewController:(id)arg1 balloonViewDidRequestCommitPayload:(id)arg2 forPlugin:(id)arg3 allowAllCommits:(_Bool)arg4 error:(id *)arg5;
- (void)transcriptCollectionViewController:(id)arg1 balloonViewDidRequestStartEditingPayload:(id)arg2 forPlugin:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (_Bool)transcriptCollectionViewController:(id)arg1 balloonViewDidRequestCommitSticker:(id)arg2 forPlugin:(id)arg3 allowAllCommits:(_Bool)arg4 error:(id *)arg5;
- (id)_handleIDsForCurrentConversation;
- (void)parentControllerDidBecomeActive;
- (void)_performResume;
- (void)_dismissFullScreenBubbleViewControllerWithSendAnimation:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_updateNavigationButtons;
- (void)_willSendComposition:(id)arg1 inConversation:(id)arg2;
- (void)_didSendCompositionInConversation:(id)arg1;
- (void)_setConversationDeferredSetup;
- (void)_updateForNewPreferredService;
- (_Bool)isSafeToMarkAsRead;
- (void)_markAsReadIfNecessary;
- (void)registerNotifications;
- (void)registerNotificationsForConversation:(id)arg1;
- (void)_displayNameUpdatedNotification:(id)arg1;
- (void)_updateTitleAnimated:(_Bool)arg1;
- (void)setupScrollingForKeyboardInteraction;
- (struct CGRect)fullScreenBalloonViewController:(id)arg1 balloonFrameForChatItem:(id)arg2;
- (void)showFullScreenAcknowledgmentPickerForBalloonAtIndexPath:(id)arg1 showActionMenu:(_Bool)arg2;
- (void)fullScreenBalloonViewController:(id)arg1 willAppearAnimated:(_Bool)arg2;
- (void)fullScreenBalloonViewController:(id)arg1 willDisappearWithSendAnimation:(_Bool)arg2;
- (void)fullScreenBalloonViewControllerDidDisappear:(id)arg1;
- (void)fullScreenBalloonViewController:(id)arg1 sendMessageAcknowledgment:(long long)arg2 forChatItem:(id)arg3;
- (void)fullScreenBalloonViewController:(id)arg1 didAppearAnimated:(_Bool)arg2;
- (void)fullScreenBalloonViewControllerHandleDismissTap:(id)arg1;
- (void)setupStateForLaunchURL:(id)arg1;
- (void)_transferFinishedNotification:(id)arg1;
- (void)_transferRestoredNotification:(id)arg1;
- (id)_fullScreenBalloonViewControllerWithChatItem:(id)arg1 showActionMenu:(_Bool)arg2;
- (void)refreshServiceForSending;
- (void)_refreshServiceForSending;
- (void)_registerSendProgressDelegate;
- (void)_deregisterSendProgressDelegate;
- (_Bool)conversationAllowedByScreenTime;
- (void)_removeExistingCollectionViewController;
- (struct CGRect)gradientFrameWithInsets:(struct UIEdgeInsets)arg1;
- (void)_handleTapEventForBalloonView:(id)arg1 atIndexPath:(id)arg2 showActionMenu:(_Bool)arg3;
- (void)_preferredServiceChangedNotification:(id)arg1;
- (void)_downgradeStateChangedNotification:(id)arg1;
- (void)_localeDidChangeNotification:(id)arg1;
- (void)_increaseContrastDidChangeNotification:(id)arg1;
- (void)_refreshActiveChat:(id)arg1;
- (void)_chatRegistryDidReloadNotification:(id)arg1;
- (void)preferredSendingServiceChanged;
- (void)showFullScreenAcknowledgmentPickerForChatItem:(id)arg1 showActionMenu:(_Bool)arg2;
- (void)chat:(id)arg1 progressDidChange:(float)arg2 sendingMessages:(id)arg3 sendCount:(unsigned long long)arg4 totalCount:(unsigned long long)arg5 finished:(_Bool)arg6;
- (void)contentInsetWillChange:(struct UIEdgeInsets)arg1 animated:(_Bool)arg2 duration:(double)arg3;
- (void)contentInsetDidChange;
- (void)keyboardWillHideViaGesture;

@end
