/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSArray.h>

@interface NSArray (NSArray)

+ (id)newWithContentsOf:(id)arg1 immutable:(_Bool)arg2;
+ (id)arrayWithContentsOfFile:(id)arg1;
+ (id)arrayWithContentsOfURL:(id)arg1;
+ (id)arrayWithContentsOfURL:(id)arg1 error:(id *)arg2;
+ (id)newWithContentsOf:(id)arg1 immutable:(_Bool)arg2 error:(id *)arg3;

- (id)debugDescription;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (Class)classForCoder;
- (id)initWithContentsOfFile:(id)arg1;
- (id)initWithContentsOfURL:(id)arg1;
- (id)replacementObjectForPortCoder:(id)arg1;
- (void)removeObserver:(id)arg1 forKeyPath:(id)arg2;
- (id)valueForKey:(id)arg1;
- (_Bool)writeToFile:(id)arg1 atomically:(_Bool)arg2;
- (id)sortedArrayUsingFunction:(CDUnknownFunctionPointerType)arg1 context:(void *)arg2 hint:(id)arg3;
- (id)initWithContentsOfURL:(id)arg1 error:(id *)arg2;
- (id)_stringToWrite;
- (id)sortedArrayHint;
- (id)sortedArrayUsingSelector:(SEL)arg1 hint:(id)arg2;
- (_Bool)writeToURL:(id)arg1 atomically:(_Bool)arg2;
- (_Bool)writeToURL:(id)arg1 error:(id *)arg2;
- (id)valueForKeyPath:(id)arg1;
- (id)_valueForKeyPath:(id)arg1 ofObjectAtIndex:(unsigned long long)arg2;
- (id)_sumForKeyPath:(id)arg1;
- (id)_unionOfArraysForKeyPath:(id)arg1;
- (id)_unionOfObjectsForKeyPath:(id)arg1;
- (id)_avgForKeyPath:(id)arg1;
- (id)_countForKeyPath:(id)arg1;
- (id)_maxForKeyPath:(id)arg1;
- (id)_minForKeyPath:(id)arg1;
- (id)_unionOfSetsForKeyPath:(id)arg1;
- (id)_distinctUnionOfArraysForKeyPath:(id)arg1;
- (id)_distinctUnionOfObjectsForKeyPath:(id)arg1;
- (id)_distinctUnionOfSetsForKeyPath:(id)arg1;
- (id)_mutableArrayValueForKeyPath:(id)arg1 ofObjectAtIndex:(unsigned long long)arg2;
- (id)_mutableOrderedSetValueForKeyPath:(id)arg1 ofObjectAtIndex:(unsigned long long)arg2;
- (id)_mutableSetValueForKeyPath:(id)arg1 ofObjectAtIndex:(unsigned long long)arg2;
- (void)_setValue:(id)arg1 forKeyPath:(id)arg2 ofObjectAtIndex:(unsigned long long)arg3;
- (_Bool)_validateValue:(inout id *)arg1 forKeyPath:(id)arg2 ofObjectAtIndex:(unsigned long long)arg3 error:(out id *)arg4;
- (void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void *)arg4;
- (void)removeObserver:(id)arg1 forKeyPath:(id)arg2 context:(void *)arg3;
- (void)addObserver:(id)arg1 toObjectsAtIndexes:(id)arg2 forKeyPath:(id)arg3 options:(unsigned long long)arg4 context:(void *)arg5;
- (void)removeObserver:(id)arg1 fromObjectsAtIndexes:(id)arg2 forKeyPath:(id)arg3 context:(void *)arg4;
- (void)removeObserver:(id)arg1 fromObjectsAtIndexes:(id)arg2 forKeyPath:(id)arg3;
- (id)pathsMatchingExtensions:(id)arg1;
- (id)stringsByAppendingPathComponent:(id)arg1;
- (id)sortedArrayUsingDescriptors:(id)arg1;
- (id)differenceFromArray:(id)arg1 withOptions:(unsigned long long)arg2 usingEquivalenceTest:(CDUnknownBlockType)arg3;
- (id)filteredArrayUsingPredicate:(id)arg1;
- (id)differenceFromArray:(id)arg1 withOptions:(unsigned long long)arg2;
- (id)differenceFromArray:(id)arg1;
- (id)arrayByApplyingDifference:(id)arg1;

@end
