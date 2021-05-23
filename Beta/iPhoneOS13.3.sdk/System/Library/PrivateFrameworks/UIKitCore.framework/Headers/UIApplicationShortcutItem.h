/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSData, NSDictionary, NSString, SBSApplicationShortcutItem, UIApplicationShortcutIcon;

@interface UIApplicationShortcutItem : NSObject <Swift>

{
    NSString *_type;
    NSString *_localizedTitle;
    NSString *_localizedSubtitle;
    UIApplicationShortcutIcon *_icon;
    id _targetContentIdentifier;
    unsigned long long _activationMode;
    NSData *_userInfoData;
}

@property (copy, nonatomic, readonly) SBSApplicationShortcutItem *sbsShortcutItem;
@property (nonatomic, readonly) unsigned long long activationMode;
@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *localizedTitle;
@property (copy, nonatomic) NSString *localizedSubtitle;
@property (copy, nonatomic) UIApplicationShortcutIcon *icon;
@property (copy, nonatomic) NSDictionary *userInfo;
@property (nonatomic) unsigned long long activationMode;
@property (copy, nonatomic) NSData *userInfoData;
@property (copy, nonatomic) id targetContentIdentifier;

+ (_Bool)supportsSecureCoding;
+ (unsigned long long)_uiActivationModeFromSBSActivationMode:(unsigned long long)arg1;
+ (unsigned long long)_sbsActivationModeFromUIActivationMode:(unsigned long long)arg1;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)initWithType:(id)arg1 localizedTitle:(id)arg2 localizedSubtitle:(id)arg3 icon:(id)arg4 userInfo:(id)arg5;
- (id)_initWithType:(id)arg1 localizedTitle:(id)arg2 localizedSubtitle:(id)arg3 icon:(id)arg4 userInfoData:(id)arg5 activationMode:(unsigned long long)arg6 targetContentIdentifier:(id)arg7;
- (id)initWithType:(id)arg1 localizedTitle:(id)arg2;
- (id)initWithSBSApplicationShortcutItem:(id)arg1;

@end
