/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <UIKit/UIViewController.h>

@class MTMaterialShadowView, NSLayoutConstraint, NSMutableArray, NSMutableOrderedSet, NSString, SBIconController, SBIconModel, SBIconView, UILabel, UIPanGestureRecognizer, UIStackView, UIView;

@protocol SBCommandTabViewControllerDelegate;

@interface SBCommandTabViewController : UIViewController

{
    NSMutableOrderedSet *_recentDisplayItems;
    unsigned long long _selectedIndex;
    SBIconController *_iconController;
    SBIconModel *_iconModel;
    NSMutableArray *_iconViews;
    MTMaterialShadowView *_backgroundMaterialView;
    UIView *_blurredBackgroundView;
    UIView *_selectionSquareView;
    SBIconView *_selectedIconView;
    UILabel *_selectedIconLabel;
    NSLayoutConstraint *_selectionXLayoutConstraint;
    NSLayoutConstraint *_selectedLabelXConstraint;
    NSLayoutConstraint *_selectedLabelBottomConstraint;
    UIStackView *_stackView;
    SBIconView *_homeIconView;
    UIPanGestureRecognizer *_panGestureRecognizer;
    _Bool _isTouchDown;
    _Bool _isIconSelected;
    id <SBCommandTabViewControllerDelegate> _delegate;
}

@property (weak, nonatomic) id <SBCommandTabViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)next;
- (void)previous;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLoad;
- (_Bool)canBecomeFirstResponder;
- (_Bool)iconViewDisplaysBadges:(id)arg1;
- (_Bool)iconViewCanBeginDrags:(id)arg1;
- (void)iconTouchBegan:(id)arg1;
- (void)iconTapped:(id)arg1;
- (void)icon:(id)arg1 touchEnded:(_Bool)arg2;
- (void)_handleCommandTab:(id)arg1;
- (void)_handleShiftCommandTab:(id)arg1;
- (void)removeDisplayItem:(id)arg1;
- (id)selectedApplicationDisplayItem;
- (unsigned long long)indexOfDisplayItem:(id)arg1;
- (void)showCommandTabBar;
- (id)initWithRecentDisplayItems:(id)arg1;
- (void)iconModelDidChange:(id)arg1;
- (void)_handleUIGesture:(id)arg1;
- (void)_updateForUserInterfaceStyle;
- (void)_moveSelectionSquareToIconAtIndex:(unsigned long long)arg1;
- (void)_updateIconSelectionPositionAndLabelText;

@end
