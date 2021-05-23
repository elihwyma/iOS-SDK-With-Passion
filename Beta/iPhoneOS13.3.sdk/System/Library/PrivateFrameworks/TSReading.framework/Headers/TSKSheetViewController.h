/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <UIKit/UIViewController.h>

#import <TSReading/Swift-Protocol.h>

@class NSLayoutConstraint, NSString;

@protocol TSKSheetViewControllerDelegate;

@interface TSKSheetViewController : UIViewController <Swift>

{
    UIViewController *_contentViewController;
    NSLayoutConstraint *_contentVerticalConstraint;
    _Bool _isContentHidden;
    id <TSKSheetViewControllerDelegate> _delegate;
}

@property (nonatomic) id <TSKSheetViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (id)initWithContentViewController:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (void)animateTransition:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)animationControllerForDismissedController:(id)arg1;
- (_Bool)shouldAutorotate;
- (void)setContentHidden:(_Bool)arg1;
- (id)initWithContentViewController:(id)arg1 allowTapsOutsideContentView:(_Bool)arg2;
- (void)didTapView;
- (void)dismissSheetAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)isShowingForTransitionContext:(id)arg1;
- (void)animateShowWithContext:(id)arg1;
- (void)animateDismissWithContext:(id)arg1;

@end
