/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class EDResources, EDWorkbook;

@protocol TCCancelDelegate;

__attribute__((visibility("hidden")))
@interface EBState : NSObject

{
    struct XlLinkTable *mXlLinkTable;
    struct XlNameTable *mXlNameTable;
    ChVector_cc6fdd32 *mSheetNames;
    struct XlFormulaProcessor *mXlFormulaProcessor;
    EDWorkbook *mWorkbook;
    EDResources *mResources;
    id <TCCancelDelegate> mCancelDelegate;
}

@property (nonatomic, readonly) id <TCCancelDelegate> cancelDelegate;

- (void)dealloc;
- (_Bool)isCancelled;
- (id)resources;
- (void)setResources:(id)arg1;
- (id)workbook;
- (id)initWithCancelDelegate:(id)arg1;
- (void)setWorkbook:(id)arg1;
- (struct XlFormulaProcessor *)xlFormulaProcessor;
- (struct XlLinkTable *)xlLinkTable;
- (struct XlNameTable *)xlNameTable;
- (ChVector_cc6fdd32 *)sheetNames;

@end
