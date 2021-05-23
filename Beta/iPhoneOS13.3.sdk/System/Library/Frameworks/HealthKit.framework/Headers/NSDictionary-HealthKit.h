/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSDictionary.h>

@interface NSDictionary (HealthKit)

+ (id)hk_secureCodingClasses;
+ (_Bool)hk_acceptsMetadataValue:(id)arg1 allowPrivateMetadata:(_Bool)arg2;
+ (void)_addDerivedPublicKeyIfNecessaryForPrivateKey:(id)arg1 mutableDictionary:(id)arg2;
+ (id)hk_acceptedMetadataValueClasses;
+ (id)hk_acceptedPublicMetadataValueClasses;

- (id)hk_dictionaryByAddingEntriesFromDictionary:(id)arg1;
- (id)hk_filter:(CDUnknownBlockType)arg1;
- (_Bool)hk_validateMetadataKeysAndValuesAllowingPrivateMetadataKeys:(_Bool)arg1 applicationSDKVersion:(unsigned int)arg2 error:(id *)arg3;
- (id)hk_filteredDictionaryForKeys:(id)arg1;
- (id)hk_sortedKeys;
- (id)hk_allValuesBySortedKeys;
- (id)hk_filterKeysWithBlock:(CDUnknownBlockType)arg1;
- (_Bool)_hk_validateMetadataValueContent:(id)arg1 forKey:(id)arg2 applicationSDKVersion:(unsigned int)arg3 error:(id *)arg4;
- (id)_copyWithoutPrivateMetadataKeysShouldDerivePublicKeys:(_Bool)arg1;
- (_Bool)_hk_validateMetadataValueClass:(id)arg1 forKey:(id)arg2 supportedKeyLookupTable:(id)arg3 error:(id *)arg4;
- (id)hk_copyWithoutPrivateMetadataKeys;
- (id)hk_copySanitizedForPublicClient;

@end
