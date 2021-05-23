/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <HealthUI/HKViewController.h>

@class HKTitledLogoBuddyHeaderView, NSArray, NSString, UIActivityIndicatorView, UIScrollView, UIStackView, UIVisualEffectView;

@interface HKTitledBuddyViewController : HKViewController

{
    UIScrollView *_scrollView;
    UIStackView *_bodyStackView;
    UIVisualEffectView *_anchoredButtonContainerView;
    UIStackView *_containerStackView;
    HKTitledLogoBuddyHeaderView *_header;
    NSArray *_buttons;
    NSArray *_buttonStackConstraints;
    UIActivityIndicatorView *_loadingIndicator;
}

@property (nonatomic, readonly) UIActivityIndicatorView *loadingIndicator;
@property (nonatomic, readonly) NSArray *buttons;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)embedView:(id)arg1 inContainerViewWithMinimumEdgeInsets:(struct UIEdgeInsets)arg2;

- (id)init;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLayoutSubviews;
- (id)headerView;
- (id)titleString;
- (id)titleImage;
- (void)_updateForCurrentSizeCategory;
- (id)bodyString;
- (long long)bodyTextAlignment;
- (void)reloadViews;
- (_Bool)shouldCustomizeNavigationBar;
- (void)updateBodyTextAttributesWithMutableString:(id)arg1;
- (id)bottomAnchoredButtons;
- (void)buttonAtIndexTapped:(long long)arg1;
- (id)_createHeaderView;
- (id)subsequentViews;
- (void)_createAnchoredButtons;
- (_Bool)shouldHideNavigationBar;
- (id)linkButtonTitle;
- (void)linkButtonTapped:(id)arg1;
- (void)_anchoredButtonTapped:(id)arg1;
- (void)titledBuddyHeaderViewDidTapLinkButton:(id)arg1;

@end
