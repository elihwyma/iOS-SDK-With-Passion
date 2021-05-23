/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <UIKit/UIViewController.h>

@class CKMessageAcknowledgmentPickerBarViewController, CKMessagePartChatItem, NSString, UIGestureRecognizer, UIView;

@protocol CKFullScreenBalloonViewControllerDelegate;

@interface CKFullScreenBalloonViewController : UIViewController

{
    _Bool _isGroupConversation;
    _Bool _showActionMenu;
    CKMessagePartChatItem *_chatItem;
    UIGestureRecognizer *_tapRecognizer;
    id <CKFullScreenBalloonViewControllerDelegate> _delegate;
    CKMessageAcknowledgmentPickerBarViewController *_pickerBar;
    UIView *_tintView;
    struct CGRect _gradientFrame;
}

@property (retain, nonatomic) UIGestureRecognizer *tapRecognizer;
@property (weak, nonatomic, readonly) id <CKFullScreenBalloonViewControllerDelegate> delegate;
@property (nonatomic, readonly) CKMessageAcknowledgmentPickerBarViewController *pickerBar;
@property (nonatomic, readonly) UIView *tintView;
@property (nonatomic, readonly) struct CGRect gradientFrame;
@property (nonatomic, readonly) _Bool isGroupConversation;
@property (nonatomic, readonly) _Bool showActionMenu;
@property (nonatomic, readonly) CKMessagePartChatItem *chatItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)loadView;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceivePress:(id)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (_Bool)shouldAutorotate;
- (void)messageAcknowledgmentPickerViewController:(id)arg1 didPickAcknowledgment:(long long)arg2;
- (_Bool)wantsWindowedPresentation;
- (_Bool)preserveModalPresentationStyle;
- (_Bool)constrainToPresentingVCBounds;
- (_Bool)forceWindowedPresentation;
- (void)removeTapRecogonizer;
- (void)dismissTapGestureRecognized:(id)arg1;
- (void)addTapRecognizerWithTarget:(id)arg1 action:(SEL)arg2;
- (void)performInitialAnimations;
- (void)performClosingAnimationsWithSendAnimation:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_performClosingAnimationsWithSendAnimation:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)initWithChatItem:(id)arg1 gradientReferenceView:(id)arg2 isGroupConversation:(_Bool)arg3 showActionMenu:(_Bool)arg4 delegate:(id)arg5;
- (void)performSendAndCloseAnimationWithCompletion:(CDUnknownBlockType)arg1;
- (void)performCancelAnimationWithCompletion:(CDUnknownBlockType)arg1;

@end
