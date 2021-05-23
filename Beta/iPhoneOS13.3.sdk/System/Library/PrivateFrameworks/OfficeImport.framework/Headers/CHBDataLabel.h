/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface CHBDataLabel : NSObject

+ (id)chdDataLabelFromXlChartSeriesFormat:(const struct XlChartSeriesFormat *)arg1 state:(id)arg2;
+ (int)chdLabelPositionEnumFromXlLabelPosition:(int)arg1;
+ (int)xlLabelPositionEnumFromCHDDataLabelPosition:(int)arg1;
+ (id)chdDataLabelFromXlChartCustomLabelText:(struct XlChartCustomLabelText *)arg1 state:(id)arg2;

@end
