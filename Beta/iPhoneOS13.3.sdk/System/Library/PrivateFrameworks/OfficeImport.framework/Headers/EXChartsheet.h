/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface EXChartsheet : NSObject

+ (id)edSheetWithState:(id)arg1;
+ (void)setupProcessors:(id)arg1;
+ (_Bool)readDistinctSheetElementsFrom:(struct _xmlTextReader *)arg1 state:(id)arg2;
+ (void)readOtherSheetComponentsWithState:(id)arg1;
+ (void)readTables:(id)arg1;

@end
