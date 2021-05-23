/*
 Image: /System/Library/PrivateFrameworks/DiagnosticsSupport.framework/DiagnosticsSupport
 */

#import <Foundation/NSDictionary.h>

@interface NSDictionary (Validations)

- (id)ds_stringFromKey:(id)arg1 maxLength:(unsigned long long)arg2 defaultValue:(id)arg3 failed:(_Bool *)arg4;
- (id)ds_dictionaryFromKey:(id)arg1 defaultValue:(id)arg2 failed:(_Bool *)arg3;
- (id)ds_arrayFromKey:(id)arg1 types:(id)arg2 maxLength:(unsigned long long)arg3 defaultValue:(id)arg4 failed:(_Bool *)arg5 validator:(CDUnknownBlockType)arg6;
- (id)ds_stringFromKey:(id)arg1 inSet:(id)arg2 defaultValue:(id)arg3 failed:(_Bool *)arg4;
- (id)ds_numberFromKey:(id)arg1 lowerBound:(id)arg2 upperBound:(id)arg3 defaultValue:(id)arg4 failed:(_Bool *)arg5;
- (_Bool)ds_boolFromKey:(id)arg1 defaultValue:(_Bool)arg2 failed:(_Bool *)arg3;
- (id)ds_dictionaryFromRequiredKey:(id)arg1 failed:(_Bool *)arg2;
- (id)ds_arrayFromKey:(id)arg1 types:(id)arg2 maxLength:(unsigned long long)arg3 defaultValue:(id)arg4 failed:(_Bool *)arg5;
- (id)ds_arrayFromKey:(id)arg1 inSet:(id)arg2 maxLength:(unsigned long long)arg3 defaultValue:(id)arg4 failed:(_Bool *)arg5;
- (id)ds_dictionaryFromKey:(id)arg1 limitedToKeys:(id)arg2 defaultValue:(id)arg3 failed:(_Bool *)arg4;
- (id)ds_stringFromRequiredKey:(id)arg1 maxLength:(unsigned long long)arg2 failed:(_Bool *)arg3;
- (id)ds_stringFromRequiredKey:(id)arg1 inSet:(id)arg2 failed:(_Bool *)arg3;
- (id)ds_numberFromRequiredKey:(id)arg1 lowerBound:(id)arg2 upperBound:(id)arg3 failed:(_Bool *)arg4;
- (_Bool)ds_boolFromRequiredKey:(id)arg1 failed:(_Bool *)arg2;
- (id)ds_dictionaryFromRequiredKey:(id)arg1 limitedToKeys:(id)arg2 failed:(_Bool *)arg3;
- (id)ds_arrayFromRequiredKey:(id)arg1 types:(id)arg2 maxLength:(unsigned long long)arg3 failed:(_Bool *)arg4;
- (id)ds_arrayFromRequiredKey:(id)arg1 types:(id)arg2 maxLength:(unsigned long long)arg3 failed:(_Bool *)arg4 validator:(CDUnknownBlockType)arg5;
- (id)ds_arrayFromRequiredKey:(id)arg1 inSet:(id)arg2 maxLength:(unsigned long long)arg3 failed:(_Bool *)arg4;

@end
