/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <UIKit/UIViewController.h>

#import <MapKit/Swift-Protocol.h>

@class NSArray, NSHashTable, NSLayoutConstraint, NSMapTable, NSString, UIScrollView, UIView, _MKStackView, _MKStackingContentView;

@protocol MKStackingViewControllerDelegate;

@interface MKStackingViewController : UIViewController <Swift>

{
    _MKStackView *_stackView;
    _MKStackingContentView *_contentView;
    NSLayoutConstraint *_widthConstraint;
    NSLayoutConstraint *_stackViewWidthConstraint;
    _Bool _isScrollDisabled;
    unsigned long long _countOfCurrentLayoutInvocations;
    UIScrollView *_scrollView;
    NSMapTable *_viewControllersToPreferredHeightConstraints;
    NSMapTable *_viewsToViewControllers;
    NSArray *_titleViewConstraints;
    _Bool _willRelayoutForPreferredContentSizeChange;
    _Bool _isSettingStackedViews;
    _Bool _contentViewConstraintsAdded;
    NSHashTable *_minimallyVisibleViews;
    _Bool _needsToPerformLayout;
    UIView *_overlayView;
    double _overlayViewOriginY;
    _Bool _mayWantSpearators;
    _Bool _needToCallViewControllerLayoutDelegate;
    NSArray *_viewControllers;
    id <MKStackingViewControllerDelegate> _stackingDelegate;
}

@property (copy, nonatomic) NSArray *viewControllers;
@property (weak, nonatomic) id <MKStackingViewControllerDelegate> stackingDelegate;
@property (nonatomic, getter=isScrollEnabled) _Bool scrollEnabled;
@property (nonatomic, readonly) UIScrollView *scrollView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)loadView;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)_didScroll;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (double)currentHeight;
- (void)updateViewConstraints;
- (void)stackViewNeedsLayout:(id)arg1;
- (double)stackView:(id)arg1 distanceBetweenUpperView:(id)arg2 andLowerView:(id)arg3;
- (void)setOverlayView:(id)arg1 withOriginY:(double)arg2;
- (void)removeOverlayViewAnimated:(_Bool)arg1;
- (void)scrollToTopAnimated:(_Bool)arg1;
- (void)_setScrollEnabled:(_Bool)arg1 forcedUpdate:(_Bool)arg2;
- (void)_updateFixedHeightAwareControllers;
- (_Bool)_isSafeToPerformLayout;
- (void)_updateStackViewSubviewsAndChildVCsEntering:(id)arg1 exiting:(id)arg2;
- (void)_setUpEnteringViewController:(id)arg1;
- (void)_tearDownExitingViewController:(id)arg1;
- (void)_addPreferredHeightConstraintForViewControllerIfNeeded:(id)arg1;
- (void)_removePreferredHeightConstraintFromViewController:(id)arg1;
- (void)_setOverlayViewFrame;
- (void)_setPreferredHeight:(double)arg1 forViewController:(id)arg2;
- (void)_updateViewControllerVisibilityAfterPositionChange;
- (void)_callViewControllersLayoutDelegateIfNeeded;
- (void)_sendScrollnotification;
- (_Bool)isViewVisbile:(id)arg1 percentageTreshold:(double)arg2;
- (double)_titleHeight;
- (double)_fittingHeightForView:(id)arg1;
- (void)setWidthConstraintConstant:(double)arg1;

@end
