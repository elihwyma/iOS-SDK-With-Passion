/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSSet.h>

@interface NSSet (NSKeyValueCoding)

+ (_Bool)supportsSecureCoding;

- (void)setValue:(id)arg1 forKey:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (Class)classForCoder;
- (id)replacementObjectForPortCoder:(id)arg1;
- (void)removeObserver:(id)arg1 forKeyPath:(id)arg2;
- (id)valueForKey:(id)arg1;
- (id)valueForKeyPath:(id)arg1;
- (id)_sumForKeyPath:(id)arg1;
- (id)_avgForKeyPath:(id)arg1;
- (id)_countForKeyPath:(id)arg1;
- (id)_maxForKeyPath:(id)arg1;
- (id)_minForKeyPath:(id)arg1;
- (id)_distinctUnionOfArraysForKeyPath:(id)arg1;
- (id)_distinctUnionOfObjectsForKeyPath:(id)arg1;
- (id)_distinctUnionOfSetsForKeyPath:(id)arg1;
- (void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void *)arg4;
- (void)removeObserver:(id)arg1 forKeyPath:(id)arg2 context:(void *)arg3;
- (id)sortedArrayUsingDescriptors:(id)arg1;
- (id)filteredSetUsingPredicate:(id)arg1;

@end
