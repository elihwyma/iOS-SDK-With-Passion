/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <ITMLKit/IKJSObject.h>

@class IKJSNavigationDocument, JSManagedValue, NSString, SKUITabBarItem;

__attribute__((visibility("hidden")))
@interface SKUIJSTabBarItem : IKJSObject

{
    JSManagedValue *_managedNavigationDocument;
    IKJSNavigationDocument *_navigationDocument;
    IKJSObject *_owner;
    SKUITabBarItem *_tabBarItem;
}

@property (nonatomic, readonly) SKUITabBarItem *tabBarItem;
@property (retain, nonatomic) NSString *badgeValue;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) IKJSNavigationDocument *navigationDocument;
@property (nonatomic, readonly) NSString *rootURL;
@property (nonatomic, readonly) NSString *title;

- (void)dealloc;
- (id)initWithAppContext:(id)arg1 navigationController:(id)arg2 tabBarItem:(id)arg3 owner:(id)arg4;

@end
