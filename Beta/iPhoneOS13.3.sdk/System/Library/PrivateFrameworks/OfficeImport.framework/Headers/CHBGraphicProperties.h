/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface CHBGraphicProperties : NSObject

+ (id)oadStrokeFrom:(const struct XlChartLineStyle *)arg1;
+ (id)oadGraphicPropertiesFromState:(id)arg1 xlLineStyle:(const struct XlChartLineStyle *)arg2 xlFillStyle:(const struct XlChartFillStyle *)arg3;
+ (id)oadGraphicPropertiesFromShapePropsStream:(const char *)arg1 size:(unsigned int)arg2;
+ (id)oadGraphicPropertiesFromXlChartSeriesFormat:(const struct XlChartSeriesFormat *)arg1 state:(id)arg2;
+ (id)mapFillStyle:(const struct XlChartFillStyle *)arg1 xlPictureFormat:(const struct XlChartPicF *)arg2 state:(id)arg3;
+ (float)widthFromLineWeightEnum:(int)arg1;
+ (id)mapPresetDashFromPattern:(int)arg1;
+ (id)mapFillStyleForMarker:(const struct XlChartMarkerStyle *)arg1 complex:(_Bool)arg2 state:(id)arg3;
+ (id)oadGraphicPropertiesFromXlLeaderLineStyleInPlot:(const struct XlChartPlot *)arg1 state:(id)arg2;
+ (BOOL)oaPresetDashTypeFromLinePatternEnum:(int)arg1;
+ (id)mapAssociatedEscherObjectstate:(id)arg1;
+ (int)presetLinePatternEnumFromDash:(id)arg1;
+ (int)lineWeightEnumFromWidth:(float)arg1;
+ (id)oadGraphicPropertiesFromXlChartTextFrame:(struct XlChartTextFrame *)arg1 state:(id)arg2;
+ (id)oadGraphicPropertiesFromXlMarkerStyle:(const struct XlChartMarkerStyle *)arg1 complex:(_Bool)arg2 state:(id)arg3;
+ (id)oadGraphicPropertiesFromXlChartFrameType:(struct XlChartFrameType *)arg1 state:(id)arg2;

@end
