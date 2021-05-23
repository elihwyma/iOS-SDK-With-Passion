/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/CHDChartTypeWithGrouping.h>

__attribute__((visibility("hidden")))
@interface CHDBar2DType : CHDChartTypeWithGrouping

{
    int mGapWidth;
    _Bool mColumn;
    int mOverlap;
}

- (_Bool)isHorizontal;
- (_Bool)isColumn;
- (void)setOverlap:(int)arg1;
- (int)overlap;
- (void)setColumn:(_Bool)arg1;
- (id)initWithChart:(id)arg1;
- (void)setGapWidth:(int)arg1;
- (int)gapWidth;
- (int)defaultLabelPosition;

@end
