/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <UIKit/UIViewController.h>

@class CKAvatarPickerViewController, CKCanvasBackButtonView, CKConversation, CKDetailsContactsManager, CKLabel, CKNavigationBarCanvasView, CNContactStore, NSString, UIButton, UINavigationController;

@protocol CKNavbarCanvasViewControllerDelegate;

@interface CKNavbarCanvasViewController : UIViewController

{
    _Bool _canShowBackButtonView;
    _Bool _shouldShowDoneButton;
    _Bool _isInEditingMode;
    _Bool _editing;
    id <CKNavbarCanvasViewControllerDelegate> _delegate;
    UIButton *_callButton;
    CKNavigationBarCanvasView *_canvasView;
    NSString *_navbarTitle;
    CKConversation *_conversation;
    CKAvatarPickerViewController *_avatarPickerViewController;
    CKLabel *_defaultLabel;
    CKCanvasBackButtonView *_backButtonView;
    UIButton *_detailsButton;
    UIButton *_clearAllButtonView;
    UIButton *_editCancelButtonView;
    UIButton *_doneButton;
    UINavigationController *_proxyNavigationController;
    long long _indicatorType;
    CNContactStore *_suggestionsEnabledContactStore;
    CKDetailsContactsManager *_contactsManager;
}

@property (retain, nonatomic) CKConversation *conversation;
@property (retain, nonatomic) CKAvatarPickerViewController *avatarPickerViewController;
@property (retain, nonatomic) CKNavigationBarCanvasView *canvasView;
@property (retain, nonatomic) CKLabel *defaultLabel;
@property (retain, nonatomic) CKCanvasBackButtonView *backButtonView;
@property (retain, nonatomic) UIButton *detailsButton;
@property (retain, nonatomic) UIButton *callButton;
@property (retain, nonatomic) UIButton *clearAllButtonView;
@property (retain, nonatomic) UIButton *editCancelButtonView;
@property (retain, nonatomic) UIButton *doneButton;
@property (weak, nonatomic) UINavigationController *proxyNavigationController;
@property (nonatomic) _Bool editing;
@property (retain, nonatomic) NSString *navbarTitle;
@property (nonatomic) long long indicatorType;
@property (retain, nonatomic) CNContactStore *suggestionsEnabledContactStore;
@property (retain, nonatomic) CKDetailsContactsManager *contactsManager;
@property (weak, nonatomic) id <CKNavbarCanvasViewControllerDelegate> delegate;
@property (nonatomic) _Bool canShowBackButtonView;
@property (nonatomic) _Bool shouldShowDoneButton;
@property (nonatomic) _Bool isInEditingMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)loadView;
- (void)traitCollectionDidChange:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (id)navigationItem;
- (void)collapse;
- (void)_buttonPressed:(id)arg1;
- (id)initWithConversation:(id)arg1;
- (void)_contactPhotosEnabledChangedNotification:(id)arg1;
- (_Bool)_canShowAvatarView;
- (void)updateContentsForConversation:(id)arg1;
- (void)updateTitle:(id)arg1 animated:(_Bool)arg2;
- (void)configureForEditing:(_Bool)arg1;
- (id)initWithConversation:(id)arg1 navigationController:(id)arg2;
- (void)startAudioCommunicationUsingPreferredRouteIfAvailable:(_Bool)arg1;
- (void)_handleTranscriptScroll:(id)arg1;
- (void)accessibilitySizeCategoryDidChange:(id)arg1;
- (id)navBarTitleFromConversation:(id)arg1;
- (id)_windowTraitCollection;
- (double)_preferredHeightForTraitCollection:(id)arg1;
- (_Bool)isMultiwayFaceTimeAudioSupported;
- (void)_initializeForTraitCollection:(id)arg1;
- (void)_userDidTapNavigationBar:(id)arg1;
- (void)toggleExpansionState;
- (_Bool)_isMuliwayAvaialble;
- (_Bool)isFaceTimeVideoSupported;
- (_Bool)_isFaceTimeSupportedForIndividualCalls;
- (void)_notifyDelegateThatViewControllerWantsResize;
- (void)handleCloseNavBarAnimationCompleteNotification:(id)arg1;
- (long long)_unreadCount;
- (void)_updateUnreadCountForBackbuttonView:(long long)arg1;
- (void)_chatUnreadCountDidChange:(id)arg1;
- (void)multiwayStateChanged:(id)arg1;
- (void)_handleAddressBookChange:(id)arg1;
- (void)_updateMultiwayButtonStateWithConversation:(id)arg1;
- (void)_configureForEditMode;
- (void)_configureForDefaultMode;
- (id)_titleItemViewForTraitCollection:(id)arg1;
- (id)_leftItemViewForTraitCollection:(id)arg1;
- (id)_rightItemViewForTraitCollection:(id)arg1;
- (void)setUnreadCountTitleColor;
- (void)contactsManagerViewModelsDidChange:(id)arg1;
- (void)contactsManager:(id)arg1 didRequestCallTypeForEntity:(id)arg2 addresses:(id)arg3 abLabels:(id)arg4 faceTimeAudioEnabled:(_Bool)arg5;
- (struct NSDirectionalEdgeInsets)systemMinimumLayoutMarginsForView:(id)arg1;
- (id)_secondaryRightItemViewForTraitCollection:(id)arg1;
- (void)showMapkitBusinessData;
- (void)dismissModal;
- (void)_showContactCardForEntity:(id)arg1;

@end
