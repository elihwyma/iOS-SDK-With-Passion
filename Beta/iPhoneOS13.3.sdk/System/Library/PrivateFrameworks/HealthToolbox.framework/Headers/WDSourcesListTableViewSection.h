/*
 Image: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
 */

#import <HealthToolbox/WDTableViewSection.h>

@class HKSourceListDataSource, NSString;

@interface WDSourcesListTableViewSection : WDTableViewSection

{
    HKSourceListDataSource *_dataSource;
    NSString *_restorationSourceBundleIdentifier;
}

@property (retain, nonatomic) HKSourceListDataSource *dataSource;
@property (copy, nonatomic) NSString *restorationSourceBundleIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (double)estimatedHeightForRow:(unsigned long long)arg1;
- (double)heightForRow:(unsigned long long)arg1;
- (id)noneString;
- (void)sourceListDataSourceDidUpdate:(id)arg1;
- (void)setSourceListDataSource:(id)arg1;
- (id)detailViewControllerForSourceModel:(id)arg1;
- (id)noneCellForTableView:(id)arg1;
- (void)dataSourceDidUpdate;

@end
