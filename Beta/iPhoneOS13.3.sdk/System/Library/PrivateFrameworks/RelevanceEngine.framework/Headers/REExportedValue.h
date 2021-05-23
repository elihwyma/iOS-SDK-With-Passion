/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <Foundation/NSObject.h>

@interface REExportedValue : NSObject

+ (id)exportedValueForObject:(id)arg1;
+ (id)_exportedValueForTable:(id)arg1;
+ (id)exportedValueForString:(id)arg1;
+ (id)exportedValueForNumber:(id)arg1;
+ (id)exportedValueForArray:(id)arg1;
+ (id)exportedValueForDictionary:(id)arg1;
+ (id)exportedValueForDate:(id)arg1;

- (unsigned long long)type;
- (id)stringValue;
- (id)dateValue;
- (id)dictionaryValue;
- (id)objectValue;
- (id)arrayValue;
- (id)numberValue;
- (unsigned long long)propertyCount;
- (void)enumerateValuesUsingBlock:(CDUnknownBlockType)arg1;
- (_Bool)shouldEncodeProperty:(id)arg1;
- (id)exportedValueForKey:(id)arg1;

@end
