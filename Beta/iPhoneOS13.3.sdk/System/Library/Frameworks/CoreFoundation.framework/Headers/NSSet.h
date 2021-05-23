/*
 Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import <Foundation/NSObject.h>

@interface NSSet : NSObject

@property (readonly) unsigned long long count;

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (_Bool)supportsSecureCoding;
+ (id)set;
+ (id)setWithSet:(id)arg1;
+ (id)setWithObjects:(const id *)arg1 count:(unsigned long long)arg2;
+ (id)setWithArray:(id)arg1;
+ (id)setWithArray:(id)arg1 range:(struct _NSRange)arg2 copyItems:(_Bool)arg3;
+ (id)setWithObject:(id)arg1;
+ (id)newSetWithObjects:(const id *)arg1 count:(unsigned long long)arg2;
+ (id)setWithObjects:(id)arg1;
+ (id)setWithArray:(id)arg1 range:(struct _NSRange)arg2;
+ (id)setWithArray:(id)arg1 copyItems:(_Bool)arg2;
+ (id)setWithOrderedSet:(id)arg1 range:(struct _NSRange)arg2 copyItems:(_Bool)arg3;
+ (id)setWithOrderedSet:(id)arg1 range:(struct _NSRange)arg2;
+ (id)setWithOrderedSet:(id)arg1 copyItems:(_Bool)arg2;
+ (id)setWithOrderedSet:(id)arg1;
+ (id)setWithSet:(id)arg1 copyItems:(_Bool)arg2;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)initWithSet:(id)arg1 copyItems:(_Bool)arg2;
- (id)initWithObjects:(const id *)arg1 count:(unsigned long long)arg2;
- (id)member:(id)arg1;
- (id)objectEnumerator;
- (id)initWithArray:(id)arg1;
- (void)getObjects:(id *)arg1;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_58648341 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (void)getObjects:(id *)arg1 range:(struct _NSRange)arg2;
- (id)initWithArray:(id)arg1 range:(struct _NSRange)arg2 copyItems:(_Bool)arg3;
- (id)initWithOrderedSet:(id)arg1;
- (unsigned long long)countForObject:(id)arg1;
- (_Bool)containsObject:(id)arg1;
- (void)enumerateObjectsWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)initWithObject:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)descriptionWithLocale:(id)arg1;
- (unsigned long long)_cfTypeID;
- (_Bool)__getValue:(id *)arg1 forObj:(id)arg2;
- (void)__applyValues:(CDUnknownFunctionPointerType)arg1 context:(void *)arg2;
- (void)getObjects:(id *)arg1 count:(unsigned long long)arg2;
- (id)initWithArray:(id)arg1 copyItems:(_Bool)arg2;
- (id)allObjects;
- (id)setByAddingObjectsFromArray:(id)arg1;
- (id)setByAddingObjectsFromSet:(id)arg1;
- (id)descriptionWithLocale:(id)arg1 indent:(unsigned long long)arg2;
- (id)objectWithOptions:(unsigned long long)arg1 passingTest:(CDUnknownBlockType)arg2;
- (id)objectsWithOptions:(unsigned long long)arg1 passingTest:(CDUnknownBlockType)arg2;
- (id)sortedArrayWithOptions:(unsigned long long)arg1 usingComparator:(CDUnknownBlockType)arg2;
- (id)initWithOrderedSet:(id)arg1 range:(struct _NSRange)arg2 copyItems:(_Bool)arg3;
- (void)enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (void)makeObjectsPerformSelector:(SEL)arg1;
- (void)makeObjectsPerformSelector:(SEL)arg1 withObject:(id)arg2;
- (id)objectPassingTest:(CDUnknownBlockType)arg1;
- (id)objectsPassingTest:(CDUnknownBlockType)arg1;
- (id)sortedArrayUsingComparator:(CDUnknownBlockType)arg1;
- (id)initWithArray:(id)arg1 range:(struct _NSRange)arg2;
- (id)initWithObjects:(id)arg1;
- (id)initWithSet:(id)arg1;
- (id)initWithOrderedSet:(id)arg1 range:(struct _NSRange)arg2;
- (id)initWithOrderedSet:(id)arg1 copyItems:(_Bool)arg2;
- (_Bool)isNSSet__;
- (_Bool)isEqualToSet:(id)arg1;
- (id)anyObject;
- (_Bool)intersectsOrderedSet:(id)arg1;
- (_Bool)intersectsSet:(id)arg1;
- (_Bool)isSubsetOfOrderedSet:(id)arg1;
- (_Bool)isSubsetOfSet:(id)arg1;
- (id)members:(id)arg1 notFoundMarker:(id)arg2;
- (id)setByAddingObject:(id)arg1;

@end
