/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSHashTable;

@interface CRKPointerSet : NSObject

{
    NSHashTable *mBackingStore;
}

@property (nonatomic, readonly) long long count;
@property (copy, nonatomic, readonly) NSArray *allObjects;

+ (id)setWithSet:(id)arg1;
+ (id)setWithArray:(id)arg1;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)addObject:(id)arg1;
- (void)removeObject:(id)arg1;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (void)removeAllObjects;
- (_Bool)containsObject:(id)arg1;
- (void)addObjectsFromArray:(id)arg1;
- (_Bool)isSubsetOfSet:(id)arg1;
- (id)setBySubtractingSet:(id)arg1;
- (id)setByIntersectingSet:(id)arg1;

@end
