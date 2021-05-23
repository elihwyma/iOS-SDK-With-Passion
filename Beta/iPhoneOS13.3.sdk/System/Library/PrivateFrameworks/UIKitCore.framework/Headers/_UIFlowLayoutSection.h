/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, NSMutableSet, _UIFlowLayoutInfo;

__attribute__((visibility("hidden")))
@interface _UIFlowLayoutSection : NSObject

{
    _Bool _isValid;
    struct CGRect _validRect;
    struct CGRect _rectToKeepValid;
    NSMutableSet *_invalidatedIndexPaths;
    _Bool _fixedItemSize;
    _Bool _lastRowIncomplete;
    NSMutableArray *_items;
    NSMutableArray *_rows;
    double _verticalInterstice;
    double _horizontalInterstice;
    double _headerDimension;
    double _footerDimension;
    _UIFlowLayoutInfo *_layoutInfo;
    double _otherMargin;
    double _beginMargin;
    double _endMargin;
    double _actualGap;
    double _lastRowBeginMargin;
    double _lastRowEndMargin;
    double _lastRowActualGap;
    long long _itemsCount;
    long long _itemsByRowCount;
    long long _indexOfIncompleteRow;
    CDStruct_2f5e8405 _rowAlignmentOptions;
    struct CGSize _itemSize;
    struct _NSRange _validItemRange;
    struct UIEdgeInsets _sectionMargins;
    struct CGRect _frame;
    struct CGRect _headerFrame;
    struct CGRect _footerFrame;
}

@property (nonatomic, readonly) NSMutableArray *items;
@property (nonatomic, readonly) NSMutableArray *rows;
@property (nonatomic) double verticalInterstice;
@property (nonatomic) double horizontalInterstice;
@property (nonatomic) struct UIEdgeInsets sectionMargins;
@property (nonatomic) struct CGRect frame;
@property (nonatomic) struct CGRect headerFrame;
@property (nonatomic) struct CGRect footerFrame;
@property (nonatomic, readonly) double headerDimension;
@property (nonatomic, readonly) double footerDimension;
@property (nonatomic, readonly) struct CGRect effectiveHeaderFrameWithSectionMarginsApplied;
@property (nonatomic, readonly) struct CGRect effectiveFooterFrameWithSectionMarginsApplied;
@property (weak, nonatomic) _UIFlowLayoutInfo *layoutInfo;
@property (nonatomic) CDStruct_2f5e8405 rowAlignmentOptions;
@property (nonatomic) _Bool fixedItemSize;
@property (nonatomic) struct CGSize itemSize;
@property (nonatomic, readonly) double otherMargin;
@property (nonatomic, readonly) double beginMargin;
@property (nonatomic, readonly) double endMargin;
@property (nonatomic, readonly) double actualGap;
@property (nonatomic, readonly) double lastRowBeginMargin;
@property (nonatomic, readonly) double lastRowEndMargin;
@property (nonatomic, readonly) double lastRowActualGap;
@property (nonatomic, readonly) _Bool lastRowIncomplete;
@property (nonatomic) long long itemsCount;
@property (nonatomic, readonly) long long itemsByRowCount;
@property (nonatomic, readonly) long long indexOfIncompleteRow;
@property (nonatomic, readonly) struct _NSRange validItemRange;
@property (nonatomic, readonly) NSArray *invalidatedIndexPaths;

- (id)init;
- (void)invalidate;
- (id)snapshot;
- (id)addItem;
- (void)setHeaderDimension:(double)arg1 forSection:(long long)arg2;
- (void)setFooterDimension:(double)arg1 forSection:(long long)arg2;
- (void)updateEstimatedSizeForSection:(long long)arg1;
- (void)computeLayoutInRect:(struct CGRect)arg1 forSection:(long long)arg2 invalidating:(_Bool)arg3 invalidationContext:(id)arg4;
- (void)computeLayout;
- (struct CGRect)frameForItemAtIndexPath:(id)arg1;
- (void)logInvalidSizesForHorizontalDirection:(_Bool)arg1 warnAboutDelegateValues:(_Bool)arg2;
- (id)addRowAtEnd:(_Bool)arg1;
- (void)setEstimatedSize:(struct CGSize)arg1 forSection:(long long)arg2;
- (void)addInvalidatedIndexPath:(id)arg1;
- (void)sizeChangedForItem:(id)arg1 atIndexPath:(id)arg2 inRow:(id)arg3;
- (long long)estimatedIndexOfItemAtPoint:(struct CGPoint)arg1;
- (void)logInvalidSizes;
- (void)computeLayoutValidatingForwardForIndexPath:(id)arg1;
- (id)copyFromLayoutInfo:(id)arg1;
- (void)updateSize:(struct CGSize)arg1 forItemAtIndexPath:(id)arg2;
- (void)setSize:(struct CGSize)arg1 forItemAtIndexPath:(id)arg2 invalidationContext:(id)arg3;
- (id)rowsInRect:(struct CGRect)arg1;

@end
