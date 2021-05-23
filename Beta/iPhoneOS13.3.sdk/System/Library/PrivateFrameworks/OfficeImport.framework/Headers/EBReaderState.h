/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/EBState.h>

@class ECColumnWidthConvertor, OABReaderState;

__attribute__((visibility("hidden")))
@interface EBReaderState : EBState

{
    struct XlBinaryReader *mXlReader;
    struct XlSheetInfoTable *mXlSheetInfoTable;
    ECColumnWidthConvertor *mColumnWidthConvertor;
    struct XlEshObjectFactory *mXlEshObjectFactory;
    OABReaderState *mOAState;
    _Bool mImportCSV;
}

@property (nonatomic) _Bool importCSV;

- (void)dealloc;
- (id)columnWidthConvertor;
- (void)reportWarning:(id)arg1;
- (struct XlBinaryReader *)xlReader;
- (id)initWithXlReader:(struct XlBinaryReader *)arg1 cancelDelegate:(id)arg2;
- (void)pauseReading;
- (void)resumeReading;
- (void)readGlobalXlObjects;
- (struct XlSheetInfoTable *)xlSheetInfoTable;
- (id)oaState;

@end
