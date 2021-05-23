/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSSet;

@interface UIUserNotificationSettings : NSObject <Swift>

{
    unsigned long long _types;
    NSSet *_categories;
}

@property (nonatomic, readonly) unsigned long long types;
@property (copy, nonatomic, readonly) NSSet *categories;

+ (_Bool)supportsSecureCoding;
+ (id)settingsForTypes:(unsigned long long)arg1 categories:(id)arg2;
+ (id)settingsForUserNotificationTypes:(unsigned long long)arg1 userNotificationActionSettings:(id)arg2;
+ (id)settingsForRegisteredSettings:(id)arg1 requestedSettings:(id)arg2;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)validatedSettings;
- (id)initWithUserNotificationTypes:(unsigned long long)arg1 userNotificationActionSettings:(id)arg2;
- (id)initWithTypes:(unsigned long long)arg1 categories:(id)arg2;
- (_Bool)mayPresentUserNotificationOfType:(unsigned long long)arg1;
- (unsigned long long)allowedUserNotificationTypes;
- (id)userNotificationActionSettings;

@end
