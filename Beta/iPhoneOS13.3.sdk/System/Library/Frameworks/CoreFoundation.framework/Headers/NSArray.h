/*
 Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import <Foundation/NSObject.h>

@interface NSArray : NSObject

@property (readonly) unsigned long long count;

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)array;
+ (_Bool)supportsSecureCoding;
+ (id)arrayWithObjects:(const id *)arg1 count:(unsigned long long)arg2;
+ (id)arrayWithObject:(id)arg1;
+ (id)newArrayWithObjects:(const id *)arg1 count:(unsigned long long)arg2;
+ (id)arrayWithObjects:(id)arg1;
+ (id)arrayWithArray:(id)arg1 range:(struct _NSRange)arg2 copyItems:(_Bool)arg3;
+ (id)arrayWithArray:(id)arg1 range:(struct _NSRange)arg2;
+ (id)arrayWithArray:(id)arg1 copyItems:(_Bool)arg2;
+ (id)arrayWithArray:(id)arg1;
+ (id)arrayWithOrderedSet:(id)arg1 range:(struct _NSRange)arg2 copyItems:(_Bool)arg3;
+ (id)arrayWithOrderedSet:(id)arg1 range:(struct _NSRange)arg2;
+ (id)arrayWithOrderedSet:(id)arg1 copyItems:(_Bool)arg2;
+ (id)arrayWithOrderedSet:(id)arg1;
+ (id)arrayWithSet:(id)arg1 copyItems:(_Bool)arg2;
+ (id)arrayWithSet:(id)arg1;

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
- (unsigned long long)countByEnumeratingWithState:(CDStruct_58648341 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)objectAtIndex:(unsigned long long)arg1;
- (void)getObjects:(id *)arg1 range:(struct _NSRange)arg2;
- (id)initWithArray:(id)arg1 range:(struct _NSRange)arg2 copyItems:(_Bool)arg3;
- (id)initWithOrderedSet:(id)arg1;
- (unsigned long long)indexOfObject:(id)arg1;
- (unsigned long long)countForObject:(id)arg1;
- (_Bool)containsObject:(id)arg1;
- (void)enumerateObjectsWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (unsigned long long)indexOfObjectIdenticalTo:(id)arg1;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (id)initWithObject:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)descriptionWithLocale:(id)arg1;
- (unsigned long long)_cfTypeID;
- (id)firstObject;
- (_Bool)isEqualToArray:(id)arg1;
- (id)lastObject;
- (id)objectsAtIndexes:(id)arg1;
- (unsigned long long)indexOfObject:(id)arg1 inRange:(struct _NSRange)arg2;
- (id)sortedArrayFromRange:(struct _NSRange)arg1 options:(unsigned long long)arg2 usingComparator:(CDUnknownBlockType)arg3;
- (id)initWithArray:(id)arg1 copyItems:(_Bool)arg2;
- (id)_initByAdoptingBuffer:(id *)arg1 count:(unsigned long long)arg2 size:(unsigned long long)arg3;
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
- (_Bool)isNSArray__;
- (id)componentsJoinedByString:(id)arg1;
- (_Bool)containsObject:(id)arg1 inRange:(struct _NSRange)arg2;
- (_Bool)containsObjectIdenticalTo:(id)arg1 inRange:(struct _NSRange)arg2;
- (_Bool)containsObjectIdenticalTo:(id)arg1;
- (unsigned long long)countForObject:(id)arg1 inRange:(struct _NSRange)arg2;
- (void)enumerateObjectsAtIndexes:(id)arg1 options:(unsigned long long)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (id)firstObjectCommonWithArray:(id)arg1;
- (unsigned long long)indexOfObjectIdenticalTo:(id)arg1 inRange:(struct _NSRange)arg2;
- (id)indexesOfObject:(id)arg1 inRange:(struct _NSRange)arg2;
- (id)indexesOfObject:(id)arg1;
- (id)indexesOfObjectIdenticalTo:(id)arg1 inRange:(struct _NSRange)arg2;
- (id)indexesOfObjectIdenticalTo:(id)arg1;
- (unsigned long long)indexOfObject:(id)arg1 inSortedRange:(struct _NSRange)arg2 options:(unsigned long long)arg3 usingComparator:(CDUnknownBlockType)arg4;
- (unsigned long long)indexOfObjectPassingTest:(CDUnknownBlockType)arg1;
- (id)indexesOfObjectsPassingTest:(CDUnknownBlockType)arg1;
- (void)makeObjectsPerformSelector:(SEL)arg1;
- (void)makeObjectsPerformSelector:(SEL)arg1 withObject:(id)arg2;
- (id)objectAtIndexes:(id)arg1 options:(unsigned long long)arg2 passingTest:(CDUnknownBlockType)arg3;
- (id)objectPassingTest:(CDUnknownBlockType)arg1;
- (id)objectsAtIndexes:(id)arg1 options:(unsigned long long)arg2 passingTest:(CDUnknownBlockType)arg3;
- (id)objectsPassingTest:(CDUnknownBlockType)arg1;
- (id)reverseObjectEnumerator;
- (id)reversedArray;
- (id)sortedArrayUsingComparator:(CDUnknownBlockType)arg1;
- (id)sortedArrayUsingFunction:(CDUnknownFunctionPointerType)arg1 context:(void *)arg2;
- (id)sortedArrayUsingSelector:(SEL)arg1;
- (id)subarrayWithRange:(struct _NSRange)arg1;
- (id)initWithArray:(id)arg1 range:(struct _NSRange)arg2;
- (id)initWithObjects:(id)arg1;
- (id)initWithSet:(id)arg1;
- (id)initWithOrderedSet:(id)arg1 range:(struct _NSRange)arg2;
- (id)initWithOrderedSet:(id)arg1 copyItems:(_Bool)arg2;
- (id)arrayByAddingObject:(id)arg1;
- (id)arrayByAddingObjectsFromArray:(id)arg1;
- (id)arrayByApplyingSelector:(SEL)arg1;
- (id)arrayByExcludingObjectsInArray:(id)arg1;
- (id)arrayByExcludingToObjectsInArray:(id)arg1;

@end
