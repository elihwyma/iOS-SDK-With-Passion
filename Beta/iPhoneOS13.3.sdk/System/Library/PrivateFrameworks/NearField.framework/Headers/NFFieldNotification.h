/*
 Image: /System/Library/PrivateFrameworks/NearField.framework/NearField
 */

#import <Foundation/NSObject.h>

@interface NFFieldNotification : NSObject

{
    unsigned short _typeFSystemCode;
    unsigned int _rfTechnology;
    unsigned long long _notificationType;
}

@property (readonly) unsigned long long notificationType;
@property (readonly) unsigned int rfTechnology;
@property (readonly) unsigned short typeFSystemCode;

+ (_Bool)supportsSecureCoding;
+ (id)notificationWithDictionary:(id)arg1;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (void)setNotificationType:(unsigned long long)arg1;

@end
