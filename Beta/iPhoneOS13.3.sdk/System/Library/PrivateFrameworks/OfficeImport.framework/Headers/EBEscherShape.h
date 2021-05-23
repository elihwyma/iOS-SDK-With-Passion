/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/ESDObject.h>

@class CHDChart, NSData;

__attribute__((visibility("hidden")))
@interface EBEscherShape : ESDObject

{
    NSData *mChartData;
    _Bool mShowLegend;
    CHDChart *mChart;
}

- (id)chartData;
- (void)setChartData:(id)arg1;
- (void)setShowLegend:(_Bool)arg1;
- (_Bool)showLegend;
- (void)setChart:(id)arg1;
- (id)chart;

@end
