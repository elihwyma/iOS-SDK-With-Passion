/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface CHBTrendLine : NSObject

+ (void)readFrom:(struct XlChartTrendLine *)arg1 toSeries:(id)arg2 state:(id)arg3;
+ (int)edTrendLineTypeFrom:(int)arg1 order:(int)arg2;
+ (id)readTrendlineGraphicProperties:(const struct XlChartSeriesFormat *)arg1 forStyleIndex:(unsigned long long)arg2 state:(id)arg3;
+ (int)xlTrendLineRegressionTypeFrom:(int)arg1;

@end
