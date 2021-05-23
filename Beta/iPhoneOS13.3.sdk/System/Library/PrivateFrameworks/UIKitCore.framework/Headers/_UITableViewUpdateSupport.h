/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, NSMutableIndexSet, UITableView, UITableViewRowData;

__attribute__((visibility("hidden")))
@interface _UITableViewUpdateSupport : NSObject

{
    long long oldSection;
    long long newSection;
    long long oldGlobalRow;
    long long newGlobalRow;
    UITableView *tableView;
    struct _NSRange visibleRows;
    NSArray *updateItems;
    UITableViewRowData *oldRowData;
    UITableViewRowData *newRowData;
    struct _NSRange oldRowRange;
    struct _NSRange newRowRange;
    NSMutableIndexSet *rows;
    NSMutableIndexSet *movedRows;
    NSMutableIndexSet *movedSections;
    struct CGRect oldTableViewVisibleBounds;
    struct CGRect newTableViewVisibleBounds;
    struct CGRect tableViewVisibleBoundsUnion;
    double tableViewVisibleBoundsOffset;
    long long oldSectionCount;
    long long newSectionCount;
    long long *oldSectionMap;
    long long *newSectionMap;
    long long oldGlobalRowCount;
    long long newGlobalRowCount;
    long long *oldGlobalRowMap;
    long long *newGlobalRowMap;
    id *animatedCells;
    id *animatedHeaders;
    id *animatedFooters;
    long long globalReorderingRow;
    id _context;
    NSMutableArray *viewAnimations;
    NSMutableArray *deletedSections;
    NSMutableArray *insertedSections;
    NSMutableArray *gaps;
}

- (void)dealloc;
- (void)_computeSectionUpdates;
- (id)initWithTableView:(id)arg1 updateItems:(id)arg2 oldRowData:(id)arg3 newRowData:(id)arg4 oldRowRange:(struct _NSRange)arg5 newRowRange:(struct _NSRange)arg6 context:(id)arg7;
- (void)_setupAnimations;
- (struct _NSRange)_visibleRowRangePlusAdjoining;
- (void)_computeVisibleBounds;
- (void)_reallocateAndComputeNewGlobalRowMapWithActualNewGlobalRowCount:(long long)arg1;
- (double)_startOfRowAfterRow:(long long)arg1 withRowData:(id)arg2;
- (double)_startOfRowAfterHeaderInSection:(long long)arg1 withRowData:(id)arg2;
- (double)_startOfRowAfterFooterInSection:(long long)arg1 withRowData:(id)arg2;
- (void)_setupInsertAnimationForHeaderInSection:(long long)arg1 withTargetRect:(struct CGRect)arg2 forUpdateItem:(id)arg3;
- (void)_setupInsertAnimationForFooterInSection:(long long)arg1 withTargetRect:(struct CGRect)arg2 forUpdateItem:(id)arg3;
- (void)_addBottomShadowViewViewForViewAnimation:(id)arg1 viewType:(int)arg2;
- (void)_setupDeleteAnimationForHeaderInSection:(long long)arg1 withTargetRect:(struct CGRect)arg2 forUpdateItem:(id)arg3;
- (void)_setupDeleteAnimationForFooterInSection:(long long)arg1 withTargetRect:(struct CGRect)arg2 forUpdateItem:(id)arg3;
- (_Bool)_isReloadSectionUpdate;
- (id)_imageViewForView:(id)arg1;
- (void)_validateAnimatedCells;
- (void)_faultInRealHeightsOfNeededElements;
- (void)_computeRowUpdates;
- (void)_setupAnimationStructures;
- (void)_computeGaps;
- (void)_computeAutomaticAnimationTypes;
- (void)_setupAnimationsForExistingVisibleCells;
- (void)_setupAnimationForReorderingRow;
- (void)_setupAnimationsForNewlyInsertedCells;
- (void)_setupAnimationsForInsertedHeadersAndFooters;
- (void)_setupAnimationsForDeletedCells;
- (void)_setupAnimationsForDeletedHeadersAndFooters;
- (void)_setupAnimationsForExistingOffscreenCells;
- (void)_setupAnimationsForExistingHeadersAndFooters;
- (void)_setupAnimationForTableHeader;
- (void)_setupAnimationForTableFooter;

@end
