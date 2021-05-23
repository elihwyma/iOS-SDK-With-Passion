/*
 Image: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface SGSimpleNamedEmailAddress : NSObject

{
    NSString *_emailAddress;
    NSString *_name;
}

@property (nonatomic, readonly) NSString *emailAddress;
@property (nonatomic, readonly) NSString *name;

+ (_Bool)supportsSecureCoding;
+ (id)namedEmailAddressWithFieldValue:(id)arg1;
+ (id)namedEmailAddressWithCSPerson:(id)arg1;
+ (id)namedEmailAddressesWithFieldValues:(id)arg1;
+ (id)namedEmailAddressesWithEmailToNameDictionary:(id)arg1;
+ (id)emailToNameDictionaryWithNamedEmailAddresses:(id)arg1;
+ (id)serializeAll:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)serialized;
- (id)initWithName:(id)arg1 emailAddress:(id)arg2;
- (_Bool)isEqualToNamedEmailAddress:(id)arg1;
- (id)asCSPerson;

@end
