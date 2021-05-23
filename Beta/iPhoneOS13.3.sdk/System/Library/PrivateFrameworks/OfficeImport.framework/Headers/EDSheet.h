/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OCDDelayedNode.h>

@class EDColorReference, EDHeaderFooter, EDPageSetup, EDProcessors, EDString, EDWarnings, EDWorkbook, ESDContainer, NSMutableArray, OITSUPointerKeyDictionary;

__attribute__((visibility("hidden")))
@interface EDSheet : OCDDelayedNode

{
    EDString *mName;
    _Bool mHidden;
    _Bool mDisplayFormulas;
    _Bool mDisplayGridlines;
    _Bool mIsDialogSheet;
    EDColorReference *mDefaultGridlineColorReference;
    EDHeaderFooter *mHeaderFooter;
    EDPageSetup *mPageSetup;
    NSMutableArray *mDrawables;
    OITSUPointerKeyDictionary *mTextBoxMap;
    OITSUPointerKeyDictionary *mCommentMap;
    EDProcessors *mProcessors;
    EDWarnings *mWarnings;
    ESDContainer *mEscherDrawing;
    EDWorkbook *mWorkbook;
}

@property (nonatomic) _Bool isDialogSheet;
@property (weak, readonly) EDWorkbook *workbook;

+ (id)sheetWithWorkbook:(id)arg1;

- (void)dealloc;
- (id)description;
- (id)name;
- (void)setName:(id)arg1;
- (_Bool)isHidden;
- (void)teardown;
- (void)setHidden:(_Bool)arg1;
- (id)warnings;
- (void)setup;
- (unsigned long long)commentCount;
- (unsigned long long)drawableCount;
- (id)processors;
- (id)drawables;
- (id)drawableAtIndex:(unsigned long long)arg1;
- (_Bool)isDisplayGridlines;
- (void)addDrawable:(id)arg1;
- (void)applyProcessors;
- (id)initWithWorkbook:(id)arg1;
- (void)setDisplayFormulas:(_Bool)arg1;
- (void)setDisplayGridlines:(_Bool)arg1;
- (void)setDefaultGridlineColorReference:(id)arg1;
- (_Bool)isDisplayFormulas;
- (id)headerFooter;
- (void)doneWithNonRowContent;
- (id)defaultGridlineColor;
- (void)setDefaultGridlineColor:(id)arg1;
- (void)setHeaderFooter:(id)arg1;
- (id)pageSetup;
- (void)setPageSetup:(id)arg1;
- (void)removeDrawableAtIndex:(unsigned long long)arg1;
- (id)edTextBoxForShape:(id)arg1;
- (void)setEDTextBox:(id)arg1 forShape:(id)arg2;
- (id)edCommentForShape:(id)arg1;
- (void)setEDComment:(id)arg1 forShape:(id)arg2;
- (void)reduceMemoryIfPossible;
- (id)escherDrawing;
- (void)setEscherDrawing:(id)arg1;
- (id)defaultGridlineColorReference;
- (id)drawableEnumerator;

@end
