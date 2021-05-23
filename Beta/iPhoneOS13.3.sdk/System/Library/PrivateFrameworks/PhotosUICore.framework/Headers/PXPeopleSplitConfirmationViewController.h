/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXPeopleConfirmationViewController.h>

@class NSArray, NSLayoutConstraint, UIBarButtonItem, UIButton, UILayoutGuide, UIView;

@interface PXPeopleSplitConfirmationViewController : PXPeopleConfirmationViewController

{
    UIView *_interimLoadingView;
    UIButton *_confirmButton;
    UIButton *_denyButton;
    UIBarButtonItem *_undoButton;
    UILayoutGuide *_controlLayoutGuide;
    NSLayoutConstraint *_buttonSizeConstraint;
    NSLayoutConstraint *_firstButtonSpacingConstraint;
    NSLayoutConstraint *_secondButtonSpacingConstraint;
    NSLayoutConstraint *_controlGuideHeightConstraint;
    NSArray *_portraitConstraints;
    NSArray *_landscapeConstraints;
    NSArray *_commonConstraints;
}

@property (retain, nonatomic) UIView *interimLoadingView;
@property (retain, nonatomic) UIButton *confirmButton;
@property (retain, nonatomic) UIButton *denyButton;
@property (retain, nonatomic) UIBarButtonItem *undoButton;
@property (retain, nonatomic) UILayoutGuide *controlLayoutGuide;
@property (retain, nonatomic) NSLayoutConstraint *buttonSizeConstraint;
@property (retain, nonatomic) NSLayoutConstraint *firstButtonSpacingConstraint;
@property (retain, nonatomic) NSLayoutConstraint *secondButtonSpacingConstraint;
@property (retain, nonatomic) NSLayoutConstraint *controlGuideHeightConstraint;
@property (retain, nonatomic) NSArray *portraitConstraints;
@property (retain, nonatomic) NSArray *landscapeConstraints;
@property (retain, nonatomic) NSArray *commonConstraints;

- (void)dealloc;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)updateViewConstraints;
- (id)initWithPerson:(id)arg1;
- (void)contentSizeCategoryDidChangeNotification:(id)arg1;
- (void)undoButtonTapped:(id)arg1;
- (void)suggestionManager:(id)arg1 hasNewSuggestionsAvailable:(id)arg2;
- (void)noMoreSuggestionsAvailableForSuggestionManager:(id)arg1;
- (void)updateViewWithViewState:(unsigned long long)arg1;
- (void)suggestionDidDisplay;
- (void)confirmTapped:(id)arg1;
- (void)denyTapped:(id)arg1;
- (id)_buttonWithTitle:(id)arg1 action:(SEL)arg2 andColor:(id)arg3;
- (void)_enableActionButtons;
- (void)_disableActionButtonsWithSelectedButton:(id)arg1;
- (id)_buttonBackgroundImageFromColor:(id)arg1;
- (void)_updateUndoButton;

@end
