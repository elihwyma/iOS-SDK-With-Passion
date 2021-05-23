/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXGGeneratedSublayoutComposition.h>

@class NSIndexSet, PXMonthsLayoutGenerator, PXMonthsLayoutMetrics;

@interface PXMonthsSublayoutComposition : PXGGeneratedSublayoutComposition

{
    NSIndexSet *_indexesOfChapterHeaders;
    NSIndexSet *_indexesOfHeroes;
    PXMonthsLayoutGenerator *_layoutGenerator;
    PXMonthsLayoutMetrics *_metrics;
}

@property (copy, nonatomic) PXMonthsLayoutMetrics *metrics;
@property (nonatomic, readonly) _Bool presentedSingleColumn;

- (id)configuredLayoutGenerator;
- (void)updateSublayoutAttributes;

@end
