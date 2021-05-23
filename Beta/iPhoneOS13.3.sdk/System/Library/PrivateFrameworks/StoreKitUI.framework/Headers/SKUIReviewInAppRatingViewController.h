/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UIViewController.h>

@class NSMutableArray, NSString, SKUIReviewInAppRatingHeaderView, SKUIStarRatingControl, UIInterfaceAction, UIStackView, UIVisualEffectView;

__attribute__((visibility("hidden")))
@interface SKUIReviewInAppRatingViewController : UIViewController

{
    _Bool _disableSubmit;
    CDUnknownBlockType _completion;
    CDUnknownBlockType _ratingHandler;
    UIVisualEffectView *_backgroundView;
    UIStackView *_stackView;
    NSMutableArray *_constraints;
    SKUIReviewInAppRatingHeaderView *_headerView;
    unsigned long long _state;
    UIInterfaceAction *_ratingControlAction;
    SKUIStarRatingControl *_ratingControl;
}

@property (retain, nonatomic) UIVisualEffectView *backgroundView;
@property (retain, nonatomic) UIStackView *stackView;
@property (retain, nonatomic) NSMutableArray *constraints;
@property (retain, nonatomic) SKUIReviewInAppRatingHeaderView *headerView;
@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) UIInterfaceAction *ratingControlAction;
@property (retain, nonatomic) SKUIStarRatingControl *ratingControl;
@property (copy, nonatomic) CDUnknownBlockType completion;
@property (copy, nonatomic) CDUnknownBlockType ratingHandler;
@property (nonatomic) _Bool disableSubmit;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)_actions;
- (void)interfaceAction:(id)arg1 invokeActionHandler:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;
- (void)_ratingControlChanged:(id)arg1;
- (id)initWithTitle:(id)arg1 message:(id)arg2 icon:(id)arg3;
- (void)reloadViewsConfiguration;
- (id)_actionsLayoutAxesForCurrentState;
- (id)_buttonActionWithTitle:(id)arg1 style:(unsigned long long)arg2;

@end
