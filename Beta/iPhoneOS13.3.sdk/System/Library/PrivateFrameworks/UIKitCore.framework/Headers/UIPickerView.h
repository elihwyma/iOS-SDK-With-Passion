/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

#import <UIKitCore/Swift-Protocol.h>

@class CALayer, NSMutableArray, NSString, UIColor, UIImageView, UISelectionFeedbackGenerator, _UIPickerViewTestParameters;

@protocol UIPickerViewDataSource, UIPickerViewDelegate;

@interface UIPickerView : UIView <Swift>

{
    NSMutableArray *_tables;
    UIView *_topFrame;
    NSMutableArray *_dividers;
    NSMutableArray *_selectionBars;
    id <UIPickerViewDataSource> _dataSource;
    id <UIPickerViewDelegate> _delegate;
    UIView *_backgroundView;
    long long _numberOfComponents;
    UIImageView *_topGradient;
    UIImageView *_bottomGradient;
    UIView *_foregroundView;
    CALayer *_maskGradientLayer;
    UIView *_topLineView;
    UIView *_bottomLineView;
    struct {
        unsigned int needsLayout:1;
        unsigned int delegateRespondsToNumberOfComponentsInPickerView:1;
        unsigned int delegateRespondsToNumberOfRowsInComponent:1;
        unsigned int delegateRespondsToDidSelectRow:1;
        unsigned int delegateRespondsToViewForRow:1;
        unsigned int delegateRespondsToTitleForRow:1;
        unsigned int delegateRespondsToAttributedTitleForRow:1;
        unsigned int delegateRespondsToWidthForComponent:1;
        unsigned int delegateRespondsToRowHeightForComponent:1;
        unsigned int showsSelectionBar:1;
        unsigned int allowsMultipleSelection:1;
        unsigned int allowSelectingCells:1;
        unsigned int soundsDisabled:1;
        unsigned int usesCheckedSelection:1;
        unsigned int skipsBackground:1;
        unsigned int isInLayoutSubviews:1;
        unsigned int usesDynamicRowHeight:1;
    } _pickerViewFlags;
    UIColor *_textColor;
    UIColor *_textShadowColor;
    _UIPickerViewTestParameters *_currentTestParameters;
    _Bool _magnifierEnabled;
    _Bool _enabled;
    UISelectionFeedbackGenerator *_selectionFeedbackGenerator;
    UIColor *_magnifierLineColor;
}

@property (nonatomic, getter=_enabled, setter=_setEnabled:) _Bool enabled;
@property (nonatomic, setter=_setMagnifierEnabled:) _Bool _magnifierEnabled;
@property (retain, nonatomic, getter=_selectionFeedbackGenerator, setter=_setSelectionFeedbackGenerator:) UISelectionFeedbackGenerator *selectionFeedbackGenerator;
@property (retain, nonatomic, getter=_highlightColor, setter=_setHighlightColor:) UIColor *highlightColor;
@property (retain, nonatomic, getter=_textColor, setter=_setTextColor:) UIColor *textColor;
@property (retain, nonatomic, getter=_textShadowColor, setter=_setTextShadowColor:) UIColor *textShadowColor;
@property (retain, nonatomic, getter=_magnifierLineColor, setter=_setMagnifierLineColor:) UIColor *magnifierLineColor;
@property (getter=_usesDynamicRowHeight, setter=_setUsesDynamicRowHeight:) _Bool usesDynamicRowHeight;
@property (weak, nonatomic) id <UIPickerViewDataSource> dataSource;
@property (weak, nonatomic) id <UIPickerViewDelegate> delegate;
@property (nonatomic) _Bool showsSelectionIndicator;
@property (nonatomic, readonly) long long numberOfComponents;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)initialize;
+ (struct CGSize)defaultSizeForCurrentOrientation;
+ (struct CGSize)defaultSizeForMainScreenTraits;
+ (struct CGSize)sizeForMainScreenTraitsThatFits:(struct CGSize)arg1;
+ (struct CGSize)sizeThatFits:(struct CGSize)arg1 forTraits:(id)arg2;
+ (struct CGSize)defaultSizeForTraits:(id)arg1;

- (id)init;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (struct CGSize)defaultSize;
- (void)reload;
- (long long)numberOfColumns;
- (void)setBackgroundColor:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (_Bool)isAccessibilityElementByDefault;
- (id)_contentView;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setNeedsLayout;
- (void)layoutSubviews;
- (_Bool)_drawsBackground;
- (void)_setDrawsBackground:(_Bool)arg1;
- (void)reloadData;
- (void)didMoveToWindow;
- (void)_populateArchivedSubviews:(id)arg1;
- (struct CGSize)_intrinsicSizeWithinSize:(struct CGSize)arg1;
- (_Bool)_contentHuggingDefault_isUsuallyFixedHeight;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (_Bool)allowsMultipleSelection;
- (void)setAllowsMultipleSelection:(_Bool)arg1;
- (_Bool)_canHostViewControllerContentScrollView;
- (_Bool)_contentHuggingDefault_isUsuallyFixedWidth;
- (void)reloadAllComponents;
- (void)selectRow:(long long)arg1 inComponent:(long long)arg2 animated:(_Bool)arg3;
- (void)_setUsesCheckedSelection:(_Bool)arg1;
- (_Bool)_needsLayout;
- (struct CGSize)_contentSizeForRow:(long long)arg1 inComponent:(long long)arg2;
- (void)_performScrollTest:(id)arg1 withIterations:(long long)arg2 rowsToScroll:(long long)arg3 inComponent:(long long)arg4;
- (struct CGSize)_sizeThatFits:(struct CGSize)arg1;
- (long long)numberOfRowsInComponent:(long long)arg1;
- (_Bool)_soundsEnabled;
- (void)setSoundsEnabled:(_Bool)arg1;
- (long long)selectedRowInComponent:(long long)arg1;
- (id)tableViewForColumn:(long long)arg1;
- (id)viewForRow:(long long)arg1 forComponent:(long long)arg2;
- (id)pickerImageNamePrefix;
- (id)_orientationImageSuffix;
- (void)reloadAllPickerPieces;
- (double)scrollAnimationDuration;
- (void)_selectRow:(long long)arg1 inComponent:(long long)arg2 animated:(_Bool)arg3 notify:(_Bool)arg4;
- (void)reloadComponent:(long long)arg1;
- (struct CGRect)_effectiveTableViewFrameForColumn:(long long)arg1;
- (struct _NSRange)visibleRowsForColumn:(int)arg1;
- (double)_tableRowHeight;
- (void)_resetSelectionOfTables;
- (void)_sendSelectionChangedFromTable:(id)arg1 notify:(_Bool)arg2;
- (_Bool)_usesCheckSelection;
- (void)_sendCheckedRow:(long long)arg1 inTableView:(id)arg2 checked:(_Bool)arg3;
- (struct CATransform3D)_perspectiveTransform;
- (void)_willPlayClickSound;
- (_Bool)_usesCheckedSelection;
- (double)_rowHeightForDefaultFont;
- (_Bool)_isLandscapeOrientation;
- (void)_updateSelectedRows;
- (void)_setColumnView:(id)arg1 enabled:(_Bool)arg2;
- (long long)_delegateNumberOfComponents;
- (id)_selectionBarSuffix;
- (id)_popoverSuffix;
- (id)imageForPickerPiece:(long long)arg1;
- (long long)columnForTableView:(id)arg1;
- (double)_delegateRowHeightForComponent:(long long)arg1;
- (double)_delegateWidthForComponent:(long long)arg1 ofCount:(int)arg2 withSizeLeft:(double)arg3;
- (double)_wheelShift;
- (id)_createColumnWithTableFrame:(struct CGRect)arg1 rowHeight:(double)arg2;
- (struct CGRect)_selectionBarRectForHeight:(double)arg1;
- (void)_addMagnifierLinesForRowHeight:(double)arg1;
- (long long)_delegateNumberOfRowsInComponent:(long long)arg1;
- (void)_updateWithOldSize:(struct CGSize)arg1 newSize:(struct CGSize)arg2;
- (void)_noteScrollingFinishedForComponent:(long long)arg1;
- (void)_sendSelectionChangedForComponent:(long long)arg1 notify:(_Bool)arg2;
- (_Bool)_forceTextAlignmentCentered;
- (id)_delegateAttributedTitleForRow:(long long)arg1 forComponent:(long long)arg2;
- (id)_delegateTitleForRow:(long long)arg1 forComponent:(long long)arg2;
- (id)_scalarStatisticsForUserValueChangedEvent;
- (void)reloadDataForColumn:(int)arg1;
- (id)_createViewForPickerPiece:(long long)arg1;
- (id)createDividerWithFrame:(struct CGRect)arg1;
- (id)_createTableWithFrame:(struct CGRect)arg1 forComponent:(long long)arg2;
- (struct CGSize)rowSizeForComponent:(long long)arg1;
- (long long)numberOfRowsInColumn:(long long)arg1;
- (int)selectedRowForColumn:(int)arg1;
- (void)selectRow:(int)arg1 inColumn:(int)arg2 animated:(_Bool)arg3;
- (void)_iterateOnCurrentTest;
- (void)_completeCurrentTest;

@end
