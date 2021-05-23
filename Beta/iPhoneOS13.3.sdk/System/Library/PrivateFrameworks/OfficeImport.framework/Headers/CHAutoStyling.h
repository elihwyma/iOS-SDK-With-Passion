/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class CHDChart, OADDrawingTheme;

__attribute__((visibility("hidden")))
@interface CHAutoStyling : NSObject

{
    CHDChart *mChart;
    OADDrawingTheme *mDrawingTheme;
}

+ (id)autoStylingWithChart:(id)arg1 drawingTheme:(id)arg2;

- (id)drawingTheme;
- (id)initWithChart:(id)arg1 drawingTheme:(id)arg2;
- (int)defaultMarkerStyleForSeriesIndex:(unsigned long long)arg1;
- (void)replaceStrokeAndFillInEmptyMarker:(id)arg1 withSeriesGraphicProperties:(id)arg2;

@end
