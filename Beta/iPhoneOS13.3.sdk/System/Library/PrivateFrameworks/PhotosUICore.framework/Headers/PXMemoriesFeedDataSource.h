/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXSectionedDataSource.h>

@class NSArray, NSString;

@interface PXMemoriesFeedDataSource : PXSectionedDataSource

{
    NSArray *_entries;
    struct PXSimpleIndexPath _indexPathForFirstPastMemorySection;
}

@property (nonatomic) struct PXSimpleIndexPath indexPathForFirstPastMemorySection;
@property (copy, nonatomic, readonly) NSArray *entries;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) unsigned long long identifier;
@property (nonatomic, readonly) long long numberOfSections;

- (id)init;
- (long long)numberOfItemsInSection:(long long)arg1;
- (id)objectAtIndexPath:(struct PXSimpleIndexPath)arg1;
- (id)initWithEntries:(id)arg1;
- (id)inputForItem:(id)arg1;
- (long long)numberOfSubitemsInItem:(long long)arg1 section:(long long)arg2;
- (struct PXSimpleIndexPath)_firstSectionIndexPath;
- (void)_enumerateSectionIndexPathsStartingAtIndexPath:(struct PXSimpleIndexPath)arg1 reverseDirection:(_Bool)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)_enumerateSectionIndexPathsWithHintIndexPath:(struct PXSimpleIndexPath)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)_enumerateItemIndexPathsWithHintIndexPath:(struct PXSimpleIndexPath)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (struct PXSimpleIndexPath)indexPathForObjectReference:(id)arg1 withHintIndexPath:(struct PXSimpleIndexPath)arg2;
- (struct PXSimpleIndexPath)indexPathForObjectReference:(id)arg1;
- (id)sectionedObjectReferenceForMemoryUUID:(id)arg1;

@end
