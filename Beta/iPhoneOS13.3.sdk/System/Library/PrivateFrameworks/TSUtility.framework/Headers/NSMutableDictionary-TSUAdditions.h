/*
 Image: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
 */

#import <Foundation/NSMutableDictionary.h>

@interface NSMutableDictionary (TSUAdditions)

+ (id)tsu_dictionaryByInvertingDictionary:(id)arg1;
+ (id)tsu_dictionaryByInvertingDictionaryIfPossible:(id)arg1;

- (id)tsu_objectForKey:(id)arg1 withDefaultUsingBlock:(CDUnknownBlockType)arg2;
- (id)tsu_objectForKey:(id)arg1 withDefaultOfClass:(Class)arg2;
- (void)tsu_removeObjectsWithoutKeys:(id)arg1;

@end
