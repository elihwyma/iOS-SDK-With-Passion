/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <RelevanceEngine/REExportedValue.h>

@class NSDictionary;

@interface REExportedDictionaryValue : REExportedValue

{
    NSDictionary *_dictionary;
}

- (unsigned long long)type;
- (id)initWithDictionary:(id)arg1;
- (id)dictionaryValue;
- (unsigned long long)propertyCount;
- (void)enumerateValuesUsingBlock:(CDUnknownBlockType)arg1;
- (id)exportedValueForKey:(id)arg1;

@end
