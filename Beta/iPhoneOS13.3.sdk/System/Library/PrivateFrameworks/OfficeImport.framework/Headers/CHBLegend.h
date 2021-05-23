/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface CHBLegend : NSObject

+ (id)readFrom:(struct XlChartLegendFrame *)arg1 state:(id)arg2;
+ (int)chdLegendPositionEnumFromXlLegendPosition:(int)arg1;
+ (id)readCHDLegendEntryFrom:(const struct XlChartCustomLegend *)arg1 state:(id)arg2;
+ (int)xlLegendPositionEnumFromCHDLegendPosition:(int)arg1;

@end
