/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXDataSection.h>

@class NSArray, NSDictionary, NSIndexSet, NSNumber, PXCollectionsDataSection;

@interface PXNavigationListDataSection : PXDataSection

{
    NSIndexSet *_dataSubsectionIndexes;
    NSArray *_dataSubsections;
    NSNumber *_countNumber;
    long long _indentationLevel;
    NSDictionary *_childDataSections;
    NSDictionary *_childIndexHints;
    PXCollectionsDataSection *_collectionsDataSection;
    NSArray *_sectionRangeMap;
}

@property (nonatomic, readonly) PXCollectionsDataSection *collectionsDataSection;
@property (nonatomic, readonly) NSArray *sectionRangeMap;
@property (nonatomic, readonly) long long indentationLevel;
@property (copy, nonatomic, readonly) NSDictionary *childDataSections;
@property (copy, nonatomic, readonly) NSDictionary *childIndexHints;

- (id)debugDescription;
- (long long)count;
- (id)objectAtIndex:(long long)arg1;
- (id)content;
- (id)initWithOutlineObject:(id)arg1;
- (id)initWithCollectionsDataSection:(id)arg1 indentationLevel:(long long)arg2 outlineObject:(id)arg3 childDataSections:(id)arg4 childIndexHints:(id)arg5;
- (id)initWithCollectionsDataSection:(id)arg1;
- (void)_createDataSubsectionsIfNecessary;
- (unsigned long long)_dataSubsectionIndexForListItemAtIndex:(long long)arg1;
- (long long)indexForListItem:(id)arg1;
- (long long)validatedIndexOfListItem:(id)arg1 hintIndex:(long long)arg2;
- (long long)indexInCollectionsDataSectionOfListItem:(id)arg1 hintIndex:(long long)arg2;
- (id)parentOfListItemAtIndex:(long long)arg1 localIndex:(long long *)arg2;

@end
