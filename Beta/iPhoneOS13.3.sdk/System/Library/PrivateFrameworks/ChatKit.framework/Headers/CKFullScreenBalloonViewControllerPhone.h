/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <ChatKit/CKFullScreenBalloonViewController.h>

#import <ChatKit/Swift-Protocol.h>

@class CKActionSheetMenuView, CKGroupAcknowledgmentVotingViewController, CKLivePhotoBalloonView, NSArray, NSString, UIView;

@interface CKFullScreenBalloonViewControllerPhone : CKFullScreenBalloonViewController <Swift>

{
    _Bool _shouldLayoutViews;
    _Bool _animationsDisabledForTesting;
    CKActionSheetMenuView *_menuView;
    CKGroupAcknowledgmentVotingViewController *_votingViewController;
    UIView *_balloonView;
    NSArray *_interfaceActions;
    CKLivePhotoBalloonView *_livePhotoBalloonView;
    double _balloonYOffsetFromTranscript;
}

@property (retain, nonatomic) CKActionSheetMenuView *menuView;
@property (retain, nonatomic) CKGroupAcknowledgmentVotingViewController *votingViewController;
@property (retain, nonatomic) UIView *balloonView;
@property (copy, nonatomic) NSArray *interfaceActions;
@property (retain, nonatomic) CKLivePhotoBalloonView *livePhotoBalloonView;
@property (nonatomic) double balloonYOffsetFromTranscript;
@property (nonatomic) _Bool animationsDisabledForTesting;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)_stickerDetailViewControllerCloseButtonPressed:(id)arg1;
- (void)presentStickerDetailControllerWithStickers:(id)arg1;
- (void)stickerDetailViewController:(id)arg1 deletedStickerWithTransferGUID:(id)arg2;
- (void)stickerDetailViewController:(id)arg1 selectedStickerPackWithAdamID:(id)arg2;
- (void)balloonViewTapped:(id)arg1;
- (void)balloonViewDoubleTapped:(id)arg1;
- (void)balloonViewLongTouched:(id)arg1;
- (id)initWithChatItem:(id)arg1 title:(id)arg2 interfaceActions:(id)arg3 gradientReferenceView:(id)arg4 isGroupConversation:(_Bool)arg5 showActionMenu:(_Bool)arg6 pluginBalloonSnapshot:(id)arg7 delegate:(id)arg8;
- (void)balloonEditMenuViewWasDismissed:(id)arg1;
- (void)dismissTapGestureRecognized:(id)arg1;
- (void)performInitialAnimations;
- (void)performClosingAnimationsWithSendAnimation:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)liveBalloonTouched:(id)arg1;
- (void)interactionStartedFromPreviewItemControllerInBalloonView:(id)arg1;
- (void)interactionStoppedFromPreviewItemControllerInBalloonView:(id)arg1;
- (void)loadLivePhotoBalloonViewIfNeeded;
- (_Bool)_shouldShowVotingView;
- (void)livePhotoView:(id)arg1 didEndPlaybackWithStyle:(long long)arg2;
- (void)disableAnimationsForTesting;

@end
