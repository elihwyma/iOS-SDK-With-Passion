/*
 Image: /System/Library/PrivateFrameworks/CoreFollowUp.framework/CoreFollowUp
 */

#import <Foundation/NSObject.h>

@class FLFollowUpNotification, NSArray, NSData, NSDictionary, NSString;

@interface FLFollowUpItem : NSObject

{
    _Bool _showInSettings;
    _Bool _shouldPersistWhenActivated;
    _Bool _shouldPersistWhenDismissed;
    NSString *_uniqueIdentifier;
    NSString *_groupIdentifier;
    FLFollowUpNotification *_notification;
    NSString *_targetBundleIdentifier;
    NSString *_title;
    NSString *_informativeText;
    NSString *_informativeFooterText;
    NSString *_representingBundlePath;
    NSString *_bundleIconName;
    unsigned long long _displayStyle;
    NSString *_categoryIdentifier;
    NSString *_extensionIdentifier;
    NSArray *_actions;
    NSDictionary *_userInfo;
    unsigned long long _sqlID;
    NSString *_clientIdentifier;
    NSString *_delegateMachServiceName;
}

@property (nonatomic) unsigned long long sqlID;
@property (copy, nonatomic) NSString *clientIdentifier;
@property (copy, nonatomic) NSString *delegateMachServiceName;
@property (retain, nonatomic) NSData *_userInfoData;
@property (copy, nonatomic) NSString *uniqueIdentifier;
@property (copy, nonatomic) NSString *groupIdentifier;
@property (retain, nonatomic) FLFollowUpNotification *notification;
@property (nonatomic) _Bool showInSettings;
@property (copy, nonatomic) NSString *targetBundleIdentifier;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *informativeText;
@property (copy, nonatomic) NSString *informativeFooterText;
@property (copy, nonatomic) NSString *representingBundlePath;
@property (copy, nonatomic) NSString *bundleIconName;
@property unsigned long long displayStyle;
@property (copy) NSString *categoryIdentifier;
@property (copy) NSString *extensionIdentifier;
@property (copy) NSArray *actions;
@property (copy) NSDictionary *userInfo;
@property _Bool shouldPersistWhenActivated;
@property _Bool shouldPersistWhenDismissed;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithoutDefaults;
- (_Bool)isHSA2LoginItem;
- (_Bool)isHSA2PasswordResetItem;

@end
