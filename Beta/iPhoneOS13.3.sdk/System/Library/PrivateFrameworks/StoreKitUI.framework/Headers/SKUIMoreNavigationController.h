/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UIMoreNavigationController.h>

@class UINavigationController, UIViewController;

@protocol SKUIMoreNavigationControllerDelegate;

__attribute__((visibility("hidden")))
@interface SKUIMoreNavigationController : UIMoreNavigationController

{
    UINavigationController *_displayedViewController;
    UIViewController *_firstActualViewController;
    id <SKUIMoreNavigationControllerDelegate> _storeKitDelegate;
}

@property (weak, nonatomic) id <SKUIMoreNavigationControllerDelegate> storeKitDelegate;

+ (Class)_moreListControllerClass;

- (unsigned long long)supportedInterfaceOrientations;
- (void)pushViewController:(id)arg1 animated:(_Bool)arg2;
- (void)didShowViewController:(id)arg1 animated:(_Bool)arg2;
- (id)displayedViewController;
- (void)setDisplayedViewController:(id)arg1;

@end
