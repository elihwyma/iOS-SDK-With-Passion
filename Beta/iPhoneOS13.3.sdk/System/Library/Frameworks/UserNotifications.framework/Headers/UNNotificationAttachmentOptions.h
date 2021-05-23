/*
 Image: /System/Library/Frameworks/UserNotifications.framework/UserNotifications
 */

#import <Foundation/NSObject.h>

@interface UNNotificationAttachmentOptions : NSObject

+ (_Bool)supportsSecureCoding;
+ (id)optionsForFamily:(unsigned long long)arg1 fromOptionsDictionary:(id)arg2;
+ (Class)optionsClassForFamily:(unsigned long long)arg1;
+ (id)optionsFromOptionsDictionary:(id)arg1;
+ (id)optionsClasses;
+ (struct CGRect)santizedClippingRect:(struct CGRect)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
