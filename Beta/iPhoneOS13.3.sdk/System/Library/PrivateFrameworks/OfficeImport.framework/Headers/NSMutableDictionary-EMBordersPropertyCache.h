/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSMutableDictionary.h>

@interface NSMutableDictionary (EMBordersPropertyCache)

+ (id)tsu_dictionaryByInvertingDictionary:(id)arg1;
+ (id)tsu_dictionaryByInvertingDictionaryIfPossible:(id)arg1;

- (id)tsu_objectForKey:(id)arg1 withDefaultUsingBlock:(CDUnknownBlockType)arg2;
- (id)tsu_objectForKey:(id)arg1 withDefaultOfClass:(Class)arg2;
- (id)addToCacheAndReturnCssString:(id)arg1;
- (void)tsu_setNonNilValueForKey:(id)arg1 fromDictionary:(id)arg2;
- (void)tsu_setNonNilObject:(id)arg1 forKey:(id)arg2;

@end
