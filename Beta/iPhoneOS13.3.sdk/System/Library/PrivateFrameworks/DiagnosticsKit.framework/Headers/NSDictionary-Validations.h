/*
 Image: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/DiagnosticsKit
 */

#import <Foundation/NSDictionary.h>

@interface NSDictionary (Validations)

- (id)dk_stringFromKey:(id)arg1 maxLength:(unsigned long long)arg2 defaultValue:(id)arg3 failed:(_Bool *)arg4;
- (id)dk_dictionaryFromKey:(id)arg1 defaultValue:(id)arg2 failed:(_Bool *)arg3;
- (id)dk_arrayFromKey:(id)arg1 types:(id)arg2 maxLength:(unsigned long long)arg3 defaultValue:(id)arg4 failed:(_Bool *)arg5 validator:(CDUnknownBlockType)arg6;
- (id)dk_stringFromKey:(id)arg1 inSet:(id)arg2 defaultValue:(id)arg3 failed:(_Bool *)arg4;
- (id)dk_numberFromKey:(id)arg1 lowerBound:(id)arg2 upperBound:(id)arg3 defaultValue:(id)arg4 failed:(_Bool *)arg5;
- (_Bool)dk_boolFromKey:(id)arg1 defaultValue:(_Bool)arg2 failed:(_Bool *)arg3;
- (id)dk_dictionaryFromRequiredKey:(id)arg1 failed:(_Bool *)arg2;
- (id)dk_arrayFromKey:(id)arg1 types:(id)arg2 maxLength:(unsigned long long)arg3 defaultValue:(id)arg4 failed:(_Bool *)arg5;
- (id)dk_arrayFromKey:(id)arg1 inSet:(id)arg2 maxLength:(unsigned long long)arg3 defaultValue:(id)arg4 failed:(_Bool *)arg5;
- (id)dk_dictionaryFromKey:(id)arg1 limitedToKeys:(id)arg2 defaultValue:(id)arg3 failed:(_Bool *)arg4;
- (id)dk_stringFromRequiredKey:(id)arg1 maxLength:(unsigned long long)arg2 failed:(_Bool *)arg3;
- (id)dk_stringFromRequiredKey:(id)arg1 inSet:(id)arg2 failed:(_Bool *)arg3;
- (id)dk_numberFromRequiredKey:(id)arg1 lowerBound:(id)arg2 upperBound:(id)arg3 failed:(_Bool *)arg4;
- (_Bool)dk_boolFromRequiredKey:(id)arg1 failed:(_Bool *)arg2;
- (id)dk_dictionaryFromRequiredKey:(id)arg1 limitedToKeys:(id)arg2 failed:(_Bool *)arg3;
- (id)dk_arrayFromRequiredKey:(id)arg1 types:(id)arg2 maxLength:(unsigned long long)arg3 failed:(_Bool *)arg4;
- (id)dk_arrayFromRequiredKey:(id)arg1 types:(id)arg2 maxLength:(unsigned long long)arg3 failed:(_Bool *)arg4 validator:(CDUnknownBlockType)arg5;
- (id)dk_arrayFromRequiredKey:(id)arg1 inSet:(id)arg2 maxLength:(unsigned long long)arg3 failed:(_Bool *)arg4;
- (id)getKey:(id)arg1 ofType:(Class)arg2;
- (id)alwaysGetKey:(id)arg1 ofType:(Class)arg2 default:(id)arg3;
- (id)getStringForKey:(id)arg1;
- (id)getNumberForKey:(id)arg1;
- (_Bool)getBoolForKey:(id)arg1;
- (id)getDictionaryForKey:(id)arg1;
- (id)getArrayForKey:(id)arg1;
- (id)alwaysGetStringForKey:(id)arg1 default:(id)arg2;
- (id)alwaysGetNumberForKey:(id)arg1 default:(id)arg2;
- (id)alwaysGetDictionaryForKey:(id)arg1 default:(id)arg2;
- (id)alwaysGetArrayForKey:(id)arg1 default:(id)arg2;
- (id)alwaysGetKey:(id)arg1 ofType:(Class)arg2;

@end
