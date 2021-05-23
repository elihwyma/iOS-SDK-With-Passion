/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <AssistantServices/STSiriModelObject.h>

@class NSString, NSURL;

@interface STContactAddress : STSiriModelObject

{
    long long _type;
    NSString *_stringValue;
    NSURL *_contactIdentifier;
    NSString *_contactInternalGUID;
}

+ (_Bool)supportsSecureCoding;

- (id)description;
- (long long)type;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)stringValue;
- (id)contactIdentifier;
- (id)initWithStringValue:(id)arg1;
- (id)initWithType:(long long)arg1 stringValue:(id)arg2;
- (id)initWithType:(long long)arg1 stringValue:(id)arg2 contactIdentifier:(id)arg3 contactInternalGUID:(id)arg4;
- (id)contactInternalGUID;
- (id)_aceContextObjectValue;

@end
