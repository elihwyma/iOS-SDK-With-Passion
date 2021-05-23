/*
 Image: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
 */

#import <NSObject.h>

@class NSString;

@interface UNSNotificationTopicRecord : NSObject

{
    _Bool _supportsAlerts;
    _Bool _supportsBadges;
    _Bool _supportsSounds;
    _Bool _supportsLockScreen;
    _Bool _supportsNotificationCenter;
    _Bool _supportsCarPlay;
    _Bool _supportsSpoken;
    _Bool _supportsCriticalAlerts;
    _Bool _modalAlertStyle;
    NSString *_identifier;
    NSString *_displayName;
    NSString *_displayNameLocalizationKey;
    unsigned long long _priority;
    NSString *_sortIdentifier;
}

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSString *displayNameLocalizationKey;
@property (nonatomic) unsigned long long priority;
@property (copy, nonatomic) NSString *sortIdentifier;
@property (nonatomic) _Bool supportsAlerts;
@property (nonatomic) _Bool supportsBadges;
@property (nonatomic) _Bool supportsSounds;
@property (nonatomic) _Bool supportsLockScreen;
@property (nonatomic) _Bool supportsNotificationCenter;
@property (nonatomic) _Bool supportsCarPlay;
@property (nonatomic) _Bool supportsSpoken;
@property (nonatomic) _Bool supportsCriticalAlerts;
@property (nonatomic) _Bool modalAlertStyle;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)arg1;

@end
