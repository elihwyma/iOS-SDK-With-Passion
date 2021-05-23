/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUINavigationController.h>

@class NSString;

@protocol SKUINavigationStackObserver;

@interface SKUIScrollingTabNavigationController : SKUINavigationController

{
    id <SKUINavigationStackObserver> _navigationStackObserver;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <SKUINavigationStackObserver> navigationStackObserver;
@property (nonatomic, getter=isShowingNavigationStackRootContent) _Bool showingNavigationStackRootContent;

- (void)presentViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)dismissViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (void)didShowViewController:(id)arg1 animated:(_Bool)arg2;
- (double)_scrollViewBottomContentInsetForViewController:(id)arg1;
- (void)scrollingTabBarBottomInsetAdjustmentDidChange;
- (void)popToNavigationStackRootContentAnimated:(_Bool)arg1 withBehavior:(long long)arg2;
- (void)_observedNavigationStackDidChange;

@end
