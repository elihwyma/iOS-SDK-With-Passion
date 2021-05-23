/*
 Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import <Foundation/NSObject.h>

@interface NSOrderedSet : NSObject

@property (readonly) unsigned long long count;

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (_Bool)supportsSecureCoding;
+ (id)orderedSetWithArray:(id)arg1;
+ (id)newOrderedSetWithObjects:(const id *)arg1 count:(unsigned long long)arg2;
+ (id)orderedSetWithObjects:(const id *)arg1 count:(unsigned long long)arg2;
+ (id)orderedSetWithObject:(id)arg1;
+ (id)orderedSet;
+ (id)orderedSetWithObjects:(id)arg1;
+ (id)orderedSetWithArray:(id)arg1 range:(struct _NSRange)arg2 copyItems:(_Bool)arg3;
+ (id)orderedSetWithArray:(id)arg1 range:(struct _NSRange)arg2;
+ (id)orderedSetWithArray:(id)arg1 copyItems:(_Bool)arg2;
+ (id)orderedSetWithOrderedSet:(id)arg1 range:(struct _NSRange)arg2 copyItems:(_Bool)arg3;
+ (id)orderedSetWithOrderedSet:(id)arg1 range:(struct _NSRange)arg2;
+ (id)orderedSetWithOrderedSet:(id)arg1 copyItems:(_Bool)arg2;
+ (id)orderedSetWithOrderedSet:(id)arg1;
+ (id)orderedSetWithSet:(id)arg1 copyItems:(_Bool)arg2;
+ (id)orderedSetWithSet:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)initWithSet:(id)arg1 copyItems:(_Bool)arg2;
- (id)initWithObjects:(const id *)arg1 count:(unsigned long long)arg2;
- (id)objectEnumerator;
- (id)initWithArray:(id)arg1;
- (void)getObjects:(id *)arg1;
- (id)array;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_58648341 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)objectAtIndex:(unsigned long long)arg1;
- (void)getObjects:(id *)arg1 range:(struct _NSRange)arg2;
- (id)initWithArray:(id)arg1 range:(struct _NSRange)arg2 copyItems:(_Bool)arg3;
- (id)initWithOrderedSet:(id)arg1;
- (unsigned long long)indexOfObject:(id)arg1;
- (unsigned long long)countForObject:(id)arg1;
- (_Bool)containsObject:(id)arg1;
- (void)enumerateObjectsWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (id)initWithObject:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)descriptionWithLocale:(id)arg1;
- (id)firstObject;
- (id)lastObject;
- (id)set;
- (id)objectsAtIndexes:(id)arg1;
- (unsigned long long)indexOfObject:(id)arg1 inRange:(struct _NSRange)arg2;
- (id)sortedArrayFromRange:(struct _NSRange)arg1 options:(unsigned long long)arg2 usingComparator:(CDUnknownBlockType)arg3;
- (id)initWithArray:(id)arg1 copyItems:(_Bool)arg2;
- (id)allObjects;
- (id)descriptionWithLocale:(id)arg1 indent:(unsigned long long)arg2;
- (id)indexesOfObjectsAtIndexes:(id)arg1 options:(unsigned long long)arg2 passingTest:(CDUnknownBlockType)arg3;
- (id)indexesOfObjectsWithOptions:(unsigned long long)arg1 passingTest:(CDUnknownBlockType)arg2;
- (unsigned long long)indexOfObjectWithOptions:(unsigned long long)arg1 passingTest:(CDUnknownBlockType)arg2;
- (unsigned long long)indexOfObjectAtIndexes:(id)arg1 options:(unsigned long long)arg2 passingTest:(CDUnknownBlockType)arg3;
- (id)objectWithOptions:(unsigned long long)arg1 passingTest:(CDUnknownBlockType)arg2;
- (id)objectsWithOptions:(unsigned long long)arg1 passingTest:(CDUnknownBlockType)arg2;
- (id)sortedArrayWithOptions:(unsigned long long)arg1 usingComparator:(CDUnknownBlockType)arg2;
- (id)initWithOrderedSet:(id)arg1 range:(struct _NSRange)arg2 copyItems:(_Bool)arg3;
- (_Bool)containsObject:(id)arg1 inRange:(struct _NSRange)arg2;
- (unsigned long long)countForObject:(id)arg1 inRange:(struct _NSRange)arg2;
- (void)enumerateObjectsAtIndexes:(id)arg1 options:(unsigned long long)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (unsigned long long)indexOfObject:(id)arg1 inSortedRange:(struct _NSRange)arg2 options:(unsigned long long)arg3 usingComparator:(CDUnknownBlockType)arg4;
- (unsigned long long)indexOfObjectPassingTest:(CDUnknownBlockType)arg1;
- (id)indexesOfObjectsPassingTest:(CDUnknownBlockType)arg1;
- (id)objectAtIndexes:(id)arg1 options:(unsigned long long)arg2 passingTest:(CDUnknownBlockType)arg3;
- (id)objectPassingTest:(CDUnknownBlockType)arg1;
- (id)objectsAtIndexes:(id)arg1 options:(unsigned long long)arg2 passingTest:(CDUnknownBlockType)arg3;
- (id)objectsPassingTest:(CDUnknownBlockType)arg1;
- (id)reverseObjectEnumerator;
- (id)sortedArrayUsingComparator:(CDUnknownBlockType)arg1;
- (id)initWithArray:(id)arg1 range:(struct _NSRange)arg2;
- (id)initWithObjects:(id)arg1;
- (id)initWithSet:(id)arg1;
- (id)initWithOrderedSet:(id)arg1 range:(struct _NSRange)arg2;
- (id)initWithOrderedSet:(id)arg1 copyItems:(_Bool)arg2;
- (_Bool)isNSOrderedSet__;
- (_Bool)intersectsOrderedSet:(id)arg1;
- (_Bool)intersectsSet:(id)arg1;
- (_Bool)isSubsetOfOrderedSet:(id)arg1;
- (_Bool)isSubsetOfSet:(id)arg1;
- (_Bool)isEqualToOrderedSet:(id)arg1;
- (id)reversedOrderedSet;

@end
