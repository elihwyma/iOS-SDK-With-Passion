/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface ECUtils : NSObject

+ (id)dateFromXlDateTimeNumber:(double)arg1 edWorkbook:(id)arg2;
+ (id)renameMap;
+ (double)timeIntervalFromXlDateTimeNumber:(double)arg1 edWorkbook:(id)arg2;
+ (unsigned int)dateTimeOffsetForBuggy1900Dates:(double)arg1 edWorkbook:(id)arg2;
+ (_Bool)isRenameFunction:(id)arg1;
+ (id)renameFunction:(id)arg1;
+ (id)lassoStyleTableReferenceFromTableId:(id)arg1;
+ (id)lassoDefaultTableName;
+ (_Bool)isValidDateTime:(double)arg1 edWorkbook:(id)arg2;
+ (_Bool)validDateInExcel:(id)arg1 edWorkbook:(id)arg2;
+ (double)dateTimeNumberFromNSDate:(id)arg1 edWorkbook:(id)arg2;

@end
