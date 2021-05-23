/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <Foundation/NSObject.h>

@class HMFUnfairLock, NSArray, NSMutableArray;

@interface HMMutableArray : NSObject

{
    HMFUnfairLock *_lock;
    NSMutableArray *_internal;
}

@property (copy, nonatomic, readonly) NSMutableArray *internal;
@property (copy, nonatomic) NSArray *array;
@property (nonatomic, readonly) unsigned long long count;

+ (id)array;
+ (id)arrayWithArray:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (void)addObject:(id)arg1;
- (void)removeObject:(id)arg1;
- (id)initWithArray:(id)arg1;
- (void)removeAllObjects;
- (_Bool)containsObject:(id)arg1;
- (void)replaceObject:(id)arg1;
- (void)addObjectsFromArray:(id)arg1;
- (void)removeObjectsInArray:(id)arg1;
- (id)filteredArrayUsingPredicate:(id)arg1;
- (id)firstItemWithUUID:(id)arg1;
- (id)firstItemWithName:(id)arg1;
- (id)firstItemWithValue:(id)arg1 forKey:(id)arg2;
- (void)addObjectIfNotPresent:(id)arg1;
- (id)itemsWithValue:(id)arg1 forKey:(id)arg2;
- (void)setIfDifferent:(id)arg1;
- (id)firstItemWithUniqueIdentifier:(id)arg1;
- (id)firstItemWithInstanceID:(id)arg1;
- (id)firstItemWithCharacteristicType:(id)arg1;

@end
