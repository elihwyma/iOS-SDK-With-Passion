/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class PXIndexPathSet, PXSectionedDataSource;

@interface PXSelectionSnapshot : NSObject

{
    PXSectionedDataSource *_dataSource;
    PXIndexPathSet *_selectedIndexPaths;
    struct PXSimpleIndexPath _cursorIndexPath;
}

@property (nonatomic, readonly) PXSectionedDataSource *dataSource;
@property (nonatomic, readonly) PXIndexPathSet *selectedIndexPaths;
@property (nonatomic, readonly) struct PXSimpleIndexPath cursorIndexPath;
@property (nonatomic, readonly) struct PXSimpleIndexPath firstSelectedIndexPath;
@property (nonatomic, readonly) struct PXSimpleIndexPath lastSelectedIndexPath;
@property (nonatomic, readonly) PXIndexPathSet *sectionIndexPathsContainingSelection;

- (id)init;
- (id)description;
- (id)initWithDataSource:(id)arg1 selectedIndexPaths:(id)arg2 cursorIndexPath:(struct PXSimpleIndexPath)arg3;
- (id)initWithDataSource:(id)arg1 selectedIndexPaths:(id)arg2;
- (id)initWithDataSource:(id)arg1 selectedIndexPath:(struct PXSimpleIndexPath)arg2;
- (_Bool)isIndexPathSelected:(struct PXSimpleIndexPath)arg1;
- (_Bool)isAnySectionSelected;
- (_Bool)isAnyItemSelected;
- (_Bool)areAllItemsSelected;
- (struct PXSimpleIndexPath)indexPathOfObjectPassingTest:(CDUnknownBlockType)arg1;
- (id)fetchSelectedObjects;
- (_Bool)areAllUnsavedAssetsSelectedWithImportStatusManager:(id)arg1;

@end
