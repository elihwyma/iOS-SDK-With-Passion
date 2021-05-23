/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface TCEnumerationMap : NSObject

{
    struct __CFDictionary *m_valueToString;
    struct __CFDictionary *m_stringToValue;
    _Bool m_caseSensitive;
}

- (void)dealloc;
- (id)stringForValue:(int)arg1;
- (id)initWithStructs:(const struct TCEnumerationStruct *)arg1 count:(int)arg2 caseSensitive:(_Bool)arg3;
- (id)initWithStructs:(const struct TCEnumerationStruct *)arg1 count:(int)arg2;
- (long long)valueForString:(id)arg1;
- (void)enumerateValuesAndStringsUsingBlock:(CDUnknownBlockType)arg1;

@end
