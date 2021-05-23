/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UIViewController.h>

#import <StoreKitUI/Swift-Protocol.h>

@class NSArray, NSMutableArray, NSString, UIColor, UIControl, UITapGestureRecognizer;

@protocol SKUIOverlayContainerDelegate;

__attribute__((visibility("hidden")))
@interface SKUIOverlayContainerViewController : UIViewController <Swift>

{
    UIControl *_backstopView;
    _Bool _isAdjustingViewsForDismiss;
    long long _popViewControllerCount;
    long long _selectedViewControllerIndex;
    UITapGestureRecognizer *_tapGestureRecognizer;
    NSMutableArray *_viewControllers;
    id <SKUIOverlayContainerDelegate> _delegate;
}

@property (nonatomic, readonly) UIColor *dimmingViewColor;
@property (nonatomic, readonly) UIControl *backstopControl;
@property (copy, nonatomic, readonly) NSArray *viewControllers;
@property (weak, nonatomic) id <SKUIOverlayContainerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)loadView;
- (void)traitCollectionDidChange:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (void)popViewControllerAnimated:(_Bool)arg1;
- (id)_selectedViewController;
- (_Bool)shouldAutomaticallyForwardAppearanceMethods;
- (void)_tapAction:(id)arg1;
- (void)showViewControllers:(id)arg1;
- (void)showViewController:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)dismissWithFadeTransitionCompletionBlock:(CDUnknownBlockType)arg1;
- (void)dismissWithFlipTransition:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)showViewController:(id)arg1 withFlipTransition:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)_frameAction:(id)arg1;
- (void)_removeChildren;
- (void)popViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_positionViewControllersForSize:(struct CGSize)arg1 traitCollection:(id)arg2;
- (void)_popViewControllers;
- (void)_fadeInViewController:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)_slideInViewController:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)_pushViewController:(id)arg1;
- (struct CGRect)_centeredFrameForViewController:(id)arg1 inBounds:(struct CGRect)arg2;
- (id)_viewControllerForPoint:(struct CGPoint)arg1;
- (long long)_indexOfViewControllerForPoint:(struct CGPoint)arg1;
- (struct CGSize)_overlaySizeForController:(id)arg1 atBoundsSize:(struct CGSize)arg2;
- (double)_overlaySpacingForSize:(struct CGSize)arg1;
- (void)replaceViewController:(id)arg1 withViewController:(id)arg2;

@end
