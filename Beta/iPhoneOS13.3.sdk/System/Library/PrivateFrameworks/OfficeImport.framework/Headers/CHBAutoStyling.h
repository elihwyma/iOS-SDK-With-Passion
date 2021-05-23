/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/CHAutoStyling.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CHBAutoStyling : CHAutoStyling

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)autoFill;
- (id)fillWithColorIndex:(unsigned long long)arg1;
- (id)strokeWithColorIndex:(int)arg1;
- (id)autoStroke;
- (void)resolvedGraphicProperties:(id)arg1 autoFill:(id)arg2 autoStroke:(id)arg3 autoShadow:(_Bool)arg4 nullFill:(id)arg5 nullStroke:(id)arg6 nullShadow:(_Bool)arg7;
- (id)autoSeriesFill:(unsigned long long)arg1;
- (id)autoStrokeForSeriesIndex:(unsigned long long)arg1;
- (id)autoSeriesBorderStroke;
- (void)resolveAxisGraphicProperties:(id)arg1;
- (void)resolveMinorGridLinesGraphicProperties:(id)arg1;
- (void)resolveMajorGridLinesGraphicProperties:(id)arg1;
- (void)resolveWallGraphicProperties:(id)arg1;
- (void)resolveFloorGraphicProperties:(id)arg1;
- (void)resolveGraphicPropertiesOfErrorBar:(id)arg1 forSeriesIndex:(unsigned long long)arg2;
- (void)resolveLegendGraphicProperties:(id)arg1;
- (void)resolvePlotAreaGraphicProperties:(id)arg1;
- (void)resolveGraphicPropertiesOfSeries:(id)arg1 forSeriesIndex:(unsigned long long)arg2;
- (void)resolveChartAreaGraphicProperties:(id)arg1;
- (id)autoTextFill;
- (void)resolveGraphicPropertiesOfSeries:(id)arg1 forSeriesIndex:(unsigned long long)arg2 isLine:(_Bool)arg3;
- (void)resolveMarker:(id)arg1 withSeriesGraphicProperties:(id)arg2 forSeriesIndex:(unsigned long long)arg3 clientGraphicPropertyDefaults:(CDUnknownBlockType)arg4;
- (void)resolveGraphicPropertiesOfTrendline:(id)arg1 forSeriesIndex:(unsigned long long)arg2;

@end
