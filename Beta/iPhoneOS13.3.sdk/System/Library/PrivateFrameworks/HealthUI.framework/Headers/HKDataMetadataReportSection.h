/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <HealthUI/HKDataMetadataSection.h>

@class HKHealthStore, HKSample, NSString;

@interface HKDataMetadataReportSection : HKDataMetadataSection

{
    HKSample *_sample;
    NSString *_detailedReportName;
    HKHealthStore *_healthStore;
}

@property (nonatomic, readonly) HKSample *sample;
@property (nonatomic, readonly) NSString *detailedReportName;
@property (nonatomic, readonly) HKHealthStore *healthStore;

- (id)sectionTitle;
- (unsigned long long)numberOfRowsInSection;
- (id)cellForIndex:(unsigned long long)arg1 tableView:(id)arg2;
- (void)selectCellForIndex:(unsigned long long)arg1 navigationController:(id)arg2 animated:(_Bool)arg3;
- (id)initWithSample:(id)arg1 healthStore:(id)arg2;
- (id)documentImageForXMLFiles;

@end
