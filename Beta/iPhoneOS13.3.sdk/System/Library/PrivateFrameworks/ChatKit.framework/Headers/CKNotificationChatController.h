/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <ChatKit/CKCoreChatController.h>

@class CKFullScreenBalloonViewControllerNotification, CKMessageEntryView, CKMessageEntryViewController, CKRaiseGesture, CKScheduledUpdater, NSExtensionContext, NSString, STLockoutViewController;

@protocol CKNotificationChatControllerDelegate;

@interface CKNotificationChatController : CKCoreChatController

{
    _Bool _shouldAllowReplyFromLockScreen;
    _Bool _allowedByScreenTime;
    NSExtensionContext *_urlOpenContext;
    CKFullScreenBalloonViewControllerNotification *_notificationFullScreenBalloonController;
    CKMessageEntryViewController *_entryViewController;
    CKScheduledUpdater *_typingUpdater;
    CKRaiseGesture *_raiseGesture;
    STLockoutViewController *_lockoutViewController;
}

@property (retain, nonatomic) CKMessageEntryViewController *entryViewController;
@property (retain, nonatomic) CKScheduledUpdater *typingUpdater;
@property (retain, nonatomic) CKRaiseGesture *raiseGesture;
@property (nonatomic) _Bool shouldAllowReplyFromLockScreen;
@property (nonatomic) _Bool allowedByScreenTime;
@property (retain, nonatomic) STLockoutViewController *lockoutViewController;
@property (nonatomic, readonly) CKMessageEntryView *entryView;
@property (weak, nonatomic) NSExtensionContext *urlOpenContext;
@property (weak, nonatomic) id <CKNotificationChatControllerDelegate> delegate;
@property (weak, nonatomic) CKFullScreenBalloonViewControllerNotification *notificationFullScreenBalloonController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (_Bool)becomeFirstResponder;
- (void)viewWillDisappear:(_Bool)arg1;
- (_Bool)_canShowWhileLocked;
- (id)inputAccessoryView;
- (void)viewDidAppear:(_Bool)arg1;
- (_Bool)canBecomeFirstResponder;
- (void)handlePayload:(id)arg1 withPayloadId:(id)arg2;
- (id)inputAccessoryViewController;
- (void)setConversation:(id)arg1;
- (id)progressBar;
- (id)initWithConversation:(id)arg1;
- (_Bool)wantsWindowedPresentation;
- (_Bool)preserveModalPresentationStyle;
- (_Bool)constrainToPresentingVCBounds;
- (_Bool)forceWindowedPresentation;
- (double)messageEntryViewMaxHeight:(id)arg1;
- (_Bool)messageEntryShouldHideCaret:(id)arg1;
- (long long)messageEntryViewHighLightInputButton:(id)arg1;
- (void)messageEntryViewSendButtonHitWhileDisabled:(id)arg1;
- (_Bool)getContainerWidth:(double *)arg1 offset:(double *)arg2;
- (void)messageEntryViewDidChange:(id)arg1;
- (_Bool)messageEntryViewShouldBeginEditing:(id)arg1;
- (struct CGSize)messageEntryViewMaxShelfPluginViewSize:(id)arg1;
- (void)messageEntryViewDidBeginEditing:(id)arg1;
- (void)messageEntryViewDidEndEditing:(id)arg1;
- (_Bool)messageEntryView:(id)arg1 shouldInsertMediaObjects:(id)arg2;
- (void)messageEntryView:(id)arg1 didTapMediaObject:(id)arg2;
- (void)messageEntryViewDidTakeFocus:(id)arg1;
- (void)messageEntryViewHandwritingButtonHit:(id)arg1;
- (void)messageEntryViewRecordingDidChange:(id)arg1;
- (void)messageEntryViewPhotoButtonHit:(id)arg1;
- (void)messageEntryViewBrowserButtonHit:(id)arg1;
- (void)messageEntryViewSendButtonHit:(id)arg1;
- (void)messageEntryViewRaiseGestureAutoSend:(id)arg1;
- (_Bool)pluginButtonsEnabled;
- (void)sendCurrentLocationMessage:(id)arg1;
- (void)setSendingMessage:(_Bool)arg1;
- (void)_updateEntryViewFrameIfNeeded:(_Bool)arg1;
- (void)sendComposition:(id)arg1;
- (void)transcriptCollectionViewController:(id)arg1 balloonView:(id)arg2 tappedForChatItem:(id)arg3;
- (void)transcriptCollectionViewController:(id)arg1 balloonView:(id)arg2 longPressedForItemWithIndexPath:(id)arg3;
- (void)transcriptCollectionViewControllerPlayingAudioDidChange:(id)arg1;
- (void)transcriptCollectionViewControllerChatItemsDidChange:(id)arg1;
- (void)updateTyping;
- (void)setEntryView:(id)arg1;
- (void)updateRaiseGesture;
- (void)unregisterForTextInputPayloadHandling;
- (double)balloonMaxWidth;
- (void)_dismissFullScreenBubbleViewControllerWithSendAnimation:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_setConversationDeferredSetup;
- (void)raiseGestureRecognized:(id)arg1;
- (_Bool)inputAccessoryViewControllerEnabled;
- (void)_raiseToListenSettingChanged:(id)arg1;
- (void)_updateTitleAnimated:(_Bool)arg1;
- (_Bool)_shouldDisplayTextEntry;
- (_Bool)shouldShowEntryView;
- (double)_maxEntryViewHeight;
- (void)_setEntryViewFrame:(struct CGRect)arg1 animated:(_Bool)arg2;
- (void)__raiseGestureRecognized:(id)arg1;
- (id)_menuTitleForChatItem:(id)arg1;
- (void)fullScreenBalloonViewController:(id)arg1 willAppearAnimated:(_Bool)arg2;
- (void)fullScreenBalloonViewController:(id)arg1 willDisappearWithSendAnimation:(_Bool)arg2;
- (void)fullScreenBalloonViewControllerDidDisappear:(id)arg1;
- (void)setLocalUserIsComposing:(_Bool)arg1 withPluginBundleID:(id)arg2 typingIndicatorData:(id)arg3;
- (void)fullScreenBalloonViewController:(id)arg1 sendMessageAcknowledgment:(long long)arg2 forChatItem:(id)arg3;
- (void)fullScreenBalloonViewController:(id)arg1 didAppearAnimated:(_Bool)arg2;
- (void)fullScreenBalloonViewControllerHandleDismissTap:(id)arg1;
- (void)fullScreenBalloonViewController:(id)arg1 verticallyScrollTranscriptByAmount:(double)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (id)_fullScreenBalloonViewControllerWithChatItem:(id)arg1 showActionMenu:(_Bool)arg2;
- (void)registerForTextInputPayloadHandling;
- (void)showFullScreenAcknowledgmentPickerForChatItem:(id)arg1 showActionMenu:(_Bool)arg2;
- (void)_messageReceivedInCurrentTranscript:(id)arg1;
- (void)_allowedByScreenTimeChanged:(id)arg1;
- (void)_setupShouldShowReplyFromLockScreen;
- (_Bool)_deviceIsPasscodeLocked;
- (Class)lockoutViewControllerClass;
- (id)launchURLForInputMode:(id)arg1;

@end
