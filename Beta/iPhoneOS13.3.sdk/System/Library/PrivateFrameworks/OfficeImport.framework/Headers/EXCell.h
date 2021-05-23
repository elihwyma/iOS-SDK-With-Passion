/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface EXCell : NSObject

+ (int)edCellTypeFromXmlCellElement:(struct _xmlNode *)arg1 isDate:(_Bool *)arg2 isFmlaStr:(_Bool *)arg3 stringIndex:(_Bool *)arg4;
+ (_Bool)edBoolFromXmlBoolString:(id)arg1;
+ (double)dateTimeNumberFromXmlDateString:(id)arg1 state:(id)arg2;
+ (int)edErrorFromXmlErrorString:(id)arg1;
+ (id)xmlErrorStringValueEnumMap;
+ (void)edCellFromXmlCellElement:(struct _xmlNode *)arg1 edRowInfo:(struct EDRowInfo **)arg2 edRowBlock:(id)arg3 edRowBlocks:(id)arg4 state:(id)arg5;

@end
