/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <UIKit/UINavigationController.h>

@class HKProfileBarButtonItem, NSString;

@interface HKNavigationController : UINavigationController

{
    HKProfileBarButtonItem *_commonProfileBarButtonItem;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (unsigned long long)navigationControllerSupportedInterfaceOrientations:(id)arg1;
- (id)initWithRootViewController:(id)arg1;
- (id)commonProfileBarButtonItem;
- (void)didTapTabBarIcon;
- (void)didChangeToAnotherTab;
- (id)initLargeTitlesNavigationControllerWithRootViewController:(id)arg1;

@end
