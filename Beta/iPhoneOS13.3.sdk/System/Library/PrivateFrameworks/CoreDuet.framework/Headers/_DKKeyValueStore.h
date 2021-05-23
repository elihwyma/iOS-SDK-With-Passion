/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <Foundation/NSObject.h>

@protocol _DKSimpleKeyValueStore;

@interface _DKKeyValueStore : NSObject

{
    id <_DKSimpleKeyValueStore> _store;
}

+ (id)standardUserDefaultsKeyValueStore;

- (id)objectForKey:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (_Bool)boolForKey:(id)arg1;
- (id)stringForKey:(id)arg1;
- (id)arrayForKey:(id)arg1;
- (id)dictionaryForKey:(id)arg1;
- (id)dataForKey:(id)arg1;
- (void)setBool:(_Bool)arg1 forKey:(id)arg2;
- (void)setString:(id)arg1 forKey:(id)arg2;
- (void)setArray:(id)arg1 forKey:(id)arg2;
- (void)setDictionary:(id)arg1 forKey:(id)arg2;
- (void)setData:(id)arg1 forKey:(id)arg2;
- (id)numberForKey:(id)arg1;
- (void)setNumber:(id)arg1 forKey:(id)arg2;
- (id)dateForKey:(id)arg1;
- (void)setDate:(id)arg1 forKey:(id)arg2;
- (id)objectForKey:(id)arg1 havingClass:(Class)arg2;
- (id)initWithSimpleKeyValueStore:(id)arg1;

@end
