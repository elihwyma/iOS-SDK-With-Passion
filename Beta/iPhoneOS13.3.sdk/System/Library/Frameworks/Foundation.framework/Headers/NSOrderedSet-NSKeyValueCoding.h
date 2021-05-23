/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSOrderedSet.h>

@interface NSOrderedSet (NSKeyValueCoding)

+ (_Bool)supportsSecureCoding;

- (void)setValue:(id)arg1 forKey:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (Class)classForCoder;
- (void)removeObserver:(id)arg1 forKeyPath:(id)arg2;
- (id)valueForKey:(id)arg1;
- (id)valueForKeyPath:(id)arg1;
- (id)_valueForKeyPath:(id)arg1 ofObjectAtIndex:(unsigned long long)arg2;
- (id)_sumForKeyPath:(id)arg1;
- (id)_avgForKeyPath:(id)arg1;
- (id)_countForKeyPath:(id)arg1;
- (id)_maxForKeyPath:(id)arg1;
- (id)_minForKeyPath:(id)arg1;
- (id)_mutableArrayValueForKeyPath:(id)arg1 ofObjectAtIndex:(unsigned long long)arg2;
- (id)_mutableOrderedSetValueForKeyPath:(id)arg1 ofObjectAtIndex:(unsigned long long)arg2;
- (id)_mutableSetValueForKeyPath:(id)arg1 ofObjectAtIndex:(unsigned long long)arg2;
- (void)_setValue:(id)arg1 forKeyPath:(id)arg2 ofObjectAtIndex:(unsigned long long)arg3;
- (_Bool)_validateValue:(inout id *)arg1 forKeyPath:(id)arg2 ofObjectAtIndex:(unsigned long long)arg3 error:(out id *)arg4;
- (void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void *)arg4;
- (void)removeObserver:(id)arg1 forKeyPath:(id)arg2 context:(void *)arg3;
- (id)sortedArrayUsingDescriptors:(id)arg1;
- (id)differenceFromOrderedSet:(id)arg1 withOptions:(unsigned long long)arg2;
- (id)differenceFromOrderedSet:(id)arg1 withOptions:(unsigned long long)arg2 usingEquivalenceTest:(CDUnknownBlockType)arg3;
- (id)differenceFromOrderedSet:(id)arg1;
- (id)orderedSetByApplyingDifference:(id)arg1;
- (id)filteredOrderedSetUsingPredicate:(id)arg1;

@end
