/*
 Image: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

@interface EFMutableIndexMap : NSObject

{
    NSMutableArray *_tuples;
    NSMutableDictionary *_keyToTuple;
}

@property (retain, nonatomic) NSMutableArray *tuples;
@property (retain, nonatomic) NSMutableDictionary *keyToTuple;
@property (nonatomic, readonly) unsigned long long count;

- (id)init;
- (id)description;
- (long long)keyAtIndex:(unsigned long long)arg1;
- (void)setObject:(id)arg1 forKey:(long long)arg2;
- (void)enumerateKeysIndexesAndObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (void)addKey:(long long)arg1 atIndex:(unsigned long long)arg2 object:(id)arg3;
- (id)_tupleForKey:(long long)arg1;
- (void)addKey:(long long)arg1 atIndex:(unsigned long long)arg2;
- (_Bool)removeKeyAtIndex:(unsigned long long)arg1;
- (void)removeAllKeys;
- (void)enumerateKeysAndIndexesUsingBlock:(CDUnknownBlockType)arg1;
- (_Bool)hasKeyAtIndex:(unsigned long long)arg1;
- (unsigned long long)indexOfKey:(long long)arg1;
- (id)objectForInt64Key:(long long)arg1;
- (void)shiftKeysStartingAtIndex:(unsigned long long)arg1 by:(long long)arg2;

@end
