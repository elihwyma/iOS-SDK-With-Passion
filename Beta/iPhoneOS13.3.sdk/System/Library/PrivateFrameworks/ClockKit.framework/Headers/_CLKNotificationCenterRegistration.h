/*
 Image: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
 */

#import <Foundation/NSObject.h>

@interface _CLKNotificationCenterRegistration : NSObject

{
    unsigned long long _registrationIdentifier;
    id _observer;
    SEL _selector;
}

@property (weak, nonatomic) id observer;
@property (nonatomic) SEL selector;

+ (void)recycleRegistration:(id)arg1;
+ (id)recycledRegistrationWithIdentifier:(unsigned long long)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)recycledCopy;

@end
