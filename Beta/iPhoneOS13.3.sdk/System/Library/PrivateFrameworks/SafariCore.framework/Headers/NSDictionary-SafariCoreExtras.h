/*
 Image: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore
 */

#import <Foundation/NSDictionary.h>

@interface NSDictionary (SafariCoreExtras)

+ (id)safari_dictionaryWithPropertyListData:(id)arg1 options:(unsigned long long)arg2;
+ (id)safari_dictionaryWithPropertyListData:(id)arg1;
+ (id)safari_dictionaryWithObjectsInFastEnumerationCollection:(id)arg1 groupedUsingBlock:(CDUnknownBlockType)arg2;

- (id)safari_numberForKey:(id)arg1;
- (_Bool)safari_boolForKey:(id)arg1;
- (id)safari_stringForKey:(id)arg1;
- (id)safari_UUIDForKey:(id)arg1;
- (id)safari_dataForKey:(id)arg1;
- (id)safari_arrayForKey:(id)arg1;
- (id)safari_dictionaryForKey:(id)arg1;
- (id)safari_dateForKey:(id)arg1;
- (id)safari_mapAndFilterKeysAndObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (id)_safari_sortedTupleArray;
- (id)safari_stringForKey:(id)arg1 returningNilIfEmpty:(_Bool)arg2;
- (id)safari_arrayContainingObjectsOfClass:(Class)arg1 forKey:(id)arg2;
- (id)safari_URLForKey:(id)arg1;
- (id)safari_setForKey:(id)arg1;
- (id)safari_userActivityForKey:(id)arg1;
- (id)safari_mapTableForKey:(id)arg1;
- (id)safari_diffWithDictionary:(id)arg1;

@end
