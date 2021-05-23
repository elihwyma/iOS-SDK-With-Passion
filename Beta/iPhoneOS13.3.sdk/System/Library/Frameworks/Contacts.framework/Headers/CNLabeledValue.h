/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Foundation/NSObject.h>

#import <Contacts/Swift-Protocol.h>

@class CNLabelValuePair, NSDictionary, NSSet, NSString, SGRecordId;

@protocol NSCopying><NSSecureCoding;

@interface CNLabeledValue : NSObject <Swift>

{
    CNLabelValuePair *_labelValuePair;
    NSString *_identifier;
    int _iOSLegacyIdentifier;
    NSString *_storeIdentifier;
    NSDictionary *_storeInfo;
    NSSet *_linkedIdentifiers;
    _Bool _isValueMutable;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly, getter=isSuggested) _Bool suggested;
@property (nonatomic, readonly) SGRecordId *suggestionRecordId;
@property (nonatomic, readonly) NSString *suggestionFoundInBundleId;
@property (readonly) CNLabelValuePair *labelValuePair;
@property (copy, nonatomic) NSString *storeIdentifier;
@property (copy, nonatomic) NSSet *linkedIdentifiers;
@property (copy, nonatomic) NSDictionary *storeInfo;
@property (nonatomic) int iOSLegacyIdentifier;
@property (copy, nonatomic, readonly) NSString *identifier;
@property (copy, nonatomic, readonly) NSString *label;
@property (copy, nonatomic, readonly) id <NSCopying><NSSecureCoding> value;

+ (_Bool)supportsSecureCoding;
+ (id)labeledValueWithLabel:(id)arg1 value:(id)arg2;
+ (id)identifierProvider;
+ (id)makeIdentifier;
+ (CDUnknownBlockType)testMatchingIdentifier:(id)arg1;
+ (id)propertyDescriptionOwnersByLabel;
+ (id)localizedStringForLabel:(id)arg1;
+ (id)entryForIdentifier:(id)arg1 inArray:(id)arg2;
+ (id)labelForIdentifier:(id)arg1 inArray:(id)arg2;
+ (id)valueForIdentifier:(id)arg1 inArray:(id)arg2;
+ (id)entryWithIdentifier:(id)arg1 label:(id)arg2 value:(id)arg3;
+ (_Bool)isArrayOfEntries:(id)arg1 equalToArrayOfEntriesIgnoringIdentifiers:(id)arg2;
+ (id)entriesByUnifyingEntryArrays:(id)arg1 forProperty:(id)arg2;
+ (id)emptyEntries;
+ (id)allValuesInArray:(id)arg1;
+ (id)labeledValueWithIdentifier:(id)arg1 inArray:(id)arg2;
+ (id)firstLabeledValueWithValue:(id)arg1 inArray:(id)arg2;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 label:(id)arg2 value:(id)arg3;
- (_Bool)isEqualIgnoringIdentifiers:(id)arg1;
- (id)initWithLabel:(id)arg1 value:(id)arg2;
- (id)primitiveInitWithIdentifier:(id)arg1 label:(id)arg2 value:(id)arg3;
- (id)labeledValueBySettingLabel:(id)arg1;
- (id)labeledValueBySettingValue:(id)arg1;
- (id)labeledValueBySettingLabel:(id)arg1 value:(id)arg2;
- (void)addStoreInfo:(id)arg1;
- (_Bool)isEqualToLabeledValue:(id)arg1;
- (_Bool)isEqualToLabeledValue:(id)arg1 includeIdentifiers:(_Bool)arg2;
- (id)valueOrigin;

@end
