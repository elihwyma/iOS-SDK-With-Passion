/*
 Image: /System/Library/PrivateFrameworks/NearField.framework/NearField
 */

#import <NearField/NFFieldNotification.h>

@interface NFFieldNotificationECP1_0 : NFFieldNotification

{
    _Bool _odaRequired;
    unsigned int _terminalMode;
    unsigned int _terminalType;
}

@property (readonly) _Bool odaRequired;
@property (readonly) unsigned int terminalMode;
@property (readonly) unsigned int terminalType;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end
