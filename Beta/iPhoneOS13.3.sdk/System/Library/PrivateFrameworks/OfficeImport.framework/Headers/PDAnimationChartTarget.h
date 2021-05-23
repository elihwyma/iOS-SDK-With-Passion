/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/PDAnimationShapeTarget.h>

__attribute__((visibility("hidden")))
@interface PDAnimationChartTarget : PDAnimationShapeTarget

{
    _Bool mHasCatagoryIndex;
    int mCatagoryIndex;
    _Bool mHasSeriesIndex;
    int mSeriesIndex;
    _Bool mHasBuildStep;
    int mBuildStep;
    int mChartSubElementType;
}

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (int)seriesIndex;
- (void)setSeriesIndex:(int)arg1;
- (_Bool)hasSeriesIndex;
- (void)setChartSubElementType:(int)arg1;
- (int)chartSubElementType;
- (int)catagoryIndex;
- (int)buildStep;
- (_Bool)hasCatagoryIndex;
- (void)setCatagoryIndex:(int)arg1;
- (_Bool)hasBuildStep;
- (void)setBuildStep:(int)arg1;

@end
