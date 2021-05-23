/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/CHAutoStyling.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CHXAutoStyling : CHAutoStyling

{
    _Bool __autoChartFillIsHollow;
    _Bool __autoChartStrokeIsHollow;
}

@property _Bool _autoChartFillIsHollow;
@property _Bool _autoChartStrokeIsHollow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)colorWithSchemeColorId:(int)arg1 transformType:(int)arg2 transformValue:(float)arg3;
+ (int)styleRowWithStyleId:(int)arg1;
+ (int)styleColumnWithStyleId:(int)arg1;
+ (id)colorWithSchemeColorId:(int)arg1 tint:(float)arg2;
+ (id)colorWithSchemeColorId:(int)arg1 shade:(float)arg2;
+ (int)styleIdWithStyleRow:(int)arg1 styleColumn:(int)arg2;

- (int)styleId;
- (id)autoStrokeForSeriesIndex:(unsigned long long)arg1;
- (void)resolveAxisGraphicProperties:(id)arg1;
- (void)resolveMinorGridLinesGraphicProperties:(id)arg1;
- (void)resolveMajorGridLinesGraphicProperties:(id)arg1;
- (void)resolveWallGraphicProperties:(id)arg1;
- (void)resolveFloorGraphicProperties:(id)arg1;
- (void)resolveGraphicPropertiesOfErrorBar:(id)arg1 forSeriesIndex:(unsigned long long)arg2;
- (void)resolveLegendGraphicProperties:(id)arg1;
- (void)resolvePlotAreaGraphicProperties:(id)arg1;
- (void)resolveGraphicPropertiesOfSeries:(id)arg1 forSeriesIndex:(unsigned long long)arg2;
- (int)styleColumn;
- (id)autoColorOfFirstColumnSeriesWithIndex:(unsigned long long)arg1 seriesCount:(unsigned long long)arg2;
- (id)autoChartAreaFillColor;
- (unsigned int)autoFloorAndChartAreaStrokeIndex;
- (id)autoChartAreaAndDataTableAndFloorStrokeColor;
- (unsigned int)autoFloorAndWallsFillIndex;
- (id)autoFloorAndWallsAndPlotArea2DFillColor;
- (id)autoAxisAndMajorGridColor;
- (id)autoMinorGridColor;
- (id)autoColorOfSeriesWithIndex:(unsigned long long)arg1;
- (int)styleRow;
- (void)setDefaultErrorBarPropertiesInGraphicProperties:(id)arg1;
- (id)autoOtherStrokeColor;
- (void)setAutoChartFillIsHollow:(_Bool)arg1;
- (void)setAutoChartStrokeIsHollow:(_Bool)arg1;
- (void)resolveChartAreaGraphicProperties:(id)arg1;
- (id)autoTextFill;
- (void)resolveGraphicPropertiesOfSeries:(id)arg1 forSeriesIndex:(unsigned long long)arg2 isLine:(_Bool)arg3;
- (void)resolveMarker:(id)arg1 withSeriesGraphicProperties:(id)arg2 forSeriesIndex:(unsigned long long)arg3 clientGraphicPropertyDefaults:(CDUnknownBlockType)arg4;
- (void)resolveGraphicPropertiesOfTrendline:(id)arg1 forSeriesIndex:(unsigned long long)arg2;

@end
