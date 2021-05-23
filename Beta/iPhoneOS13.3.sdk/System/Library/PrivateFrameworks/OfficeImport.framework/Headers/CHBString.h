/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface CHBString : NSObject

+ (id)nsStringWithHandlingMultilevelCategoryDataFromOCText:(const struct OcText *)arg1 chdFormula:(id)arg2 state:(id)arg3;
+ (unsigned long long)edFontIndexForXlChartTextFrame:(struct XlChartTextFrame *)arg1 state:(id)arg2;
+ (id)edRunsFromXlChartTextFrame:(const struct XlChartTextFrame *)arg1 state:(id)arg2;
+ (id)edStringFromXlChartTextFrame:(const struct XlChartTextFrame *)arg1 state:(id)arg2;

@end
