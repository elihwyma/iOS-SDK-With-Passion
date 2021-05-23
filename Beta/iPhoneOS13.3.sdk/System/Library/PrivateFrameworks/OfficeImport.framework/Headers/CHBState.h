/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class CHDChart;

__attribute__((visibility("hidden")))
@interface CHBState : NSObject

{
    CHDChart *mChart;
    struct __CFArray *mXlChartDataSeriesCollection;
    int mXlSeriesCount;
    int mXlCurrentSeriesIndex;
    _Bool mHasPrimaryMixedArea;
    _Bool mHasPrimaryMixedColumn;
    _Bool mHasPrimaryMixedLine;
    _Bool mHasSecondaryMixedArea;
    _Bool mHasSecondaryMixedColumn;
    _Bool mHasSecondaryMixedLine;
}

- (id)init;
- (void)dealloc;
- (id)resources;
- (id)workbook;
- (void)setChart:(id)arg1;
- (id)chart;
- (void)deleteXlChartDataSeriesCollection;
- (struct XlChartDataSeries *)xlChartDataSeriesAtIndex:(int)arg1;
- (void)readAndCacheXlChartDataSeries;
- (_Bool)hasPrimaryMixedArea;
- (_Bool)hasSecondaryMixedArea;
- (_Bool)hasPrimaryMixedColumn;
- (_Bool)hasSecondaryMixedColumn;
- (_Bool)hasPrimaryMixedLine;
- (void)setXlCurrentSeriesIndex:(int)arg1;
- (struct XlChartDataSeries *)xlCurrentChartDataSeries;
- (int)xlCurrentChartDataSeriesIndex;
- (int)xlSeriesCount;
- (void)setHasPrimaryMixedArea:(_Bool)arg1;
- (void)setHasPrimaryMixedColumn:(_Bool)arg1;
- (void)setHasPrimaryMixedLine:(_Bool)arg1;
- (void)setHasSecondaryMixedArea:(_Bool)arg1;
- (void)setHasSecondaryMixedColumn:(_Bool)arg1;
- (_Bool)hasSecondaryMixedLine;
- (void)setHasSecondaryMixedLine:(_Bool)arg1;
- (_Bool)isMixedChart;
- (unsigned int)chartGroupIndexForType:(int)arg1 isForPrimary:(_Bool)arg2;

@end
