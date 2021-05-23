/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/Swift-Protocol.h>

@class NSArray, SKUIJSTabBarItem;

@protocol SKUIJSTabBar <Swift>

@property (retain, nonatomic) SKUIJSTabBarItem *selectedTab;
@property (nonatomic, readonly) NSArray *tabs;
@property (nonatomic, readonly) SKUIJSTabBarItem *transientTab;

@end
