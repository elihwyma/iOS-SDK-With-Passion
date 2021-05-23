/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/CMMapper.h>

__attribute__((visibility("hidden")))
@interface EMSeriesMapper : CMMapper

- (id)values;
- (float)offset;
- (struct CGColor *)fillColor;
- (struct CGColor *)strokeColor;
- (float)strokeWidth;
- (unsigned int)markerType;
- (struct CGColor *)markerColor;
- (float)markerWidth;
- (unsigned int)chartType;
- (_Bool)useSecondaryAxis;

@end
