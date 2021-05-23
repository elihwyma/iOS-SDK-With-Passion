/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIViewController.h>

@class NSArray, NSMutableArray, UIBarButtonItem, UIImage;

@protocol UIMultiColumnViewControllerDelegate;

@interface UIMultiColumnViewController : UIViewController

{
    unsigned long long _lastColumnCount;
    unsigned long long _animatingTargetColumnCount;
    UIBarButtonItem *_showSecondColumnBarButtonItem;
    UIBarButtonItem *_hideSecondColumnBarButtonItem;
    struct {
        unsigned int updatingNavControllerChildren:1;
        unsigned int animatingItem1LeftBarButton:1;
        unsigned int lastColumnCountIsValid:1;
        unsigned int animatingSplitToWidth:1;
    } _mcvcFlags;
    NSMutableArray *_borderViews;
    struct CGRect _lastFrameInWindow;
    struct CGSize _containerSizeAtLastUpdate;
    NSArray *_possibleStatesAtLastUpdate;
    id <UIMultiColumnViewControllerDelegate> _delegate;
    NSArray *_viewControllers;
    NSArray *_navControllers;
    double _keyboardInset;
    NSArray *_columnWidths;
    UIImage *__columnToggleButtonImage;
}

@property (retain, nonatomic) NSArray *viewControllers;
@property (retain, nonatomic) NSArray *navControllers;
@property (retain, nonatomic) NSArray *columnWidths;
@property (nonatomic) double keyboardInset;
@property (retain, nonatomic, setter=_setColumnToggleButtonImage:) UIImage *_columnToggleButtonImage;
@property (weak, nonatomic) id <UIMultiColumnViewControllerDelegate> delegate;
@property (nonatomic, readonly) unsigned long long columnCount;

- (void)dealloc;
- (id)title;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)_updateLayoutForStatusBarAndInterfaceOrientation;
- (struct UIEdgeInsets)_edgeInsetsForChildViewController:(id)arg1 insetsAreAbsolute:(_Bool *)arg2;
- (id)childViewControllerForStatusBarStyle;
- (void)showViewController:(id)arg1 sender:(id)arg2;
- (void)_setAllowNestedNavigationControllers:(_Bool)arg1;
- (void)_marginInfoForChild:(id)arg1 leftMargin:(double *)arg2 rightMargin:(double *)arg3;
- (id)separateSecondaryViewControllerForSplitViewController:(id)arg1;
- (id)_navigationBarForDragAffordance;
- (id)initWithNavController:(id)arg1 viewControllers:(id)arg2;
- (void)_navigationControllerChangedViewControllers:(id)arg1;
- (unsigned long long)_columnCountForPossibleStates:(id)arg1 containerSize:(struct CGSize)arg2;
- (void)_willShowColumnCount:(unsigned long long)arg1;
- (id)_effectiveColumnWidths;
- (double)_unsafeAreaPaddingForFirstVisibleColumn;
- (void)_adjustNonOverlayScrollViewsForKeyboardInfo:(id)arg1;
- (void)_moveViewControllersForColumnCount:(unsigned long long)arg1;
- (_Bool)_canShowColumnIndex:(unsigned long long)arg1;
- (id)_liveVCs;
- (id)_preferredContentSizes;
- (void)_updateButtonsForColumnCount:(unsigned long long)arg1 animatingChange:(_Bool)arg2;
- (id)_contentSizesForColumnWidths:(id)arg1;
- (_Bool)sizeMightAllowMultipleColumns:(struct CGSize)arg1;
- (id)_sideBarImage;
- (id)_secondColumnBarButtonItem:(long long)arg1 createIfNecessary:(_Bool)arg2;
- (id)_removeSecondColumnBarButton:(long long)arg1 fromNavItem:(id)arg2;
- (_Bool)_allowMultipleColumnsForPossibleStates:(id)arg1 containerSize:(struct CGSize)arg2;
- (id)_addSecondColumnBarButton:(long long)arg1 toNavItem:(id)arg2;
- (id)_possibleContentSizes;
- (void)_showSecondColumn:(id)arg1;
- (void)_hideSecondColumn:(id)arg1;
- (void)requestColumnCount:(unsigned long long)arg1 animated:(_Bool)arg2;
- (id)initWithNavController:(id)arg1 viewControllers:(id)arg2 columnWidths:(id)arg3;
- (void)_splitViewControllerWillCollapseOntoPrimaryViewController:(id)arg1;
- (void)_collapseSecondaryViewController:(id)arg1 forSplitViewController:(id)arg2 withTransitionCoordinator:(id)arg3;
- (void)_splitViewControllerDidUpdate:(id)arg1 withSize:(struct CGSize)arg2;
- (id)_splitViewControllerImageForDisplayModeButtonToShowPrimary:(id)arg1;

@end
