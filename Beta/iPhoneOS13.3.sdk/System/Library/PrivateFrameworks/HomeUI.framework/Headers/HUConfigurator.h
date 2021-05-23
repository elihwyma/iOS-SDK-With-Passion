/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, NSString, UIViewController;

@protocol HUConfigurationViewController, HUConfiguratorDelegate;

@interface HUConfigurator : NSObject

{
    NSMutableArray *_displayedViewControllers;
    id <HUConfiguratorDelegate> _configuratorDelegate;
}

@property (weak, nonatomic) id <HUConfiguratorDelegate> configuratorDelegate;
@property (nonatomic, readonly) UIViewController<HUConfigurationViewController> *currentViewController;
@property (nonatomic, readonly) NSArray *displayedViewControllers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)viewController:(id)arg1 didFinishWithConfigurationResults:(id)arg2;
- (void)viewControllerDidGoBack:(id)arg1;
- (id)initWithConfiguratorDelegate:(id)arg1 initialViewController:(id)arg2;
- (void)viewControllerWillAppear:(id)arg1;
- (id)_nextViewControllerForResults:(id)arg1;
- (void)_addViewControllerToDisplay:(id)arg1;
- (void)_removeDisplayedViewController;
- (void)pushViewControllerForResults:(id)arg1;
- (void)popViewController;

@end
