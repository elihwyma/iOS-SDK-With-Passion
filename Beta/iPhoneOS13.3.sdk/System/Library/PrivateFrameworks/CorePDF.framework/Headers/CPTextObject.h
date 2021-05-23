/*
 Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import <CorePDF/CPChunk.h>

__attribute__((visibility("hidden")))
@interface CPTextObject : CPChunk

{
    struct CGPoint anchor;
    _Bool metricInfoCalculated;
    float maxFontSize;
    double maxFontLineHeight;
}

- (float)maxFontSize;
- (void)translateObjectYBy:(double)arg1;
- (void)clearCachedInfo;
- (double)maxFontLineHeight;
- (void)calculateMetrics;

@end
