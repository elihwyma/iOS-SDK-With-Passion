/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIApplicationShortcutItem.h>

@class NSDictionary, NSString, UIApplicationShortcutIcon;

@interface UIMutableApplicationShortcutItem : UIApplicationShortcutItem

@property (nonatomic) unsigned long long activationMode;
@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *localizedTitle;
@property (copy, nonatomic) NSString *localizedSubtitle;
@property (copy, nonatomic) UIApplicationShortcutIcon *icon;
@property (copy, nonatomic) NSDictionary *userInfo;
@property (copy, nonatomic) id targetContentIdentifier;

- (id)copyWithZone:(struct _NSZone *)arg1;

@end
