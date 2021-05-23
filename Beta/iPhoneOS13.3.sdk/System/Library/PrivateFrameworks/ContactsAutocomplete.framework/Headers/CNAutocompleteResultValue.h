/*
 Image: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface CNAutocompleteResultValue : NSObject

{
    NSString *_address;
    long long _addressType;
    NSString *_instantMessageAddressService;
    NSString *_identifier;
    NSString *_label;
    NSString *_stringForHashingMemo;
}

@property (copy, nonatomic) NSString *stringForHashingMemo;
@property (copy) NSString *address;
@property long long addressType;
@property (copy) NSString *instantMessageAddressService;
@property (copy) NSString *identifier;
@property (copy) NSString *label;

+ (id)resultValueWithAddress:(id)arg1 addressType:(long long)arg2;
+ (id)stringForHashingValue:(id)arg1;
+ (id)normalizedAddressForValue:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)addressTypeDescription;
- (id)stringForHashing;
- (id)stringForSorting;
- (_Bool)addressExactlyMatchesSearchTerm:(id)arg1;

@end
