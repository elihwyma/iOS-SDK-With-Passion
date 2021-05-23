/*
 Image: /System/Library/PrivateFrameworks/HeartRhythmUI.framework/HeartRhythmUI
 */

#import <HealthUI/HKDataMetadataSection.h>

@interface HRElectrocardiogramEducationSection : HKDataMetadataSection

- (id)sectionTitle;
- (unsigned long long)numberOfRowsInSection;
- (id)cellForIndex:(unsigned long long)arg1 tableView:(id)arg2;
- (void)willDisplayCell:(id)arg1 forIndex:(unsigned long long)arg2 tableView:(id)arg3;
- (void)selectCellForIndex:(unsigned long long)arg1 navigationController:(id)arg2 animated:(_Bool)arg3;
- (id)_cellTitleForEducationRow:(unsigned long long)arg1;
- (id)_viewControllerForEducationRow:(unsigned long long)arg1;

@end
