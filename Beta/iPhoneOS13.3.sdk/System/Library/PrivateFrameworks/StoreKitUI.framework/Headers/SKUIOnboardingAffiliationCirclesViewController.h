/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UIViewController.h>

@class NSArray, NSMapTable, NSMutableArray, NSObject, NSString, SKUIClientContext, SKUIOnboardingInstructionsView, SKUIPhysicalCirclesView, UIView;

@protocol OS_dispatch_source, SKUIOnboardingAffiliationCirclesDelegate;

__attribute__((visibility("hidden")))
@interface SKUIOnboardingAffiliationCirclesViewController : UIViewController

{
    NSMutableArray *_affiliationItems;
    SKUIPhysicalCirclesView *_circlesView;
    SKUIClientContext *_clientContext;
    id <SKUIOnboardingAffiliationCirclesDelegate> _delegate;
    NSObject<OS_dispatch_source> *_deletionTimer;
    _Bool _didPerformFinishAnimation;
    UIView *_footerView;
    NSMapTable *_images;
    SKUIOnboardingInstructionsView *_instructionsView;
    _Bool _needsReloadOnDidAppear;
}

@property (copy, nonatomic) NSArray *affiliationItems;
@property (retain, nonatomic) SKUIClientContext *clientContext;
@property (weak, nonatomic) id <SKUIOnboardingAffiliationCirclesDelegate> delegate;
@property (nonatomic, readonly) SKUIOnboardingInstructionsView *instructionsView;
@property (nonatomic, readonly) double maximumCircleDiameter;
@property (retain, nonatomic) UIView *footerView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)loadView;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)setFooterView:(id)arg1 animated:(_Bool)arg2;
- (void)setImage:(id)arg1 forAffiliationItem:(id)arg2;
- (void)setUserAffinityCount:(long long)arg1 forAffiliationItemAtIndex:(long long)arg2 animated:(_Bool)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)removeAffiliationItemsInIndexSet:(id)arg1 animated:(_Bool)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)addAffiliationItems:(id)arg1;
- (void)performFinishAnimationWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)resetWithAffiliationItems:(id)arg1 animated:(_Bool)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (struct CGSize)_circleSizeForAffinityCount:(long long)arg1;
- (long long)_titlePositionForAffinityCount:(long long)arg1;
- (double)_circleImageAlphaForAffinityCount:(long long)arg1;
- (void)_reloadRepellors;
- (double)_topLayoutMargin;
- (void)_cancelDeletionTimer;
- (void)_completeDeletionForCircleAtIndex:(long long)arg1;
- (void)_sendAffilationItemsDidChange;
- (long long)numberOfCirclesInCircleView:(id)arg1;
- (id)circlesView:(id)arg1 circleForIndex:(long long)arg2;
- (void)circleView:(id)arg1 didBeginLongPressForCircleAtIndex:(long long)arg2;
- (void)circleView:(id)arg1 didEndLongPressForCircleAtIndex:(long long)arg2;
- (void)circleView:(id)arg1 didTapCircleAtIndex:(long long)arg2;

@end
