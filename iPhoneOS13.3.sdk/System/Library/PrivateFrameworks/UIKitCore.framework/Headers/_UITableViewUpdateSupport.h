//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSMutableIndexSet, UITableView, UITableViewRowData;

__attribute__((visibility("hidden")))
@interface _UITableViewUpdateSupport : NSObject
{
    long long oldSection;
    long long newSection;
    long long oldGlobalRow;
    long long newGlobalRow;
    UITableView *tableView;
    NSRange visibleRows;
    NSArray *updateItems;
    UITableViewRowData *oldRowData;
    UITableViewRowData *newRowData;
    NSRange oldRowRange;
    NSRange newRowRange;
    NSMutableIndexSet *rows;
    NSMutableIndexSet *movedRows;
    NSMutableIndexSet *movedSections;
    CGRect oldTableViewVisibleBounds;
    CGRect newTableViewVisibleBounds;
    CGRect tableViewVisibleBoundsUnion;
    double tableViewVisibleBoundsOffset;
    long long oldSectionCount;
    long long newSectionCount;
    long long oldSectionMap;
    long long newSectionMap;
    long long oldGlobalRowCount;
    long long newGlobalRowCount;
    long long oldGlobalRowMap;
    long long newGlobalRowMap;
    id animatedCells;
    id animatedHeaders;
    id animatedFooters;
    long long globalReorderingRow;
    id _context;
    NSMutableArray *viewAnimations;
    NSMutableArray *deletedSections;
    NSMutableArray *insertedSections;
    NSMutableArray *gaps;
}

// - (void).cxx_destruct;
- (void)dealloc;
- (void)_setupAnimations;
- (id)initWithTableView:(id)arg1 updateItems:(id)arg2 oldRowData:(id)arg3 newRowData:(id)arg4 oldRowRange:(NSRange)arg5 newRowRange:(NSRange)arg6 context:(id)arg7;
- (void)_setupAnimationForTableFooter;
- (void)_setupAnimationForTableHeader;
- (void)_setupAnimationsForExistingHeadersAndFooters;
- (void)_setupAnimationsForExistingOffscreenCells;
- (void)_setupDeleteAnimationForFooterInSection:(long long)arg1 withTargetRect:(CGRect)arg2 forUpdateItem:(id)arg3;
- (void)_setupDeleteAnimationForHeaderInSection:(long long)arg1 withTargetRect:(CGRect)arg2 forUpdateItem:(id)arg3;
- (void)_setupAnimationsForDeletedHeadersAndFooters;
- (void)_setupAnimationsForDeletedCells;
- (void)_addBottomShadowViewViewForViewAnimation:(id)arg1 viewType:(int)arg2;
- (id)_imageViewForView:(id)arg1;
- (void)_setupInsertAnimationForFooterInSection:(long long)arg1 withTargetRect:(CGRect)arg2 forUpdateItem:(id)arg3;
- (void)_setupInsertAnimationForHeaderInSection:(long long)arg1 withTargetRect:(CGRect)arg2 forUpdateItem:(id)arg3;
- (void)_setupAnimationsForInsertedHeadersAndFooters;
- (void)_setupAnimationsForNewlyInsertedCells;
- (void)_setupAnimationForReorderingRow;
- (void)_setupAnimationsForExistingVisibleCells;
- (void)_computeAutomaticAnimationTypes;
- (void)_computeGaps;
- (double)_startOfRowAfterFooterInSection:(long long)arg1 withRowData:(id)arg2;
- (double)_startOfRowAfterHeaderInSection:(long long)arg1 withRowData:(id)arg2;
- (double)_startOfRowAfterRow:(long long)arg1 withRowData:(id)arg2;
- (void)_setupAnimationStructures;
- (void)_reallocateAndComputeNewGlobalRowMapWithActualNewGlobalRowCount:(long long)arg1;
- (void)_computeRowUpdates;
- (void)_computeSectionUpdates;
- (void)_faultInRealHeightsOfNeededElements;
- (NSRange)_visibleRowRangePlusAdjoining;
- (void)_computeVisibleBounds;
- (BOOL)_isReloadSectionUpdate;
- (void)_validateAnimatedCells;

@end

