/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/EDCollection.h>

__attribute__((visibility("hidden")))
@interface EDReferenceCollection : EDCollection

{
    _Bool mCoalesce;
}

+ (id)noCoalesceCollection;
+ (id)coalesceCollection;

- (id)init;
- (unsigned long long)addObject:(id)arg1;
- (void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (void)coalesce;
- (unsigned long long)countOfCellsBeingReferenced;
- (id)reverseReferencesByRow:(_Bool)arg1;
- (void)coalesceProgressiveCellReferencesCollection;
- (id)referenceToCellWithIndex:(unsigned long long)arg1 byRow:(_Bool)arg2;
- (id)initWihNoCoalesce;
- (_Bool)coalesceReferenceAtIndex1:(unsigned long long)arg1 index2:(unsigned long long)arg2;

@end
