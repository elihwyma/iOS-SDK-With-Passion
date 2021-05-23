/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface CHBSeries : NSObject

+ (id)readFrom:(struct XlChartDataSeries *)arg1 state:(id)arg2;
+ (id)chdSeriesWithState:(id)arg1;
+ (Class)chdSeriesClassWithState:(id)arg1;
+ (void)readXlChartSeriesFormat:(struct XlChartDataSeries *)arg1 chdSeries:(id)arg2 state:(id)arg3;
+ (void)resolveSeriesStyle:(id)arg1 state:(id)arg2;

@end
