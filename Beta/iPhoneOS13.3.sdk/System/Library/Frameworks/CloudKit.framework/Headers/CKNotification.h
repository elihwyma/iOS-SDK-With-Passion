/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <NSObject.h>

@class CKNotificationID, CKRecordID, NSArray, NSNumber, NSString;

@interface CKNotification : NSObject

{
    _Bool _isPruned;
    long long _notificationType;
    CKNotificationID *_notificationID;
    NSString *_containerIdentifier;
    NSString *_alertBody;
    NSString *_alertLocalizationKey;
    NSArray *_alertLocalizationArgs;
    NSString *_title;
    NSString *_titleLocalizationKey;
    NSArray *_titleLocalizationArgs;
    NSString *_subtitle;
    NSString *_subtitleLocalizationKey;
    NSArray *_subtitleLocalizationArgs;
    NSString *_alertActionLocalizationKey;
    NSString *_alertLaunchImage;
    NSNumber *_badge;
    NSString *_soundName;
    NSString *_subscriptionID;
    NSString *_category;
    CKRecordID *_subscriptionOwnerUserRecordID;
}

@property (nonatomic) long long notificationType;
@property (copy, nonatomic) CKNotificationID *notificationID;
@property (copy, nonatomic) NSString *containerIdentifier;
@property (copy, nonatomic) CKRecordID *subscriptionOwnerUserRecordID;
@property (nonatomic) _Bool isPruned;
@property (copy, nonatomic) NSString *alertBody;
@property (copy, nonatomic) NSString *alertLocalizationKey;
@property (copy, nonatomic) NSArray *alertLocalizationArgs;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *titleLocalizationKey;
@property (copy, nonatomic) NSArray *titleLocalizationArgs;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *subtitleLocalizationKey;
@property (copy, nonatomic) NSArray *subtitleLocalizationArgs;
@property (copy, nonatomic) NSString *alertActionLocalizationKey;
@property (copy, nonatomic) NSString *alertLaunchImage;
@property (copy, nonatomic) NSNumber *badge;
@property (copy, nonatomic) NSString *soundName;
@property (copy, nonatomic) NSString *subscriptionID;
@property (copy, nonatomic) NSString *category;

+ (_Bool)supportsSecureCoding;
+ (id)notificationFromRemoteNotificationDictionary:(id)arg1;
+ (id)_realNotificationFromRemoteNotificationDictionary:(id)arg1;

- (id)init;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isRead;
- (id)CKPropertiesDescription;
- (id)_initBare;
- (id)initWithRemoteNotificationDictionary:(id)arg1;

@end
