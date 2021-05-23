/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface CHBAxis : NSObject

+ (Class)chbAxisClassWith:(struct XlChartPlotAxis *)arg1 plotAxis:(int)arg2;
+ (int)chbAxisIdForPlotAxis:(int)arg1 state:(id)arg2;
+ (int)chdAxisPositionFromAxisType:(int)arg1;
+ (id)readWithXlPlotAxis:(int)arg1 state:(id)arg2;
+ (Class)chbAxisClassWith:(id)arg1;
+ (int)xlPlotAxisTypeFrom:(int)arg1;

@end
