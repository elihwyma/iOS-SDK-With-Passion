/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <UIKit/UIViewController.h>

@class CKComponentHostingView, NSArray, NSLayoutConstraint, NSString, UIResponder, UIScrollView, UIView, WFAction, WFComponentNavigationContextImpl, WFModuleModel;

@protocol WFParameterInputViewControllerDelegate;

@interface WFParameterInputViewController : UIViewController

{
    id <WFParameterInputViewControllerDelegate> _delegate;
    WFModuleModel *_moduleModel;
    WFAction *_fakeAction;
    NSArray *_processingParameters;
    UIScrollView *_scrollView;
    CKComponentHostingView *_moduleView;
    WFComponentNavigationContextImpl *_navigationContext;
    UIResponder *_wf_firstResponder;
    UIView *_firstResponderHintView;
    NSLayoutConstraint *_hintBottomConstraint;
}

@property (nonatomic, readonly) WFModuleModel *moduleModel;
@property (nonatomic, readonly) WFAction *fakeAction;
@property (nonatomic, readonly) NSArray *processingParameters;
@property (weak, nonatomic) UIScrollView *scrollView;
@property (weak, nonatomic) CKComponentHostingView *moduleView;
@property (retain, nonatomic) WFComponentNavigationContextImpl *navigationContext;
@property (weak, nonatomic) UIResponder *wf_firstResponder;
@property (weak, nonatomic) UIView *firstResponderHintView;
@property (retain, nonatomic) NSLayoutConstraint *hintBottomConstraint;
@property (weak, nonatomic) id <WFParameterInputViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)componentForModel:(id)arg1 context:(id)arg2;

- (void)dealloc;
- (void)loadView;
- (void)viewWillLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (double)transitionDuration:(id)arg1;
- (void)animateTransition:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)animationControllerForDismissedController:(id)arg1;
- (long long)preferredStatusBarStyle;
- (id)keyCommands;
- (void)keyboardWillChangeFrame:(id)arg1;
- (double)moduleWidthForViewSize:(struct CGSize)arg1;
- (void)componentHostingViewDidInvalidateSize:(id)arg1;
- (id)initWithAction:(id)arg1 parameters:(id)arg2 initialStates:(id)arg3 forRunning:(_Bool)arg4;
- (void)updateScrollViewWithModuleSize:(struct CGSize)arg1;
- (void)layoutHostingViewAnimated:(_Bool)arg1;
- (void)moduleComponentDidCancel;
- (void)moduleComponentDidFinish;
- (void)responderDidBeginEditing:(id)arg1;
- (void)responderDidEndEditing:(id)arg1;
- (void)positionFirstResponderHintViewAnimated:(_Bool)arg1;

@end
