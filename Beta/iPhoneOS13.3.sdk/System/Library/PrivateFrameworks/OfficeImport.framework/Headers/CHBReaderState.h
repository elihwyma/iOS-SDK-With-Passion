/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/CHBState.h>

@class EBReaderSheetState, OADColorScheme;

@protocol CHAutoStyling;

__attribute__((visibility("hidden")))
@interface CHBReaderState : CHBState

{
    EBReaderSheetState *mEBReaderSheetState;
    struct XlChartBinaryReader *mXlReader;
    id <CHAutoStyling> mAutoStyling;
    int mAxisGroup;
    struct XlChartPlot *mXlCurrentPlot;
    int mXlCurrentPlotIndex;
}

@property (nonatomic, readonly) OADColorScheme *colorScheme;

- (id)resources;
- (id)workbook;
- (void)setChart:(id)arg1;
- (struct XlChartPlot *)xlCurrentPlot;
- (int)axisGroup;
- (struct XlChartBinaryReader *)xlReader;
- (id)autoStyling;
- (const struct XlChartSeriesFormat *)xlCurrentDefaultSeriesFormat;
- (id)ebReaderSheetState;
- (void)setAxisGroup:(int)arg1;
- (int)xlPlotCount;
- (void)setXlCurrentPlotIndex:(int)arg1;
- (void)setXlCurrentPlot:(struct XlChartPlot *)arg1;
- (id)initWithEBReaderSheetState:(id)arg1;
- (const struct XlChartSeriesFormat *)defaultFormatForXlSeries:(const struct XlChartDataSeries *)arg1;
- (void)readAndCacheXlChartDataSeries;
- (int)xlCurrentPlotIndex;

@end
