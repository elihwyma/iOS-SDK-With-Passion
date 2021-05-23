/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Foundation/NSArray.h>

@interface NSArray (Additions)

- (int)intAtIndex:(int)arg1;
- (double)doubleAtIndex:(int)arg1;
- (struct CGRect)rectAtIndex:(int)arg1;
- (_Bool)boolAtIndex:(int)arg1;
- (id)secondObject;
- (float)floatAtIndex:(int)arg1;
- (id)objectsInRange:(struct _NSRange)arg1;
- (id)mutableDeepCopy;
- (id)randomObject;
- (id)randomObjectWithSeed:(unsigned int *)arg1;
- (id)thirdObject;
- (_Bool)boolAtIndex:(int)arg1 defaultValue:(_Bool)arg2;
- (int)intAtIndex:(int)arg1 defaultValue:(int)arg2;
- (float)floatAtIndex:(int)arg1 defaultValue:(float)arg2;
- (double)doubleAtIndex:(int)arg1 defaultValue:(double)arg2;
- (struct CGRect)rectAtIndex:(int)arg1 defaultValue:(struct CGRect)arg2;
- (id)objectAtIndex:(int)arg1 defaultValue:(id)arg2;
- (id)objectOrNullAtIndex:(int)arg1;
- (unsigned long long)numberOfObjectsWithKindOfClass:(Class)arg1;
- (id)objectAtIndexVEiOSNoThrow:(long long)arg1;

@end
