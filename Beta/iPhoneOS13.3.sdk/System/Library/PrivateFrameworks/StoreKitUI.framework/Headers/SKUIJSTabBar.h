/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <ITMLKit/IKJSObject.h>

@class NSArray, SKUIApplicationController, SKUIJSTabBarItem;

__attribute__((visibility("hidden")))
@interface SKUIJSTabBar : IKJSObject

{
    SKUIApplicationController *_applicationController;
    NSArray *_tabs;
    SKUIJSTabBarItem *_transientTab;
}

@property (retain, nonatomic) SKUIJSTabBarItem *selectedTab;
@property (nonatomic, readonly) NSArray *tabs;
@property (nonatomic, readonly) SKUIJSTabBarItem *transientTab;

- (void)sendOnUpdateWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithAppContext:(id)arg1 controller:(id)arg2;
- (void)sendOnUpdate;
- (void)sendOnNeedsContentForTabBarItem:(id)arg1;
- (void)_reloadTabBarItemsWithPreludeMainThreadWork:(CDUnknownBlockType)arg1;
- (id)_selectedTabBarItemForIndex:(long long)arg1;

@end
