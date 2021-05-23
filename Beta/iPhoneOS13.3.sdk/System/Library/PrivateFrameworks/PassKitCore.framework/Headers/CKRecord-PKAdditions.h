/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <CKRecord.h>

@interface CKRecord (PKAdditions)

- (id)description;
- (id)pk_encryptedStringForKey:(id)arg1;
- (id)pk_encryptedDecimalNumberForKey:(id)arg1;
- (id)pk_encryptedDictionaryForKey:(id)arg1;
- (id)pk_encryptedDateForKey:(id)arg1;
- (id)pk_referenceForKey:(id)arg1;
- (unsigned long long)pk_encryptedUint64ForKey:(id)arg1;
- (int)pk_encryptedIntForKey:(id)arg1;
- (id)pk_encryptedUrlForKey:(id)arg1;
- (id)pk_encryptedDataForKey:(id)arg1;
- (id)pk_encryptedObjectForKey:(id)arg1 ofClass:(Class)arg2;
- (id)_dictionaryFromStringValue:(id)arg1;
- (id)_arrayFromStringValue:(id)arg1;
- (id)pk_encryptedNumberForKey:(id)arg1;
- (id)pk_objectForKey:(id)arg1 ofClass:(Class)arg2;
- (id)pk_stringForKey:(id)arg1;
- (id)pk_numberForKey:(id)arg1;
- (id)pk_description;
- (id)pk_encryptedUUIDForKey:(id)arg1;
- (id)pk_encryptedLocationForKey:(id)arg1;
- (id)pk_encryptedArrayOfClasses:(id)arg1 forKey:(id)arg2;
- (_Bool)pk_encryptedBoolForKey:(id)arg1;
- (long long)pk_encryptedIntegerForKey:(id)arg1;
- (unsigned long long)pk_encryptedUnsignedIntegerForKey:(id)arg1;
- (id)pk_dateForKey:(id)arg1;
- (id)pk_dataForKey:(id)arg1;
- (id)pk_locationForKey:(id)arg1;
- (id)pk_decimalNumberForKey:(id)arg1;
- (id)pk_urlForKey:(id)arg1;
- (id)pk_dictionaryForKey:(id)arg1;
- (id)pk_arrayForKey:(id)arg1;
- (_Bool)pk_boolForKey:(id)arg1;
- (long long)pk_integerForKey:(id)arg1;
- (int)pk_intForKey:(id)arg1;
- (unsigned long long)pk_uint64ForKey:(id)arg1;
- (unsigned long long)pk_unsignedIntegerForKey:(id)arg1;

@end
