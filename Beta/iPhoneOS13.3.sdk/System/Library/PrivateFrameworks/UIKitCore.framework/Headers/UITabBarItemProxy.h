/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class UITabBarButton, UITabBarItem;

__attribute__((visibility("hidden")))
@interface UITabBarItemProxy : NSObject

{
    UITabBarItem *_item;
    UITabBarButton *_view;
}

- (id)item;
- (id)view;
- (void)setSelected:(_Bool)arg1;
- (id)initWithItem:(id)arg1 inTabBar:(id)arg2;

@end
