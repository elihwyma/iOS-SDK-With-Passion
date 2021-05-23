/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <Foundation/NSObject.h>

@interface HKDataMetadataSection : NSObject

- (id)sectionTitle;
- (id)sectionFooter;
- (unsigned long long)numberOfRowsInSection;
- (id)cellForIndex:(unsigned long long)arg1 tableView:(id)arg2;
- (void)willDisplayCell:(id)arg1 forIndex:(unsigned long long)arg2 tableView:(id)arg3;
- (void)selectCellForIndex:(unsigned long long)arg1 navigationController:(id)arg2 animated:(_Bool)arg3;

@end
