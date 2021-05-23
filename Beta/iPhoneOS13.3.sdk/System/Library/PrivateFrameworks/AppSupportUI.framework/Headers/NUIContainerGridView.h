/*
 Image: /System/Library/PrivateFrameworks/AppSupportUI.framework/AppSupportUI
 */

#import <AppSupportUI/NUIContainerView.h>

@class NSArray, NSMutableArray, NSString;

@interface NUIContainerGridView : NUIContainerView

{
    NSMutableArray *_viewRows;
    struct _NUIGridArrangement _arrangement;
    CDStruct_0d6b4eb6 _visibleCount;
    struct map<UIView *, const std::__1::pair<_NSRange, _NSRange>, std::__1::less<UIView *>, std::__1::allocator<std::__1::pair<UIView *const, const std::__1::pair<_NSRange, _NSRange>>>> _viewRanges;
    struct CGSize _spacing;
    NSMutableArray *_rows;
    NSMutableArray *_columns;
    struct {
        unsigned int horzAlign:8;
        unsigned int vertAlign:8;
        unsigned int inInsertOrRemove:1;
        unsigned int hasMutations:1;
    } _gridViewFlags;
    double _rowHeight;
    double _columnWidth;
}

@property (copy, nonatomic) NSArray *arrangedSubviewRows;
@property (nonatomic, readonly) long long numberOfRows;
@property (nonatomic, readonly) long long numberOfColumns;
@property (nonatomic) long long horizontalAlignment;
@property (nonatomic) long long verticalAlignment;
@property (nonatomic) long long horizontalDistribution;
@property (nonatomic) long long verticalDistribution;
@property (nonatomic) double rowSpacing;
@property (nonatomic) double columnSpacing;
@property (nonatomic) double rowHeight;
@property (nonatomic) double columnWidth;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)containerGridViewWithArrangedSubviewRows:(id)arg1;

- (void)dealloc;
- (id).cxx_construct;
- (id)rowAtIndex:(long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)debugDictionary;
- (id)initWithArrangedSubviews:(id)arg1;
- (void)setBaselineRelativeArrangement:(_Bool)arg1;
- (id)columnAtIndex:(long long)arg1;
- (void)populateGridArrangementCells:(vector_f8404f95 *)arg1;
- (void)populateGridArrangementDimension:(vector_b8a5df6e *)arg1 withCells:(const vector_f8404f95 *)arg2 axis:(long long)arg3;
- (_Bool)setNeedsInvalidation:(long long)arg1;
- (void)didRemoveArrangedSubview:(id)arg1 atIndex:(long long)arg2;
- (void)didInsertArrangedSubview:(id)arg1 atIndex:(long long)arg2;
- (void)replaceArrangedSubviewAtIndex:(unsigned long long)arg1 withView:(id)arg2;
- (struct CGSize)calculateArrangedSizeFittingSize:(struct CGSize)arg1;
- (void)layoutArrangedSubviewsInBounds:(struct CGRect)arg1;
- (_Bool)needsBaselineDebugBoundingBoxesForArrangedSubview:(id)arg1;
- (id)calculateViewForFirstBaselineLayout;
- (id)calculateViewForLastBaselineLayout;
- (id)arrangedDescription;
- (void)ensureArrangedSubviewsAreValid;
- (id)debugDictionaryForVisibleArrangedSubview:(id)arg1;
- (id)initWithArrangedSubviewRows:(id)arg1;
- (void)getColumnRange:(struct _NSRange *)arg1 rowRange:(struct _NSRange *)arg2 forArrangedSubview:(id)arg3;
- (long long)_verticalAlignmentOfView:(id)arg1 row:(long long)arg2;
- (id)viewForFirstBaselineLayoutInRowAtIndex:(long long)arg1;
- (id)viewForLastBaselineLayoutInRowAtIndex:(long long)arg1;
- (id)addRowWithArrangedSubviews:(id)arg1;
- (void)removeRowAtIndex:(long long)arg1;
- (void)_setupViewRangesIfNeeded;
- (id)insertRowAtIndex:(long long)arg1 withArrangedSubviews:(id)arg2;
- (id)insertColumnAtIndex:(long long)arg1 withArrangedSubviews:(id)arg2;
- (id)arrangedSubviewInColumnAtIndex:(long long)arg1 rowAtIndex:(long long)arg2;
- (id)_baselineViewVendForFirstBaseline:(_Bool)arg1 fromViews:(id)arg2;
- (struct CGSize)_calculateArrangedSizeFittingSize:(struct CGSize)arg1 forLayout:(_Bool)arg2;
- (id)debugDictionaryForDimensionConfiguration:(id)arg1;
- (id)debugArrayForDimension:(id)arg1;
- (_Bool)_verifyInternalGridConsistencyWarningOnly:(_Bool)arg1;
- (long long)_horizontalAlignmentOfView:(id)arg1 inColumn:(long long)arg2;
- (double)_widthOfColumnAtIndex:(long long)arg1;
- (double)_heightOfRowAtIndex:(long long)arg1;
- (long long)rowIndexForArrangedSubview:(id)arg1;
- (long long)columnIndexForArrangedSubview:(id)arg1;
- (void)moveRowAtIndex:(long long)arg1 toIndex:(long long)arg2;
- (id)addColumnWithArrangedSubviews:(id)arg1;
- (void)moveColumnAtIndex:(long long)arg1 toIndex:(long long)arg2;
- (void)removeColumnAtIndex:(long long)arg1;
- (void)replaceArrangedSubview:(id)arg1 inColumnAtIndex:(long long)arg2 rowAtIndex:(long long)arg3;

@end
