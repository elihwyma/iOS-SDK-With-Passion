/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

#import <StoreKitUI/Swift-Protocol.h>

@class NSString, NSURL, UIColor, UITabBarItem, UIViewController;

@interface SKUITabBarItem : NSObject <Swift>

{
    _Bool _alwaysCreatesRootViewController;
    long long _barTintStyle;
    UIViewController *_customRootViewController;
    NSString *_metricsIdentifier;
    NSURL *_rootURL;
    Class _rootViewControllerClass;
    NSString *_tabIdentifier;
    UITabBarItem *_underlyingTabBarItem;
    UIColor *_userInterfaceTintColor;
}

@property (nonatomic, readonly) NSString *tabIdentifier;
@property (nonatomic) _Bool alwaysCreatesRootViewController;
@property (nonatomic) long long barTintStyle;
@property (copy, nonatomic) NSString *metricsIdentifier;
@property (copy, nonatomic) NSURL *rootURL;
@property (retain, nonatomic) UIViewController *customRootViewController;
@property (retain, nonatomic) Class rootViewControllerClass;
@property (retain, nonatomic) UITabBarItem *underlyingTabBarItem;
@property (retain, nonatomic) UIColor *userInterfaceTintColor;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithTabIdentifier:(id)arg1;

@end
