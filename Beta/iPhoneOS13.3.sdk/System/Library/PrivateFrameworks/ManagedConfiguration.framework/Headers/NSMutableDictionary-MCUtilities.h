/*
 Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import <Foundation/NSMutableDictionary.h>

@interface NSMutableDictionary (MCUtilities)

- (void)MCSetUnionRestriction:(id)arg1 values:(id)arg2;
- (id)MCValidateAndRemoveArrayOfClass:(Class)arg1 withKey:(id)arg2 isRequired:(_Bool)arg3 outError:(id *)arg4;
- (id)MCValidateAndRemoveNonZeroLengthStringWithKey:(id)arg1 isRequired:(_Bool)arg2 outError:(id *)arg3;
- (void)MCDeepCopyEntriesFromDictionary:(id)arg1;
- (void)MCDeepCopyMissingEntriesFromDictionary:(id)arg1;
- (void)MCSetObjectIfNotNil:(id)arg1 forKey:(id)arg2;
- (void)MCSetBoolRestriction:(id)arg1 value:(_Bool)arg2;
- (void)MCDeleteBoolRestriction:(id)arg1;
- (void)MCSetValueRestriction:(id)arg1 value:(id)arg2;
- (void)MCSetIntersectionRestriction:(id)arg1 values:(id)arg2;
- (void)MCSetIntersectionSetting:(id)arg1 values:(id)arg2;
- (void)MCSetUnionSetting:(id)arg1 values:(id)arg2;
- (void)MCFilterRestrictionPayloadKeys:(id)arg1;
- (id)MCValidateAndRemoveObjectOfClass:(Class)arg1 withKey:(id)arg2 isRequired:(_Bool)arg3 outError:(id *)arg4;
- (id)MCValidateAndRemoveArrayOfClass:(Class)arg1 withKey:(id)arg2 isRequired:(_Bool)arg3 allowZeroLengthString:(_Bool)arg4 outError:(id *)arg5;
- (void)MCFixUpRestrictionsDictionaryForMDMReporting;
- (id)MCMutableDictionaryContainingValidatedKeysAndClasses:(id)arg1 removeKeys:(_Bool)arg2 outError:(id *)arg3;

@end
