/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Contacts/CNPredicate.h>

@class CNPhoneNumber, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface CNPhoneNumberContactPredicate : CNPredicate

{
    _Bool _returnsMultipleResults;
    CNPhoneNumber *_phoneNumber;
    NSString *_prefixHint;
    NSString *_digits;
    NSString *_countryCode;
    NSArray *_groupIdentifiers;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) CNPhoneNumber *phoneNumber;
@property (nonatomic, readonly) _Bool returnsMultipleResults;
@property (copy, nonatomic, readonly) NSString *prefixHint;
@property (nonatomic, readonly) NSString *digits;
@property (nonatomic, readonly) NSString *countryCode;
@property (copy, nonatomic, readonly) NSArray *groupIdentifiers;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)shortDebugDescription;
- (id)sgContactMatchesWithSortOrder:(long long)arg1 mutableObjects:(_Bool)arg2 service:(id)arg3 error:(id *)arg4;
- (id)initWithPhoneNumber:(id)arg1 returnMultipleResults:(_Bool)arg2;
- (id)initWithPhoneNumber:(id)arg1 prefixHint:(id)arg2 groupIdentifiers:(id)arg3 returnMultipleResults:(_Bool)arg4;
- (id)initWithPhoneNumber:(id)arg1 prefixHint:(id)arg2 returnMultipleResults:(_Bool)arg3;
- (id)initWithDigits:(id)arg1 countryCode:(id)arg2 returnMultipleResults:(_Bool)arg3;

@end
