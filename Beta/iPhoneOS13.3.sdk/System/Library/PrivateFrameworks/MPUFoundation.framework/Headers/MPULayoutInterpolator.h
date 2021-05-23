/*
 Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
 */

#import <Foundation/NSObject.h>

@interface MPULayoutInterpolator : NSObject

{
    struct vector<MPU::LayoutInterpolator::EntriesContainer, std::__1::allocator<MPU::LayoutInterpolator::EntriesContainer>> _entriesContainers;
    _Bool _hasEntryWithSpecificSecondaryReferenceMetric;
}

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id).cxx_construct;
- (void)addValue:(double)arg1 forReferenceMetric:(double)arg2 secondaryReferenceMetric:(double)arg3;
- (double)valueForReferenceMetric:(double)arg1 secondaryReferenceMetric:(double)arg2;
- (void)addValue:(double)arg1 forReferenceMetric:(double)arg2;
- (double)_interpolatedValueForPrimaryReferenceMetric:(double)arg1 secondaryReferenceMetric:(double)arg2 betweenFirstEntriesContainer:(struct EntriesContainer *)arg3 andSecondEntriesContainer:(struct EntriesContainer *)arg4;
- (double)valueForReferenceMetric:(double)arg1;
- (vector_c97e033f)_sortedPointsFor3DInterpolationFromEntriesContainer:(struct EntriesContainer *)arg1 usingQueriedPoint:(struct Point3D)arg2 fallbackSecondaryReferenceMetric:(double)arg3;
- (void)_sortPointsFor3DInterpolation:(vector_c97e033f *)arg1 usingQueriedPoint:(struct Point3D)arg2;
- (struct Point3D)_pointForEntry:(struct Entry)arg1 andPrimaryReferenceMetric:(double)arg2 usingFallbackSecondaryReferenceMetric:(double)arg3;

@end
