/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface CHBMarker : NSObject

+ (id)readFrom:(const struct XlChartSeriesFormat *)arg1 state:(id)arg2;
+ (int)chdMarkerStyleFromXlMarkerType:(int)arg1;
+ (int)xlMarkerStyleFromCHDMarkerType:(int)arg1;

@end
