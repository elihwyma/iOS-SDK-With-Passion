/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

@interface NSObject (HealthKit)

- (id)_hk_valueForSafeValueForKeyPath:(id)arg1;
- (id)hk_safeValueIfExistsForKeyPath:(id)arg1 class:(Class)arg2 error:(id *)arg3;
- (_Bool)hk_hasValueForKeyPath:(id)arg1;
- (id)hk_safeValueForKeyPath:(id)arg1 class:(Class)arg2 error:(id *)arg3;
- (id)hk_safeArrayForKeyPath:(id)arg1 error:(id *)arg2;
- (id)hk_safeDictionaryForKeyPath:(id)arg1 error:(id *)arg2;
- (id)hk_safeStringForKeyPath:(id)arg1 error:(id *)arg2;
- (id)hk_safeNumberForKeyPath:(id)arg1 error:(id *)arg2;
- (id)hk_safeArrayIfExistsForKeyPath:(id)arg1 error:(id *)arg2;
- (id)hk_safeDictionaryIfExistsForKeyPath:(id)arg1 error:(id *)arg2;
- (id)hk_safeStringIfExistsForKeyPath:(id)arg1 error:(id *)arg2;
- (id)hk_safeNumberIfExistsForKeyPath:(id)arg1 error:(id *)arg2;
- (_Bool)hk_expectMissingKeyPath:(id)arg1 error:(id *)arg2;
- (id)hk_classNameWithTag:(id)arg1;

@end
