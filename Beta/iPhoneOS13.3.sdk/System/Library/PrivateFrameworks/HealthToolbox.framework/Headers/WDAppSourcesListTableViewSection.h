/*
 Image: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
 */

#import <HealthToolbox/WDSourcesListTableViewSection.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface WDAppSourcesListTableViewSection : WDSourcesListTableViewSection

{
    _Bool _uninstalledSourcesExist;
    NSArray *_installedSources;
}

@property (copy, nonatomic) NSArray *installedSources;
@property (nonatomic) _Bool uninstalledSourcesExist;

- (unsigned long long)numberOfRows;
- (id)titleForHeader;
- (id)noneString;
- (id)titleForFooter;
- (id)cellForRow:(unsigned long long)arg1 table:(id)arg2;
- (void)didSelectRow:(unsigned long long)arg1 representedByCell:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (id)_sourceCellForRow:(unsigned long long)arg1 tableView:(id)arg2;
- (void)dataSourceDidUpdate;
- (id)_uninstalledSourcesCellWithTableView:(id)arg1;

@end
