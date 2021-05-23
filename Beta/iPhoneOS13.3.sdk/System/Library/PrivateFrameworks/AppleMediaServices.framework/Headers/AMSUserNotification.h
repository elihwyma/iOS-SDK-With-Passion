/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <Foundation/NSObject.h>

#import <AppleMediaServices/Swift-Protocol.h>

@class ACAccount, AMSUserNotificationAction, NSArray, NSDictionary, NSMutableDictionary, NSString, NSURL;

@interface AMSUserNotification : NSObject <Swift>

{
    _Bool _explicitContent;
    _Bool _shouldSuppressDefaultAction;
    ACAccount *_account;
    NSURL *_artworkUrl;
    NSURL *_videoUrl;
    NSArray *_buttonActions;
    AMSUserNotificationAction *_defaultAction;
    NSString *_identifier;
    NSString *_informativeText;
    NSString *_logKey;
    NSDictionary *_metricsEvent;
    NSString *_centerBundleIdentifier;
    NSString *_subtitle;
    NSString *_title;
    NSMutableDictionary *_userInfo;
    long long _intent;
    NSString *_categoryIdentifier;
    NSString *_threadIdentifier;
}

@property (nonatomic) long long intent;
@property (retain, nonatomic) NSString *categoryIdentifier;
@property (nonatomic) _Bool shouldSuppressDefaultAction;
@property (retain, nonatomic) NSString *threadIdentifier;
@property (retain, nonatomic) ACAccount *account;
@property (retain, nonatomic) NSURL *artworkUrl;
@property (retain, nonatomic) NSURL *videoUrl;
@property (retain, nonatomic) NSArray *buttonActions;
@property (retain, nonatomic) AMSUserNotificationAction *defaultAction;
@property (nonatomic) _Bool explicitContent;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *informativeText;
@property (retain, nonatomic) NSString *logKey;
@property (retain, nonatomic) NSDictionary *metricsEvent;
@property (retain, nonatomic) NSString *centerBundleIdentifier;
@property (retain, nonatomic) NSString *subtitle;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSMutableDictionary *userInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)bagSubProfile;
+ (id)bagSubProfileVersion;
+ (id)bagKeySet;
+ (long long)explicitEnabledForCenterBundleID:(id)arg1;
+ (void)handleServiceExtensionNotificationRequest:(id)arg1 bag:(id)arg2 withContentHandler:(CDUnknownBlockType)arg3;
+ (void)addRequiredBagKeysToAggregator:(id)arg1;
+ (_Bool)_canParseNotificationWithIdentifier:(id)arg1 userInfo:(id)arg2;
+ (_Bool)shouldHandleNotificationResponse:(id)arg1;
+ (void)openAppUsingBundleIdentifier:(id)arg1;
+ (id)_downloadAssetAtUrl:(id)arg1 withIdentifier:(id)arg2 logKey:(id)arg3 bag:(id)arg4;
+ (id)_cachedImagePathForIdentifier:(id)arg1 assetURL:(id)arg2;
+ (id)handleNotificationResponse:(id)arg1 bag:(id)arg2;
+ (id)notificationWithPayload:(id)arg1 andConfig:(id)arg2;
+ (id)notificationCenter:(id)arg1 didChangeSettings:(id)arg2 bag:(id)arg3;
+ (id)notificationCenter:(id)arg1 openSettingsForNotification:(id)arg2 bag:(id)arg3;
+ (_Bool)shouldHandleServiceExtensionNotificationRequest:(id)arg1;
+ (id)handleNotificationResponse:(id)arg1 bagContract:(id)arg2;

- (id)initWithTitle:(id)arg1;
- (id)initWithUNNotification:(id)arg1;
- (id)createUNNotificationContent;
- (id)initWithTitle:(id)arg1 intent:(long long)arg2;
- (id)initWithPayload:(id)arg1 andConfig:(id)arg2;
- (id)_generatePayload;
- (id)handleSelectedButton:(id)arg1 bag:(id)arg2;
- (id)initWithNSUserNotification:(id)arg1;
- (id)createNSUserNotification;
- (id)createUNNotificationActions;
- (void)addButtonAction:(id)arg1;
- (id)handleSelectedButton:(id)arg1 bagContract:(id)arg2;

@end
