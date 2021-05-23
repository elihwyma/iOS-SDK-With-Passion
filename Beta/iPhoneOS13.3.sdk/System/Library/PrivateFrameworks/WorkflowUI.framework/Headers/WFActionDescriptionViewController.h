/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <UIKit/UIViewController.h>

#import <WorkflowUI/Swift-Protocol.h>

@class NSString, UIButton, UIScrollView, UIVisualEffectView, WFAction, WFActionDescriptionTitleView, WFActionDocumentationView, WFActionDrawerState;

@protocol WFActionDescriptionViewControllerDelegate;

@interface WFActionDescriptionViewController : UIViewController <Swift>

{
    id <WFActionDescriptionViewControllerDelegate> _delegate;
    WFActionDescriptionTitleView *_titleView;
    UIButton *_dismissButton;
    UIScrollView *_scrollView;
    WFActionDocumentationView *_documentationView;
    UIVisualEffectView *_blurView;
}

@property (nonatomic, readonly) WFActionDescriptionTitleView *titleView;
@property (nonatomic, readonly) UIButton *dismissButton;
@property (nonatomic, readonly) UIScrollView *scrollView;
@property (nonatomic, readonly) WFActionDocumentationView *documentationView;
@property (weak, nonatomic) UIVisualEffectView *blurView;
@property (weak, nonatomic) id <WFActionDescriptionViewControllerDelegate> delegate;
@property (weak, nonatomic) WFAction *action;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) WFActionDrawerState *state;

- (id)init;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (_Bool)moveToState:(id)arg1 animated:(_Bool)arg2;
- (void)actionDocumentationViewDidSelectAddToWorkflowWithAction:(id)arg1;

@end
