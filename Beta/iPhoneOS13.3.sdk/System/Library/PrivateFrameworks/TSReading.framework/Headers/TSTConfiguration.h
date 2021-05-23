/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

@interface TSTConfiguration : NSObject

{
    _Bool mSupportsContainedTextEditing;
    _Bool mSupportsResumingTextEditing;
    _Bool mBeginEditingOnSingleTap;
    _Bool mSupportsMergedCells;
    _Bool mSupportsHiddenCells;
    _Bool mReturnWhileEditingNavigates;
    _Bool mTabWhileEditingNavigates;
    _Bool mArrowKeyAtEdgeWhileEditingNavigates;
    _Bool mArrowKeysWrap;
    _Bool mArrowKeysNavigateWhenEditingBeganByTyping;
    _Bool mBackTabWraps;
    _Bool mTabAtEdgeAddsRow;
    _Bool mTabAtEdgeAddsColumn;
    _Bool mPastesTile;
    _Bool mAllowHorizontalAutoresize;
    _Bool mSelectsCellOnInitialTap;
    _Bool mDragByHandleOnly;
    _Bool mCornersCanDragResize;
    _Bool mSupportsControlCells;
    _Bool mHasLargerFonts;
    _Bool mSupportsFrozenHeaders;
    _Bool mSupportsAutoResizedTables;
    _Bool mSupportsCreateChartFromSelection;
    _Bool mShowsAddressBarAlways;
    _Bool mShowsAddressBarHighlights;
    _Bool mShowsAddressBarLetteringAndNumbering;
    _Bool mSelectionUsesBezierPath;
    _Bool mUsesWholeChromeResizer;
    _Bool mSupportsCanvasReferenceEditing;
    _Bool mUsesLimitedAutomaticFormatParsing;
    _Bool mSupportsFormulaEditing;
    _Bool mSupportsImplicitEditing;
    _Bool mFormulaEqualsTokenIsSelectable;
    _Bool mAllowFreeformFormulaText;
    _Bool mAllowWhitespaceInFormulas;
    _Bool mRequireMatchedFunctionTokens;
    _Bool mShowsHideUnhideUI;
    _Bool mExportPermanentHidingState;
    _Bool mShowsCellOverflowIndicator;
    _Bool mSupportsAutofill;
    _Bool mUsesLimitedNumberFormatInspector;
    _Bool mHeadersFrozenByDefault;
    _Bool mCreateLargeDefaultTables;
    _Bool mTableNameEnabledInNewTables;
    _Bool mSupportsRowColumnAdderKnob;
    _Bool mSupportsDragDropMoveMode;
    _Bool mExportsCellComments;
    _Bool mExportsCellAnnotations;
    _Bool mSupportsRepeatHeaderRowsOnEachPage;
    _Bool _formulaEditorEvaluatesFormulas;
    _Bool _showReferenceHighlightsOnFormulaCellSelection;
    _Bool _tokenizeFormulaStringLiterals;
    _Bool _cellEditorsCanScrollToNonLocalTableSelection;
    _Bool _formulaCellEditorSupportsTextTokenEditor;
    _Bool _disableImplicitNaming;
    _Bool _supportsComplexFilterUI;
    _Bool _supportsQuickFilterUI;
    _Bool _pasteFilterHidingAsUserHiding;
    _Bool _allowsFullyFilteredTables;
    unsigned int mMaxNumberOfRows;
    unsigned int mMaxNumberOfColumns;
    unsigned int mMaxNumberOfPopulatedCells;
}

@property (nonatomic) unsigned int maxNumberOfRows;
@property (nonatomic) unsigned int maxNumberOfColumns;
@property (nonatomic) unsigned int maxNumberOfPopulatedCells;
@property (nonatomic) _Bool supportsContainedTextEditing;
@property (nonatomic) _Bool supportsResumingTextEditing;
@property (nonatomic) _Bool beginEditingOnSingleTap;
@property (nonatomic) _Bool supportsMergedCells;
@property (nonatomic) _Bool supportsHiddenCells;
@property (nonatomic) _Bool returnWhileEditingNavigates;
@property (nonatomic) _Bool tabWhileEditingNavigates;
@property (nonatomic) _Bool arrowKeyAtEdgeWhileEditingNavigates;
@property (nonatomic) _Bool arrowKeysWrap;
@property (nonatomic) _Bool arrowKeysNavigateWhenEditingBeganByTyping;
@property (nonatomic) _Bool backTabWraps;
@property (nonatomic) _Bool tabAtEdgeAddsRow;
@property (nonatomic) _Bool tabAtEdgeAddsColumn;
@property (nonatomic) _Bool pastesTile;
@property (nonatomic) _Bool allowHorizontalAutoresize;
@property (nonatomic) _Bool selectsCellOnInitialTap;
@property (nonatomic) _Bool dragByHandleOnly;
@property (nonatomic) _Bool cornersCanDragResize;
@property (nonatomic) _Bool supportsControlCells;
@property (nonatomic) _Bool hasLargerFonts;
@property (nonatomic) _Bool supportsFrozenHeaders;
@property (nonatomic) _Bool supportsAutoResizedTables;
@property (nonatomic) _Bool supportsCreateChartFromSelection;
@property (nonatomic) _Bool showsAddressBarAlways;
@property (nonatomic) _Bool showsAddressBarHighlights;
@property (nonatomic) _Bool showsAddressBarLetteringAndNumbering;
@property (nonatomic) _Bool selectionUsesBezierPath;
@property (nonatomic) _Bool usesWholeChromeResizer;
@property (nonatomic) _Bool supportsCanvasReferenceEditing;
@property (nonatomic) _Bool usesLimitedAutomaticFormatParsing;
@property (nonatomic) _Bool supportsFormulaEditing;
@property (nonatomic) _Bool supportsImplicitEditing;
@property (nonatomic) _Bool formulaEqualsTokenIsSelectable;
@property (nonatomic) _Bool allowFreeformFormulaText;
@property (nonatomic) _Bool allowWhitespaceInFormulas;
@property (nonatomic) _Bool requireMatchedFunctionTokens;
@property (nonatomic) _Bool showsHideUnhideUI;
@property (nonatomic) _Bool exportPermanentHidingState;
@property (nonatomic) _Bool showsCellOverflowIndicator;
@property (nonatomic) _Bool supportsAutofill;
@property (nonatomic) _Bool usesLimitedNumberFormatInspector;
@property (nonatomic) _Bool headersFrozenByDefault;
@property (nonatomic) _Bool createLargeDefaultTables;
@property (nonatomic) _Bool tableNameEnabledInNewTables;
@property (nonatomic) _Bool supportsRowColumnAdderKnob;
@property (nonatomic) _Bool supportsDragDropMoveMode;
@property (nonatomic) _Bool formulaEditorEvaluatesFormulas;
@property (nonatomic) _Bool showReferenceHighlightsOnFormulaCellSelection;
@property (nonatomic) _Bool tokenizeFormulaStringLiterals;
@property (nonatomic) _Bool exportsCellComments;
@property (nonatomic) _Bool exportsCellAnnotations;
@property (nonatomic) _Bool cellEditorsCanScrollToNonLocalTableSelection;
@property (nonatomic) _Bool formulaCellEditorSupportsTextTokenEditor;
@property (nonatomic) _Bool supportsRepeatHeaderRowsOnEachPage;
@property (nonatomic) _Bool disableImplicitNaming;
@property (nonatomic) _Bool supportsComplexFilterUI;
@property (nonatomic) _Bool supportsQuickFilterUI;
@property (nonatomic) _Bool pasteFilterHidingAsUserHiding;
@property (nonatomic) _Bool allowsFullyFilteredTables;

+ (id)sharedTableConfiguration;
+ (void)resetSharedTableConfiguration;

- (id)init;

@end
