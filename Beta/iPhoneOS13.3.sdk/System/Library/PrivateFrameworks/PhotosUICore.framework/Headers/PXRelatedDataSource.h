/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXSectionedDataSource.h>

@class NSArray;

@interface PXRelatedDataSource : PXSectionedDataSource

{
    _Bool _transient;
    _Bool _useItemIndexPaths;
    NSArray *_relatedEntries;
}

@property (copy, nonatomic, readonly) NSArray *relatedEntries;
@property (nonatomic, readonly, getter=isTransient) _Bool transient;
@property (nonatomic, readonly) _Bool useItemIndexPaths;

- (id)init;
- (long long)numberOfSections;
- (long long)numberOfItemsInSection:(long long)arg1;
- (id)objectAtIndexPath:(struct PXSimpleIndexPath)arg1;
- (struct PXSimpleIndexPath)indexPathForObjectReference:(id)arg1;
- (id)initWithRelatedEntries:(id)arg1 isTransient:(_Bool)arg2 useItemIndexPaths:(_Bool)arg3;
- (id)relatedEntryAtIndexPath:(struct PXSimpleIndexPath)arg1;
- (id)_relatedEntryAtIndexPath:(struct PXSimpleIndexPath)arg1;
- (struct PXSimpleIndexPath)indexPathForRelatedEntry:(id)arg1;

@end
