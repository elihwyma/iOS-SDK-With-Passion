/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface CHBErrorBar : NSObject

+ (void)readFrom:(struct XlChartErrorBar *)arg1 toSeries:(id)arg2 state:(id)arg3;
+ (int)edErrorBarDirectionFrom:(int)arg1;
+ (int)edErrorBarTypeFrom:(int)arg1;
+ (id)readErrorBarGraphicProperties:(const struct XlChartSeriesFormat *)arg1 forStyleIndex:(unsigned long long)arg2 state:(id)arg3;
+ (int)xlErrorBarTypeFrom:(int)arg1 direction:(int)arg2;
+ (int)xlErrorBarSourceFrom:(int)arg1;

@end
