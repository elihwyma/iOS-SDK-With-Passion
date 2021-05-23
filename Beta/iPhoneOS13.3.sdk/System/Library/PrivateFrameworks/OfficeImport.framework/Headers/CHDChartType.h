/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class CHDChart, CHDDataLabel, CHDSeriesCollection, EDCollection;

__attribute__((visibility("hidden")))
@interface CHDChartType : NSObject

{
    CHDChart *mChart;
    EDCollection *mAxisIds;
    CHDSeriesCollection *mSeries;
    CHDDataLabel *mDefaultDataLabel;
    _Bool mVaryColors;
}

+ (id)chartTypeWithChart:(id)arg1;
+ (_Bool)is3DType;

- (id)description;
- (id)axes;
- (_Bool)isHorizontal;
- (unsigned long long)categoryCount;
- (id)contentFormat;
- (id)seriesCollection;
- (id)defaultDataLabel;
- (id)chart;
- (id)initWithChart:(id)arg1;
- (int)defaultLabelPosition;
- (_Bool)isPlotedOnSecondaryAxis;
- (void)switchAxes:(id)arg1;
- (unsigned long long)seriesCount;
- (void)setDefaultDataLabel:(id)arg1;
- (void)setSeriesCollection:(id)arg1;
- (_Bool)isVaryColors;
- (void)setVaryColors:(_Bool)arg1;
- (id)defaultTitleWithResources:(id)arg1;
- (id)axisIds;
- (id)axisForClass:(Class)arg1;

@end
