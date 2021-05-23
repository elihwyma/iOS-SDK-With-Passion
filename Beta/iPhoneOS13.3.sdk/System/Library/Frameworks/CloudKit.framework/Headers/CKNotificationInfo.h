/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <NSObject.h>

@class NSArray, NSString;

@interface CKNotificationInfo : NSObject

{
    _Bool _shouldBadge;
    _Bool _shouldSendContentAvailable;
    _Bool _shouldSendMutableContent;
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
    NSString *_soundName;
    NSArray *_desiredKeys;
    NSString *_category;
    NSString *_collapseIDKey;
}

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
@property (copy, nonatomic) NSString *soundName;
@property (copy, nonatomic) NSArray *desiredKeys;
@property (nonatomic) _Bool shouldBadge;
@property (nonatomic) _Bool shouldSendContentAvailable;
@property (nonatomic) _Bool shouldSendMutableContent;
@property (copy, nonatomic) NSString *category;
@property (copy, nonatomic) NSString *collapseIDKey;

+ (_Bool)supportsSecureCoding;
+ (id)notificationInfo;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_setAlertBodyNoValidate:(id)arg1;
- (void)_setAlertLocalizationKeyNoValidate:(id)arg1;
- (void)_setAlertLocalizationArgsNoValidate:(id)arg1;
- (void)_setTitleNoValidate:(id)arg1;
- (void)_setTitleLocalizationKeyNoValidate:(id)arg1;
- (void)_setTitleLocalizationArgsNoValidate:(id)arg1;
- (void)_setSubtitleNoValidate:(id)arg1;
- (void)_setSubtitleLocalizationKeyNoValidate:(id)arg1;
- (void)_setSubtitleLocalizationArgsNoValidate:(id)arg1;
- (void)_setAlertActionLocalizationKeyNoValidate:(id)arg1;
- (void)_setAlertLaunchImageNoValidate:(id)arg1;
- (void)_setSoundNameNoValidate:(id)arg1;
- (void)_setShouldBadgeNoValidate:(_Bool)arg1;
- (void)_setShouldSendContentAvailableNoValidate:(_Bool)arg1;
- (void)_setShouldSendMutableContentNoValidate:(_Bool)arg1;
- (void)_setCategoryNoValidate:(id)arg1;

@end
