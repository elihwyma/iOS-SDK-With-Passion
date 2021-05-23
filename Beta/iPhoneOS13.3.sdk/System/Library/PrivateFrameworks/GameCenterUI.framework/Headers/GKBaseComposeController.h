/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <GameCenterUI/GKLoadableContentViewController.h>

@class GKContiguousContainerView, GKTextView, NSArray, NSLayoutConstraint, NSString, UIScrollView, UIView;

@interface GKBaseComposeController : GKLoadableContentViewController

{
    UIScrollView *_backgroundView;
    NSArray *_composeHeaderFields;
    GKTextView *_messageField;
    UIView *_intendedFirstResponder;
    GKContiguousContainerView *_headerFieldContainer;
    UIView *_contentView;
    double _scrollContentInsetAdjustY;
    NSLayoutConstraint *_contentHeightConstraint;
    NSLayoutConstraint *_contentLeadingConstraint;
    NSLayoutConstraint *_messageFieldTrailingConstraint;
    struct CGRect _lastKnownKeyboardFrame;
}

@property (retain, nonatomic) GKContiguousContainerView *headerFieldContainer;
@property (retain, nonatomic) UIView *contentView;
@property (nonatomic) double scrollContentInsetAdjustY;
@property (retain, nonatomic) NSLayoutConstraint *contentHeightConstraint;
@property (retain, nonatomic) NSLayoutConstraint *contentLeadingConstraint;
@property (retain, nonatomic) NSLayoutConstraint *messageFieldTrailingConstraint;
@property (retain, nonatomic) UIScrollView *backgroundView;
@property (retain, nonatomic) NSArray *composeHeaderFields;
@property (retain, nonatomic) GKTextView *messageField;
@property (nonatomic) UIView *intendedFirstResponder;
@property (nonatomic) struct CGRect lastKnownKeyboardFrame;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)loadView;
- (void)viewWillAppear:(_Bool)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (struct UIEdgeInsets)margins;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)textViewDidChange:(id)arg1;
- (void)textViewDidChangeSelection:(id)arg1;
- (void)setMessageFieldText:(id)arg1;
- (_Bool)_gkWantsCustomRightBarButtonItemInViewService;
- (void)keyboardWillHideShow:(id)arg1;
- (void)_adjustContentInsetForShowingKeyboard:(_Bool)arg1;
- (void)messageFieldTextDidChange;
- (void)_scrollSelectedTextToVisible;
- (id)viewMetricsForContainerView:(id)arg1;

@end
