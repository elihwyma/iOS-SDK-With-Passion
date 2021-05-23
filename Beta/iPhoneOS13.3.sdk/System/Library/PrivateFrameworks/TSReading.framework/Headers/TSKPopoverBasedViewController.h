/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <UIKit/UIViewController.h>

@class NSString, TSKHideOnTouchOutsideViewGestureRecognizer, TSKModalShieldView, TSKPopoverController, UIView;

@protocol TSKPopoverBasedViewControllerDelegate;

@interface TSKPopoverBasedViewController : UIViewController

{
    TSKPopoverController *mPopoverController;
    TSKHideOnTouchOutsideViewGestureRecognizer *mHideOnTouchGestureRecognizer;
    _Bool mWrapInNavigationController;
    _Bool mUseDoneButton;
    _Bool mViewResizesWithKeyboard;
    _Bool mAllowsOutsideTouch;
    _Bool mStaysOpenOnOutsideTouches;
    UIView *mPopoverToggleView;
    id <TSKPopoverBasedViewControllerDelegate> mPopoverDelegate;
    UIViewController *mHalfHeightViewController;
    CDUnknownBlockType mHalfHeightCloseBlock;
    _Bool mHalfHeightAnimated;
    TSKModalShieldView *mHalfHeightTapShield;
    struct CGRect mHalfHeightOriginalFrame;
    UIView *mHalfHeightParentView;
    _Bool mViewControllerVisible;
    _Bool mDismissOnUndo;
    _Bool mUndoManagerNotificationsRegistered;
    _Bool mImposeContentSizeOnViewControllers;
}

@property (retain, nonatomic) UIViewController *halfHeightViewController;
@property (nonatomic) id <TSKPopoverBasedViewControllerDelegate> popoverDelegate;
@property (nonatomic) _Bool wrapInNavigationController;
@property (nonatomic) _Bool useDoneButton;
@property (nonatomic) _Bool viewResizesWithKeyboard;
@property (nonatomic, readonly) _Bool shouldHideToolbar;
@property (nonatomic, readonly) _Bool isPopoverGestureInFlight;
@property (nonatomic) _Bool dismissOnUndo;
@property (nonatomic) _Bool imposeContentSizeOnViewControllers;
@property (retain, nonatomic) UIView *popoverToggleView;
@property (nonatomic) _Bool allowsOutsideTouch;
@property (nonatomic) _Bool staysOpenOnOutsideTouches;
@property (nonatomic, readonly) struct CGSize contentSize;
@property (retain, nonatomic, readonly) TSKPopoverController *popoverController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (_Bool)isVisible;
- (void)dismissPopoverAnimated:(_Bool)arg1;
- (void)dismissAnimated:(_Bool)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidDisappear:(_Bool)arg1;
- (id)navigationBar;
- (_Bool)isPopoverVisible;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(_Bool)arg3;
- (void)p_dismissPopoverAnimated:(_Bool)arg1;
- (void)shieldViewReceivedTap;
- (id)i_contentViewController;
- (id)p_outsideTouchWatchView;
- (void)outsideTouch:(id)arg1;
- (void)p_installHideOnTouchGesture;
- (void)p_removeHideOnTouchGesture;
- (void)p_informDelegateOfDidDismiss;
- (void)closeButtonPressed;
- (void)p_informDelegateOfWillShow;
- (id)p_newRootViewController;
- (void)p_dismissFullscreenModalFromCloseButton;
- (id)p_newCloseImageBarButtonWithTarget:(id)arg1 action:(SEL)arg2;
- (void)i_configureCloseItem:(id)arg1;
- (void)presentModallyFromRect:(struct CGRect)arg1 inView:(id)arg2 viewController:(id)arg3 arrowDirection:(unsigned long long)arg4 animated:(_Bool)arg5;
- (void)presentModallyFromRect:(struct CGRect)arg1 inView:(id)arg2 viewController:(id)arg3 arrowDirection:(unsigned long long)arg4 animated:(_Bool)arg5 withDoneButton:(_Bool)arg6 constrainToView:(_Bool)arg7 withPadding:(double)arg8 fromToolbar:(_Bool)arg9;
- (void)p_registerPopoverBasedViewControllerNotifications;
- (void)p_showModalInViewController:(id)arg1 withTitle:(id)arg2 animated:(_Bool)arg3 withDoneButton:(_Bool)arg4;
- (void)showPopoverFromRect:(struct CGRect)arg1 inView:(id)arg2 arrowDirection:(unsigned long long)arg3 animated:(_Bool)arg4 constrainToView:(_Bool)arg5 withPadding:(double)arg6 fromToolbar:(_Bool)arg7;
- (void)showPopoverFromBarItem:(id)arg1;
- (void)presentInRect:(struct CGRect)arg1 inView:(id)arg2 animated:(_Bool)arg3 modal:(_Bool)arg4 closeBlock:(CDUnknownBlockType)arg5 animations:(CDUnknownBlockType)arg6;
- (void)p_dismissHalfHeightFromCloseButton;
- (void)p_applicationWillEnterFullScreen:(id)arg1;
- (void)p_informDelegateOfWillDismiss;
- (void)p_dismissHalfHeight;
- (void)p_dismissFullscreenModalAnimated:(_Bool)arg1;
- (void)p_willPresentPopover;
- (void)p_didDismissPopover:(id)arg1;
- (_Bool)wantsDismissButton;
- (void)p_keyboardWillHide:(_Bool)arg1 withNotification:(id)arg2;
- (_Bool)p_shouldResizeViewWithKeyboard;
- (double)p_originOffsetForKeyboardFrame:(struct CGRect)arg1;
- (struct CGRect)frameForCurrentiPhoneOrientation;
- (void)keyboardWillShowOrDock:(id)arg1;
- (void)keyboardWillHideOrUndock:(id)arg1;
- (void)keyboardDidHideOrUndock:(id)arg1;
- (id)p_topParentViewController;
- (void)clearOutsideTouchWatchView;
- (void)resetOutsideTouchWatchView;
- (void)presentModallyFromRect:(struct CGRect)arg1 inView:(id)arg2 viewController:(id)arg3;
- (void)presentModallyFromRect:(struct CGRect)arg1 inView:(id)arg2 viewController:(id)arg3 withDoneButton:(_Bool)arg4;
- (void)presentModallyFromRect:(struct CGRect)arg1 inView:(id)arg2 viewController:(id)arg3 arrowDirection:(unsigned long long)arg4 animated:(_Bool)arg5 withDoneButton:(_Bool)arg6;
- (void)presentModallyFromBarItem:(id)arg1 viewController:(id)arg2;
- (void)presentModallyWithTitle:(id)arg1 viewController:(id)arg2 animated:(_Bool)arg3 withDoneButton:(_Bool)arg4;
- (void)presentInRect:(struct CGRect)arg1 inView:(id)arg2 animated:(_Bool)arg3 modal:(_Bool)arg4 closeBlock:(CDUnknownBlockType)arg5;
- (void)showPopoverFromRect:(struct CGRect)arg1 inView:(id)arg2;
- (void)showPopoverFromRect:(struct CGRect)arg1 inView:(id)arg2 arrowDirection:(unsigned long long)arg3 animated:(_Bool)arg4;

@end
