/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSDictionary.h>

@interface NSDictionary (PKPlistTypeSafety)

- (id)PKDictionaryForKey:(id)arg1;
- (id)PKStringForKey:(id)arg1;
- (id)PKURLForKey:(id)arg1;
- (_Bool)PKBoolForKey:(id)arg1;
- (long long)PKIntegerForKey:(id)arg1;
- (id)PKArrayContaining:(Class)arg1 forKey:(id)arg2;
- (id)PKDateForKey:(id)arg1;
- (id)PKArrayForKey:(id)arg1;
- (id)PKNumberForKey:(id)arg1;
- (id)PKSetForKey:(id)arg1;
- (id)PKDecimalNumberFromStringForKey:(id)arg1;
- (id)PKDecimalNumberForKey:(id)arg1;
- (id)PKUUIDForKey:(id)arg1;
- (id)PKColorForKey:(id)arg1;
- (double)PKDoubleForKey:(id)arg1;
- (id)PKSetContaining:(Class)arg1 forKey:(id)arg2;

@end
