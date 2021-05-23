/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <RelevanceEngine/REExportedValue.h>

@interface REExportedObjectValue : REExportedValue

{
    id _object;
    _Bool _allowsEncoding;
}

- (unsigned long long)type;
- (id)initWithObject:(id)arg1;
- (id)objectValue;
- (unsigned long long)propertyCount;
- (void)enumerateValuesUsingBlock:(CDUnknownBlockType)arg1;
- (_Bool)shouldEncodeProperty:(id)arg1;
- (id)exportedValueForKey:(id)arg1;

@end
