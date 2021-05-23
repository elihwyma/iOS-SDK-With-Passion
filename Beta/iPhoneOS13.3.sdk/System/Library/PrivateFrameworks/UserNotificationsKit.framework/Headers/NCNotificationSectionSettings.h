/*
 Image: /System/Library/PrivateFrameworks/UserNotificationsKit.framework/UserNotificationsKit
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSSet, NSString, UIImage;

@interface NCNotificationSectionSettings : NSObject

{
    NSString *_sectionIdentifier;
    NSString *_subSectionIdentifier;
    NSString *_displayName;
    NSDictionary *_settings;
    NSSet *_subSectionSettings;
    _Bool _userConfigurable;
    UIImage *_settingsIcon;
    _Bool _showsCustomSettingsLink;
    _Bool _isDeliveredQuietly;
    _Bool _hasProvisialAuthorization;
}

@property (copy, nonatomic, readonly) NSString *sectionIdentifier;
@property (copy, nonatomic, readonly) NSString *subSectionIdentifier;
@property (copy, nonatomic, readonly) NSString *displayName;
@property (copy, nonatomic, readonly) NSDictionary *settings;
@property (copy, nonatomic, readonly) NSSet *subSectionSettings;
@property (nonatomic, readonly, getter=isUserConfigurable) _Bool userConfigurable;
@property (nonatomic, readonly) UIImage *settingsIcon;
@property (nonatomic, readonly) _Bool showsCustomSettingsLink;
@property (nonatomic, readonly) _Bool isDeliveredQuietly;
@property (nonatomic, readonly) _Bool hasProvisionalAuthorization;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)initWithNotificationSectionSettings:(id)arg1;

@end
