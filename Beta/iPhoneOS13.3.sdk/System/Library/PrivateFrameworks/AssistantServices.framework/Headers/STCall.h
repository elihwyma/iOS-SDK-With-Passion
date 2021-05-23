/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <AssistantServices/STSiriModelObject.h>

@class STContactAddress;

@interface STCall : STSiriModelObject

{
    long long _service;
    STContactAddress *_initiatorAddress;
    STContactAddress *_recipientAddress;
}

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (long long)service;
- (void)setService:(long long)arg1;
- (id)_aceContextObjectValue;
- (id)initiatorAddress;
- (void)setInitiatorAddress:(id)arg1;
- (id)recipientAddress;
- (void)setRecipientAddress:(id)arg1;

@end
