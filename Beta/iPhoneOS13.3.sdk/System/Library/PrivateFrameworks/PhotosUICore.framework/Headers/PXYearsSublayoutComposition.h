/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXGGeneratedSublayoutComposition.h>

@class PXYearsLayoutGenerator, PXYearsLayoutMetrics;

@interface PXYearsSublayoutComposition : PXGGeneratedSublayoutComposition

{
    PXYearsLayoutGenerator *_layoutGenerator;
    PXYearsLayoutMetrics *_metrics;
}

@property (copy, nonatomic) PXYearsLayoutMetrics *metrics;
@property (nonatomic, readonly) long long presentedNumberOfColumns;

- (id)configuredLayoutGenerator;

@end
