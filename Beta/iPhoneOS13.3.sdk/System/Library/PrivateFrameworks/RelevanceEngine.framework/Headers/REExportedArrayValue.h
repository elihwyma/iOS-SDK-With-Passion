/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <RelevanceEngine/REExportedValue.h>

@class NSArray;

@interface REExportedArrayValue : REExportedValue

{
    NSArray *_array;
}

- (id)initWithArray:(id)arg1;
- (unsigned long long)type;
- (id)arrayValue;
- (unsigned long long)propertyCount;
- (void)enumerateValuesUsingBlock:(CDUnknownBlockType)arg1;
- (id)exportedValueForKey:(id)arg1;

@end
