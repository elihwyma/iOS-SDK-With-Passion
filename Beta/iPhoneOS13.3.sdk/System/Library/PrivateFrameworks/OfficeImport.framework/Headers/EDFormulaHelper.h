/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class ECMappingContext, EDWorkbook, EDWorksheet, NSString;

__attribute__((visibility("hidden")))
@interface EDFormulaHelper : NSObject

{
    EDWorkbook *mWorkbook;
    EDWorksheet *mWorksheet;
    int mRowNumber;
    int mColumnNumber;
    ECMappingContext *mMappingContext;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (int)columnNumber;
- (unsigned long long)resolveName:(id)arg1;
- (int)rowNumber;
- (id)workbook;
- (unsigned long long)createIndexWithType:(int)arg1 firstSheetIndex:(unsigned long long)arg2 lastSheetIndex:(unsigned long long)arg3;
- (unsigned long long)resolveSheet:(id)arg1;
- (unsigned long long)resolveFirstSheet:(id)arg1 lastSheet:(id)arg2;
- (unsigned long long)resolveFile:(id)arg1;
- (id)resolveTable:(id)arg1;
- (unsigned long long)resolveTableToSheetId:(id)arg1;
- (unsigned long long)resolveTableColumn:(id)arg1 columnName:(id)arg2;
- (_Bool)isCurrentSheet:(id)arg1;
- (int)resolveFunctionName:(id)arg1;
- (id)initWithWorkbook:(id)arg1 worksheet:(id)arg2 rowNumber:(int)arg3 columnNumber:(int)arg4;

@end
