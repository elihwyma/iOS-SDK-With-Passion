/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXDataSection.h>

@class NSArray, NSDictionary, NSEnumerator, NSIndexSet;

@protocol NSFastEnumeration;

@interface PXStackedDataSection : PXDataSection

{
    NSArray *_childDataSectionsStartIndexes;
    NSIndexSet *_nonEmptyChildDataSectionsStartIndexSet;
    NSDictionary *_nonEmptyChildDataSectionsIndexMap;
    NSEnumerator *_childDataSectionsEnumerator;
    id <NSFastEnumeration> _currentEnumerator;
    unsigned long long _enumerationMutations;
    unsigned long long *_currentEnumeratorMutationsPtr;
    long long _count;
    NSArray *_childDataSections;
}

@property (copy, nonatomic, readonly) NSArray *childDataSections;

+ (id)dataSectionForAssetsInCollections:(id)arg1;

- (id)debugDescription;
- (long long)count;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)objectAtIndex:(long long)arg1;
- (id)initWithChildDataSections:(id)arg1 outlineObject:(id)arg2;
- (long long)indexOfChildDataSourceForObjectAtIndex:(long long)arg1 localIndex:(long long *)arg2;
- (long long)itemStartIndexForChildDataSourceAtIndex:(long long)arg1;
- (void)_resetEnumerationState:(CDStruct_70511ce9 *)arg1;
- (id)_nextEnumerator;

@end
