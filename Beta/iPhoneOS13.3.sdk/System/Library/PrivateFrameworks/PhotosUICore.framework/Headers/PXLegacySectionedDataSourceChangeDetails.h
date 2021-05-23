/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSIndexSet, PXSectionedDataSourceChangeDetails;

@interface PXLegacySectionedDataSourceChangeDetails : NSObject

{
    NSIndexSet *_deletedSections;
    NSIndexSet *_insertedSections;
    NSIndexSet *_changedSections;
    NSArray *_deletedIndexPaths;
    NSArray *_insertedIndexPaths;
    NSArray *_changedIndexPaths;
    NSArray *_contentChangedIndexPaths;
    long long _shiftingSectionLocation;
    _Bool _prepared;
    _Bool _hasIncrementalChanges;
    _Bool _hasMoves;
    PXSectionedDataSourceChangeDetails *_sectionedDataSourceChangeDetails;
    NSArray *_contentItemsChangedIndexPaths;
}

@property (nonatomic, readonly) PXSectionedDataSourceChangeDetails *sectionedDataSourceChangeDetails;
@property (nonatomic, readonly) _Bool hasIncrementalChanges;
@property (nonatomic, readonly) NSIndexSet *deletedSections;
@property (nonatomic, readonly) NSIndexSet *insertedSections;
@property (nonatomic, readonly) NSIndexSet *changedSections;
@property (nonatomic, readonly) NSArray *deletedItemsIndexPaths;
@property (nonatomic, readonly) NSArray *insertedItemsIndexPaths;
@property (nonatomic, readonly) NSArray *changedItemsIndexPaths;
@property (nonatomic, readonly) NSArray *contentItemsChangedIndexPaths;
@property (nonatomic, readonly) _Bool hasMoves;

- (id)description;
- (void)prepareIfNeeded;
- (id)initWithSectionedDataSourceChangeDetails:(id)arg1 shiftedSection:(long long)arg2;
- (id)contentChangedItemsIndexPaths;
- (void)_prepareIncrementalDetails;
- (void)enumerateMovedIndexPathsUsingBlock:(CDUnknownBlockType)arg1;

@end
