/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <UIKit/UIViewController.h>

@class CNAvatarCardActionsView, CNAvatarCardController, CNContactActionsController, NSArray, NSLayoutConstraint, NSString, UIImage, UIView;

@protocol CNAvatarCardActionListController, CNAvatarCardActionListOrbSupport, CNAvatarCardViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface CNAvatarCardViewController : UIViewController

{
    _Bool _visible;
    _Bool _hasHeader;
    _Bool _headerOnTop;
    CNAvatarCardController *_cardController;
    id <CNAvatarCardViewControllerDelegate> _delegate;
    UIView *_sourceView;
    CNAvatarCardActionsView *_legacyContactActionsView;
    CNContactActionsController *_actionsController;
    NSLayoutConstraint *_actionsViewControllerHeightConstraint;
    UIView *_effectView;
    NSArray *_verticalConstraints;
    double _borderMargin;
    UIView *_headerContainerView;
    UIView *_actionsListView;
}

@property (retain, nonatomic) CNAvatarCardActionsView *legacyContactActionsView;
@property (retain, nonatomic) CNContactActionsController *actionsController;
@property (retain, nonatomic) NSLayoutConstraint *actionsViewControllerHeightConstraint;
@property (nonatomic, getter=isVisible) _Bool visible;
@property (retain, nonatomic) UIView *effectView;
@property (retain, nonatomic) NSArray *verticalConstraints;
@property (nonatomic) double borderMargin;
@property (retain, nonatomic) UIView *headerContainerView;
@property (retain, nonatomic) UIView *actionsListView;
@property (copy, nonatomic) NSArray *actionCategories;
@property (weak, nonatomic) CNAvatarCardController *cardController;
@property (weak, nonatomic) id <CNAvatarCardViewControllerDelegate> delegate;
@property (nonatomic) _Bool hasHeader;
@property (nonatomic) _Bool headerOnTop;
@property (nonatomic) _Bool actionsReversed;
@property (nonatomic) _Bool dismissesBeforePerforming;
@property (nonatomic) _Bool bypassActionValidation;
@property (nonatomic, readonly) id <CNAvatarCardActionListController> actionListController;
@property (nonatomic, readonly) id <CNAvatarCardActionListOrbSupport> actionListViewController;
@property (retain, nonatomic) UIView *sourceView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) UIView *transitioningView;
@property (nonatomic, readonly) struct CGRect transitioningFrame;
@property (nonatomic, readonly) struct CGRect transitioningContentFrame;
@property (nonatomic, readonly) UIImage *transitioningImage;
@property (nonatomic, readonly) struct CGRect transitioningImageFrame;
@property _Bool transitioningImageVisible;
@property (nonatomic, readonly) UIView *transitioningContentView;

- (void)dealloc;
- (void)traitCollectionDidChange:(id)arg1;
- (void)dismissAnimated:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (id)actionsView;
- (void)updateViewConstraints;
- (id)initWithContacts:(id)arg1;
- (void)refreshActions;
- (void)contentSizeCategoryDidChange:(id)arg1;
- (void)contactActionsController:(id)arg1 didSelectAction:(id)arg2;
- (id)cardActionsView:(id)arg1 orderedPropertiesForProperties:(id)arg2 category:(id)arg3;
- (void)cardActionsView:(id)arg1 didShowActions:(id)arg2;
- (void)dismissViewControllerForCardActionsView:(id)arg1 animated:(_Bool)arg2;
- (id)viewControllerForCardActionsView:(id)arg1;
- (struct CGRect)_photoFrameInView:(id)arg1;
- (id)viewForTouchContinuation;
- (void)willAddActionsViewToHierarchy;
- (void)didAddActionsViewToHierarchy;
- (void)updateActionsControllerHeightConstraint;
- (void)updateActionsViewBackgroundColor;
- (void)_updatePreferredSize;

@end
