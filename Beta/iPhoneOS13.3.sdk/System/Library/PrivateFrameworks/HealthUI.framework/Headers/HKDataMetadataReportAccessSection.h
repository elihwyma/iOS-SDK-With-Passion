/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <HealthUI/HKDataMetadataSection.h>

@class UIViewController;

@interface HKDataMetadataReportAccessSection : HKDataMetadataSection

{
    UIViewController *_accessViewController;
}

@property (nonatomic, readonly) UIViewController *accessViewController;

- (unsigned long long)numberOfRowsInSection;
- (id)cellForIndex:(unsigned long long)arg1 tableView:(id)arg2;
- (void)selectCellForIndex:(unsigned long long)arg1 navigationController:(id)arg2 animated:(_Bool)arg3;
- (id)initWithSample:(id)arg1 healthStore:(id)arg2 delegate:(id)arg3;

@end
