/*
 Image: /System/Library/Frameworks/UserNotifications.framework/UserNotifications
 */

#import <Foundation/NSString.h>

@class NSArray;

@interface NSString (UNUserNotificationCenterSupport)

@property (copy, nonatomic, readonly) NSArray *un_localizedStringArguments;
@property (copy, nonatomic, readonly) NSString *un_localizedStringKey;
@property (copy, nonatomic, readonly) NSString *un_localizedStringValue;

+ (id)localizedUserNotificationStringForKey:(id)arg1 arguments:(id)arg2;

- (id)un_logDigest;
- (unsigned long long)un_unsignedLongLongValue;
- (id)un_stringWithMaxLength:(unsigned long long)arg1;

@end
