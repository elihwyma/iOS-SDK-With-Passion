/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/HUConfigurator.h>

@class NSArray;

@interface HUStaticConfigurator : HUConfigurator

{
    NSArray *_staticViewControllers;
}

@property (copy, nonatomic) NSArray *staticViewControllers;

- (id)_nextViewControllerForResults:(id)arg1;
- (id)initWithConfiguratorDelegate:(id)arg1 viewControllers:(id)arg2;
- (id)initWithConfiguratorDelegate:(id)arg1 contentViewControllers:(id)arg2;

@end
