/*
 Image: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSMapTable, NSString, NUIGridArrangement;

@interface TLKGridLayoutManager : NSObject

{
    _Bool _tableContainsRowHeaders;
    NSDictionary *_itemsForIndex;
    NSArray *_itemsForRows;
    NSMapTable *_itemToRowMapping;
    NUIGridArrangement *_gridArrangement;
    long long _indexForFirstTrailingColumn;
    long long _totalEqualColumns;
    NSArray *_spacings;
    double _widthOfEqualFillColumns;
    NSArray *_alignments;
    NSArray *_verticalRowAlignments;
    struct CGSize _cachedFittingSize;
    struct CGSize _cachedGridSize;
}

@property (retain, nonatomic) NSDictionary *itemsForIndex;
@property (retain, nonatomic) NSArray *itemsForRows;
@property (retain, nonatomic) NSMapTable *itemToRowMapping;
@property (retain, nonatomic) NUIGridArrangement *gridArrangement;
@property (nonatomic) struct CGSize cachedFittingSize;
@property (nonatomic) struct CGSize cachedGridSize;
@property (nonatomic) long long indexForFirstTrailingColumn;
@property (nonatomic) long long totalEqualColumns;
@property (retain, nonatomic) NSArray *spacings;
@property (nonatomic) double widthOfEqualFillColumns;
@property (retain, nonatomic) NSArray *alignments;
@property (retain, nonatomic) NSArray *verticalRowAlignments;
@property (nonatomic) _Bool tableContainsRowHeaders;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)font;
+ (id)computeTruncationForAlignments:(id)arg1 indexForFirstTrailingColumn:(unsigned long long)arg2 totalEqualColumns:(unsigned long long)arg3;
+ (id)verticalAlignmentsForItems:(id)arg1;
+ (id)arrayOfItemsForSection:(id)arg1;
+ (double)leadingSectionSpacingForView:(id)arg1 view2:(id)arg2 index:(unsigned long long)arg3 alignmentSchema:(id)arg4 allEqual:(_Bool)arg5;
+ (id)gridManagerWithAlignments:(id)arg1 rows:(id)arg2;

- (long long)numberOfColumns;
- (long long)effectiveUserInterfaceLayoutDirection;
- (struct CGSize)contentLayoutSizeFittingSize:(struct CGSize)arg1 forArrangedSubview:(id)arg2;
- (struct CGRect)layoutFrameForArrangedSubview:(id)arg1 withProposedContentFrame:(struct CGRect)arg2;
- (double)gridArrangement:(id)arg1 widthOfColumnAtIndex:(long long)arg2 spacingAfter:(double *)arg3;
- (long long)numberOfItemsInGridArrangement:(id)arg1;
- (id)gridArrangement:(id)arg1 itemAtIndex:(long long)arg2 columns:(struct _NSRange *)arg3 rows:(struct _NSRange *)arg4 horizontalAlignment:(long long *)arg5 verticalAlignment:(long long *)arg6;
- (struct CGSize)sizeForFittingSize:(struct CGSize)arg1 forRow:(id)arg2;
- (void)placeViewsForSize:(struct CGSize)arg1 forRow:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithWithAlignments:(id)arg1 rows:(id)arg2;
- (id)addItemsToDictionary:(id)arg1 forSection:(id)arg2 row:(unsigned long long)arg3 truncationPriorities:(id)arg4;
- (id)spacingsForAlignments:(id)arg1 firstValidDataRow:(id)arg2;
- (_Bool)hasManyTrailingColumns;
- (_Bool)allEqualColumns;
- (double)trailingSectionSpacingBasedOnTotalViewsInSection:(long long)arg1;

@end
