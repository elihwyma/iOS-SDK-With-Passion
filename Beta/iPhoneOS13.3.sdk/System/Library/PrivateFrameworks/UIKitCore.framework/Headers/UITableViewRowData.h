/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSIndexPath, UITableViewHeaderFooterView;

@protocol UITable_RowDataSource;

__attribute__((visibility("hidden")))
@interface UITableViewRowData : NSObject <Swift>

{
    id <UITable_RowDataSource> _tableView;
    UITableViewHeaderFooterView *_headerFooterViewUsedForMeasurements;
    double _tableViewWidth;
    long long _numSections;
    _Bool _estimatesHeights;
    long long _sectionRowDataCapacity;
    id *_sectionRowData;
    double _tableHeaderHeight;
    double _tableFooterHeight;
    double _heightForTableHeaderViewHiding;
    struct {
        unsigned int tableHeaderHeightValid:1;
        unsigned int tableFooterHeightValid:1;
        unsigned int tableSidePaddingValid:1;
        unsigned int usesVariableMargins:1;
        unsigned int pinsTableHeaderView:1;
    } _rowDataFlags;
    double _minimumRowHeight;
    double _rowSpacing;
    double _tableTopPadding;
    double _tableBottomPadding;
    double _tableSidePadding;
    NSIndexPath *_gapIndexPath;
    NSIndexPath *_reorderedIndexPath;
    NSIndexPath *_draggedIndexPath;
    double _defaultSectionHeaderHeight;
    double _defaultSectionFooterHeight;
    double _gapRowHeight;
    double _draggedRowHeight;
}

@property (nonatomic, readonly) double defaultSectionHeaderHeight;
@property (nonatomic, readonly) double defaultSectionFooterHeight;
@property (nonatomic, readonly) NSIndexPath *temporarilyDeletedIndexPathBeingReordered;
@property (retain, nonatomic) NSIndexPath *gapIndexPath;
@property (nonatomic) double gapRowHeight;
@property (nonatomic) double draggedRowHeight;
@property (retain, nonatomic) NSIndexPath *reorderedIndexPath;
@property (retain, nonatomic) NSIndexPath *draggedIndexPath;
@property (nonatomic, readonly) double heightForAutohidingTableHeaderView;
@property (nonatomic, readonly) double heightForTableHeaderViewHiding;
@property (nonatomic) double minimumRowHeight;
@property (nonatomic) double rowSpacing;
@property (nonatomic) double tableTopPadding;
@property (nonatomic) double tableBottomPadding;
@property (nonatomic) double tableSidePadding;
@property (nonatomic) _Bool usesVariableMargins;
@property (nonatomic) _Bool pinsTableHeaderView;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)numberOfRows;
- (long long)numberOfSections;
- (id)initWithTableView:(id)arg1;
- (void)tableViewWidthDidChangeToWidth:(double)arg1;
- (void)ensureAllSectionsAreValid;
- (struct CGRect)floatingRectForHeaderInSection:(long long)arg1 visibleRect:(struct CGRect)arg2 heightCanBeGuessed:(_Bool)arg3;
- (double)heightForHeaderInSection:(long long)arg1 canGuess:(_Bool)arg2;
- (struct CGRect)floatingRectForFooterInSection:(long long)arg1 visibleRect:(struct CGRect)arg2 heightCanBeGuessed:(_Bool)arg3;
- (long long)numberOfRowsInSection:(long long)arg1;
- (double)heightForFooterInSection:(long long)arg1 canGuess:(_Bool)arg2;
- (id)_indexPathsBelowIndexPath:(id)arg1;
- (void)setHeight:(double)arg1 forRowAtIndexPath:(id)arg2;
- (void)setHeight:(double)arg1 forHeaderInSection:(long long)arg2;
- (void)setHeight:(double)arg1 forFooterInSection:(long long)arg2;
- (void)invalidateAllSections;
- (void)invalidateSection:(long long)arg1;
- (double)heightForTableHeaderView;
- (void)tableHeaderHeightDidChangeToHeight:(double)arg1;
- (struct CGRect)rectForTable;
- (id)indexPathsForRowsInRect:(struct CGRect)arg1;
- (double)heightForTableFooterView;
- (void)tableFooterHeightDidChangeToHeight:(double)arg1;
- (int)sectionLocationForRow:(long long)arg1 inSection:(long long)arg2;
- (struct CGRect)rectForTableHeaderView;
- (struct CGRect)rectForTableFooterView;
- (double)maxHeaderTitleWidthForSection:(long long)arg1;
- (long long)headerAlignmentForSection:(long long)arg1;
- (double)maxFooterTitleWidthForSection:(long long)arg1;
- (long long)footerAlignmentForSection:(long long)arg1;
- (struct _NSRange)globalRowsInRect:(struct CGRect)arg1 canGuess:(_Bool)arg2;
- (id)indexPathForRowAtGlobalRow:(long long)arg1;
- (struct CGRect)rectForGlobalRow:(long long)arg1 heightCanBeGuessed:(_Bool)arg2;
- (double)heightForTable;
- (struct CGRect)rectForRow:(long long)arg1 inSection:(long long)arg2 heightCanBeGuessed:(_Bool)arg3;
- (struct CGRect)rectForFooterInSection:(long long)arg1 heightCanBeGuessed:(_Bool)arg2;
- (struct CGRect)rectForHeaderInSection:(long long)arg1 heightCanBeGuessed:(_Bool)arg2;
- (struct CGRect)rectForSection:(long long)arg1;
- (void)setHeightForTableHeaderViewHiding:(double)arg1;
- (struct _NSRange)sectionsInRect:(struct CGRect)arg1;
- (long long)globalRowForRowAtIndexPath:(id)arg1;
- (id)targetIndexPathForPoint:(struct CGPoint)arg1 adjustedForGap:(_Bool)arg2;
- (long long)dropLocationForPoint:(struct CGPoint)arg1 atIndexPath:(id)arg2 withInsets:(struct UIEdgeInsets)arg3;
- (id)indexPathsForRowsInRect:(struct CGRect)arg1 extraHitSpaceBetweenRows:(double)arg2;
- (_Bool)ensureHeightsFaultedInForScrollToIndexPath:(id)arg1 withScrollPosition:(long long)arg2 boundsHeight:(double)arg3;
- (void)invalidateAllSectionOffsetsAndUpdatePadding;
- (double)heightForRow:(long long)arg1 inSection:(long long)arg2 canGuess:(_Bool)arg3;
- (void)removeDropTargetGap;
- (void)addDropTargetGapAtIndexPath:(id)arg1;
- (void)moveDropTargetGapToIndexPath:(id)arg1;
- (void)addGapAtIndexPath:(id)arg1;
- (void)removeGap;
- (void)moveRowAtIndexPathFrom:(id)arg1 toIndexPath:(id)arg2;
- (_Bool)hasHeaderForSection:(long long)arg1;
- (int)sectionLocationForReorderedRow:(long long)arg1 inSection:(long long)arg2;
- (void)adjustSectionOffsetsBeginningAtIndex:(long long)arg1 count:(long long)arg2 delta:(double)arg3 rowDelta:(long long)arg4;
- (_Bool)shouldStripHeaderTopPaddingForSection:(long long)arg1;
- (long long)sectionForSectionRowData:(id)arg1;
- (double)offsetForSection:(id)arg1;
- (void)_updateSectionRowDataArrayForNumSections:(long long)arg1;
- (void)_ensureSectionOffsetIsValidForSection:(long long)arg1;
- (void)_updateNumSections;
- (void)_updateTopAndBottomPadding;
- (void)restoreReorderedRowWithHeight:(double)arg1 atIndexPath:(id)arg2;
- (double)removeReorderedRowWithHeight:(double)arg1 atIndexPath:(id)arg2;
- (double)_dropTargetGapHeightForIndexPath:(id)arg1;
- (double)heightForRow:(long long)arg1 inSection:(long long)arg2 canGuess:(_Bool)arg3 adjustForReorderedRow:(_Bool)arg4;
- (id)_nextIndexPathOrSectionHeader:(id)arg1;
- (_Bool)hasFooterForSection:(long long)arg1;
- (long long)_sectionRowForGlobalRow:(long long)arg1 inSection:(long long *)arg2;
- (long long)sectionForPoint:(struct CGPoint)arg1;
- (long long)_sectionForPoint:(struct CGPoint)arg1 beginningWithSection:(long long)arg2 numberOfSections:(long long)arg3;
- (void)_assertValidIndexPath:(id)arg1 allowEmptySection:(_Bool)arg2;
- (id)_previousIndexPathOrSectionHeader:(id)arg1;
- (struct CGRect)rectForGap;
- (long long)numberOfRowsBeforeSection:(long long)arg1;
- (double)heightForSection:(long long)arg1;

@end
