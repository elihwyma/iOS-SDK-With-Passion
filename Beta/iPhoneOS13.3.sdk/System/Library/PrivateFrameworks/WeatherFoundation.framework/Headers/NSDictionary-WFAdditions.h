/*
 Image: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
 */

#import <NSDictionary.h>

@interface NSDictionary (WFAdditions)

+ (long long)integerValueFromDictionary:(id)arg1 forKey:(id)arg2 defaultValue:(long long)arg3;
+ (id)stringValueFromDictionary:(id)arg1 forKey:(id)arg2 defaultValue:(id)arg3;

- (id)stringForKey:(id)arg1;
- (id)arrayForKey:(id)arg1;
- (id)dictionaryForKey:(id)arg1;
- (id)numberForKey:(id)arg1;
- (id)wf_arrayForKeyPath:(id)arg1;
- (id)wf_numberForKeyPath:(id)arg1;
- (id)wf_temperatureWithCelsiusKeyPath:(id)arg1 fahrenheitKeyPath:(id)arg2;
- (id)wf_dictionaryForKeyPath:(id)arg1;
- (id)wf_stringForKeyPath:(id)arg1;
- (id)wf_objectOfKind:(Class)arg1 forKeyPath:(id)arg2;
- (id)wf_objectForKeyPath:(id)arg1;
- (id)wf_URLForKeyPath:(id)arg1;
- (long long)wf_integerForKeyPath:(id)arg1;
- (float)wf_floatForKeyPath:(id)arg1;
- (double)wf_doubleForKeyPath:(id)arg1;

@end
