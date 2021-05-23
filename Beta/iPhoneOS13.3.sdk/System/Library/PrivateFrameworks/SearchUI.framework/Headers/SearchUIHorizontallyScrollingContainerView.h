/*
 Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

#import <AppSupportUI/NUIContentScrollView.h>

#import <SearchUI/Swift-Protocol.h>

@class NSArray, NSMapTable, NSMutableSet, NSString, NUIContainerStackView, SearchUIHorizontallyScrollingMoreResultsButtonController, UIViewController;

@protocol SearchUIFeedbackDelegate;

@interface SearchUIHorizontallyScrollingContainerView : NUIContentScrollView <Swift>

{
    id <SearchUIFeedbackDelegate> _feedbackDelegate;
    NSArray *_scrollableCardSectionRowModels;
    NUIContainerStackView *_stackViewToScroll;
    NSArray *_buttonControllers;
    SearchUIHorizontallyScrollingMoreResultsButtonController *_seeMoreButtonController;
    NSMutableSet *_visibleResultsAlreadySentBack;
    NSMapTable *_buttonControllersForViews;
    UIViewController *_presentedViewController;
    double _defaultArrangedSubviewWidth;
}

@property (retain, nonatomic) NUIContainerStackView *stackViewToScroll;
@property (retain, nonatomic) NSArray *buttonControllers;
@property (retain, nonatomic) SearchUIHorizontallyScrollingMoreResultsButtonController *seeMoreButtonController;
@property (retain, nonatomic) NSMutableSet *visibleResultsAlreadySentBack;
@property (retain, nonatomic) NSMapTable *buttonControllersForViews;
@property (retain, nonatomic) UIViewController *presentedViewController;
@property double defaultArrangedSubviewWidth;
@property (weak, nonatomic) id <SearchUIFeedbackDelegate> feedbackDelegate;
@property (copy, nonatomic) NSArray *scrollableCardSectionRowModels;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (struct CGSize)containerView:(id)arg1 systemLayoutSizeFittingSize:(struct CGSize)arg2 forArrangedSubview:(id)arg3;
- (struct CGRect)containerView:(id)arg1 layoutFrameForArrangedSubview:(id)arg2 withProposedFrame:(struct CGRect)arg3;
- (void)containerViewDidLayoutArrangedSubviews:(id)arg1;
- (void)scrollingButtonPressed:(id)arg1;
- (double)widthForArrangedSubview:(id)arg1;
- (void)sendVisibleFeedback;
- (void)modalViewControllerClosed;

@end
