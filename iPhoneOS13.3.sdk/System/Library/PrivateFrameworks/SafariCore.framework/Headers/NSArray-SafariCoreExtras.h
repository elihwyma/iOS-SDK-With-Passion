//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSArray.h>

@interface NSArray (SafariCoreExtras)
+ (id)safari_arrayWithPropertyListData:(id)arg1 options:(NSUInteger)arg2;
+ (id)safari_arrayFromDictionaryOfObjectsByIndex:(id)arg1;
- (id)safari_flattenedArray;
- (id)safari_arrayByAddingObjectsFromArrayIfNotDuplicates:(id)arg1;
- (BOOL)safari_containsObjectPassingTest:(id /* CDUnknownBlockType */)arg1;
- (id)safari_firstObjectPassingTest:(id /* CDUnknownBlockType */)arg1;
- (id)_safari_generateDiffWithLongestCommonSubsequenceLengths:(id)arg1 array:(id)arg2 indexIntoSelf:(NSUInteger)arg3 indexIntoArray:(NSUInteger)arg4;
- (id)_safari_computeLengthsOfLongestSubsequencesCommonWithArray:(id)arg1;
- (id)safari_diffWithArray:(id)arg1;
- (id)safari_minimumUsingComparator:(id /* CDUnknownBlockType */)arg1;
- (id)safari_maximumUsingComparator:(id /* CDUnknownBlockType */)arg1;
- (id)safari_reduceObjectsWithInitialValue:(id)arg1 usingBlock:(id /* CDUnknownBlockType */)arg2;
- (id)safari_reduceObjectsUsingBlock:(id /* CDUnknownBlockType */)arg1;
- (id)safari_filterObjectsUsingBlock:(id /* CDUnknownBlockType */)arg1;
- (id)safari_mapObjectsUsingBlock:(id /* CDUnknownBlockType */)arg1;
- (id)safari_orderedSetByApplyingBlock:(id /* CDUnknownBlockType */)arg1;
- (id)safari_setByApplyingBlock:(id /* CDUnknownBlockType */)arg1;
- (void)safari_enumerateZippedValuesWithArray:(id)arg1 withBlock:(id /* CDUnknownBlockType */)arg2;
- (id)safari_mapAndFilterObjectsWithOptions:(NSUInteger)arg1 usingBlock:(id /* CDUnknownBlockType */)arg2;
- (id)safari_mapAndFilterObjectsUsingBlock:(id /* CDUnknownBlockType */)arg1;
- (id)safari_arrayAtIndex:(NSUInteger)arg1;
- (id)safari_dictionaryAtIndex:(NSUInteger)arg1;
- (id)safari_URLAtIndex:(NSUInteger)arg1;
- (id)safari_stringAtIndex:(NSUInteger)arg1;
- (id)safari_numberAtIndex:(NSUInteger)arg1;
@end

