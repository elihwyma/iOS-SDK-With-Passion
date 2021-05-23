/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <HealthKit/HKCDADocumentSample.h>

@interface HKCDADocumentSample (HKDataMetadataViewController)

- (_Bool)hasAssociatedReport;
- (id)dataForSharingWithHealthStore:(id)arg1;
- (id)detailedReportName;
- (void)fetchDetailedReportWithHealthStore:(id)arg1 reportDataBlock:(CDUnknownBlockType)arg2;
- (void)addDetailValuesToSection:(id)arg1;

@end
