/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Foundation/NSObject.h>

#import <Contacts/Swift-Protocol.h>

@class NSArray, NSString;

@interface CNPropertyDescription : NSObject <Swift>

{
    NSString *_key;
    SEL _readSelector;
    SEL _writeSelector;
    CDUnknownBlockType _valueForKeyTransform;
    _Bool _isNonnull;
}

@property (nonatomic, readonly) SEL readSelector;
@property (nonatomic, readonly) SEL writeSelector;
@property (copy, nonatomic, readonly) NSString *key;
@property (nonatomic, readonly) _Bool isWritable;
@property (nonatomic, readonly) Class valueClass;
@property (nonatomic, readonly) _Bool isSingleValue;
@property (nonatomic, readonly) _Bool isMultiValue;
@property (nonatomic, readonly) _Bool isNonnull;
@property (copy, nonatomic, readonly) CDUnknownBlockType valueForKeyTransform;
@property (nonatomic, readonly) id nilValue;
@property (nonatomic, readonly) NSArray *equivalentLabelSets;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)supportsABLazyLoading;
- (_Bool)isValidValue:(id)arg1 error:(id *)arg2;
- (_Bool)isValue:(id)arg1 equalToEmptyEquivalentOrValue:(id)arg2;
- (id)CNValueForContact:(id)arg1;
- (id)initWithKey:(id)arg1 readSelector:(SEL)arg2 writeSelector:(SEL)arg3;
- (void)encodeUsingCoder:(id)arg1 contact:(id)arg2;
- (void)decodeUsingCoder:(id)arg1 contact:(id)arg2;
- (_Bool)isEqualIgnoringIdentifiersForContact:(id)arg1 other:(id)arg2;
- (void)setCNValue:(id)arg1 onContact:(id)arg2;
- (void)resetGuardianManagedValueOnContact:(id)arg1;
- (_Bool)canUnifyValue:(id)arg1 withValue:(id)arg2;
- (_Bool)isValue:(id)arg1 preferredToUnifiedValue:(id)arg2;
- (id)stringForIndexingForContact:(id)arg1;
- (void *)ABValueFromCNValue:(id)arg1;
- (id)CNValueFromABValue:(void *)arg1;
- (id)unifiableLabelsForLabel:(id)arg1;
- (_Bool)abPropertyID:(int *)arg1;
- (id)CNMutableValueForABMultivalue;
- (_Bool)applyABMultivalueValueBytes:(char *)arg1 length:(unsigned long long)arg2 identifier:(id)arg3 legacyIdentifier:(int)arg4 label:(id)arg5 toCNMultivalueRepresentation:(id)arg6;
- (_Bool)applyDictionary:(id)arg1 identifier:(id)arg2 legacyIdentifier:(int)arg3 label:(id)arg4 toCNMultivalueRepresentation:(id)arg5;
- (id)CNValueFromABBytes:(char *)arg1 length:(unsigned long long)arg2;
- (id)valueWithResetIdentifiers:(id)arg1;
- (_Bool)setCNValue:(id)arg1 onABPerson:(void *)arg2 withDependentPropertiesContext:(id)arg3 error:(id *)arg4;
- (void *)ABValueForABPerson:(void *)arg1;
- (void)assertValueType:(id)arg1;
- (void)copyFromABPerson:(void *)arg1 toContact:(id)arg2;
- (_Bool)setABValue:(void *)arg1 onABPerson:(void *)arg2 error:(struct __CFError **)arg3;

@end
