/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OCXReadState.h>

@class CXNamespace, ECColumnWidthConvertor, EDReference, EDResources, EDSheet, EDWorkbook, EXOAVState, EXOfficeArtState, NSMutableArray, NSMutableDictionary, OCPPackagePart;

@protocol TCCancelDelegate;

__attribute__((visibility("hidden")))
@interface EXReadState : OCXReadState

{
    unsigned int mCurrentSheetIndex;
    EDSheet *mCurrentSheet;
    unsigned long long mCellStyleXfsOffset;
    double mDefaultColumnWidth;
    double mDefaultRowHeight;
    OCPPackagePart *mCurrentPart;
    OCPPackagePart *mWorkbookPart;
    struct map<long, unsigned long, std::__1::less<long>, std::__1::allocator<std::__1::pair<const long, unsigned long>>> mSharedFormulasMap;
    NSMutableArray *mArrayedFormulas;
    EDReference *mSheetDimension;
    EXOfficeArtState *mOfficeArtState;
    EXOAVState *mOAVState;
    _Bool mMaxColumnsWarned;
    _Bool mMaxRowsWarned;
    _Bool mIsPredefinedTableStylesRead;
    NSMutableDictionary *mReferenceForCommentTextBox;
    _Bool mIsPredefinedDxfsBeingRead;
    struct _xmlNs *mRelationshipNS;
    ECColumnWidthConvertor *mColumnWidthConvertor;
    NSMutableArray *mLegacyDrawables;
    EDWorkbook *mWorkbook;
    EDResources *mResources;
    id <TCCancelDelegate> mCancelDelegate;
    CXNamespace *mEXSpreadsheetMLNamespace;
    CXNamespace *mEXSpreadsheetDrawingNamespace;
    CXNamespace *mEXSpreadsheetRelationsNamespace;
    unsigned int mCurrentRowMinColumnIndex;
    unsigned int mCurrentRowMaxColumnIndex;
}

@property (nonatomic, readonly) id <TCCancelDelegate> cancelDelegate;
@property (retain, nonatomic) CXNamespace *EXSpreadsheetMLNamespace;
@property (retain, nonatomic) CXNamespace *EXSpreadsheetDrawingNamespace;
@property (retain, nonatomic) CXNamespace *EXSpreadsheetRelationsNamespace;

- (_Bool)isCancelled;
- (id).cxx_construct;
- (id)resources;
- (void)setResources:(id)arg1;
- (id)currentPart;
- (double)defaultRowHeight;
- (void)setCurrentPart:(id)arg1;
- (id)currentSheet;
- (id)workbook;
- (id)columnWidthConvertor;
- (double)defaultColumnWidth;
- (void)setCurrentSheet:(id)arg1;
- (void)reportWarning:(id)arg1;
- (void)setupNSForXMLFormat:(int)arg1;
- (id)oavState;
- (id)officeArtState;
- (void)setWorkbook:(id)arg1;
- (void)setOfficeArtState:(id)arg1;
- (void)setCurrentSheetIndex:(unsigned int)arg1;
- (void)setDefaultColumnWidth:(double)arg1;
- (void)setDefaultRowHeight:(double)arg1;
- (void)resetForNewSheet;
- (_Bool)isPredefinedDxfsBeingRead;
- (id)initWithWorkbookPart:(id)arg1 cancelDelegate:(id)arg2;
- (unsigned int)currentSheetIndex;
- (unsigned int)currentRowMinColumnIndex;
- (void)setCurrentRowMinColumnIndex:(unsigned int)arg1;
- (unsigned int)currentRowMaxColumnIndex;
- (void)setCurrentRowMaxColumnIndex:(unsigned int)arg1;
- (unsigned long long)cellStyleXfsOffset;
- (void)setCellStyleXfsOffset:(unsigned long long)arg1;
- (id)workbookPart;
- (unsigned long long)sharedBaseFormulaIndexWithIndex:(long long)arg1;
- (void)addSharedBaseFormulaIndex:(unsigned long long)arg1 withIndex:(long long)arg2;
- (id)arrayedFormulas;
- (id)sheetDimension;
- (void)setSheetDimension:(id)arg1;
- (void)setTextBox:(id)arg1 author:(id)arg2 forReference:(id)arg3;
- (id)textBoxForReference:(id)arg1;
- (id)authorForReference:(id)arg1;
- (_Bool)isPredefinedTableStylesRead;
- (void)setPredefinedTableStylesRead:(_Bool)arg1;
- (void)setPredefinedDxfsBeingRead:(_Bool)arg1;
- (struct _xmlNs *)relationshipNameSpaceForWorkbook;
- (void)relationshipNameSpaceForWorkbook:(struct _xmlNs *)arg1;
- (id)legacyDrawables;
- (void)reportWorksheetWarning:(id)arg1;

@end
