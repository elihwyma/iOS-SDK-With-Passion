/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <Foundation/NSObject.h>

@interface NSObject (HKDataMetadataSampleExtensions)

- (_Bool)hasAssociatedReport;
- (void)fetchDetailedReportWithHealthStore:(id)arg1 reportDataBlock:(CDUnknownBlockType)arg2;
- (id)hk_defaultDistanceQuantityType;
- (id)hk_localizedStringForAssociatedDistanceQuantity:(id)arg1 displayTypeController:(id)arg2 unitController:(id)arg3;
- (id)hk_midPointToValue:(id)arg1 percentage:(double)arg2;
- (_Bool)hk_animatable;

@end
