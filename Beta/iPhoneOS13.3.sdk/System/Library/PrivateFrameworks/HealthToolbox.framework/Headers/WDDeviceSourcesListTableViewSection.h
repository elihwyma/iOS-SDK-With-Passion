/*
 Image: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
 */

#import <HealthToolbox/WDSourcesListTableViewSection.h>

@class NSArray, NSMutableSet;

@interface WDDeviceSourcesListTableViewSection : WDSourcesListTableViewSection

{
    NSArray *_list;
    NSArray *_sources;
    NSArray *_devices;
    NSMutableSet *_identifiers;
}

@property (copy, nonatomic) NSArray *list;
@property (copy, nonatomic) NSArray *sources;
@property (copy, nonatomic) NSArray *devices;
@property (retain, nonatomic) NSMutableSet *identifiers;

- (unsigned long long)numberOfRows;
- (void)applicationWillEnterForeground;
- (id)titleForHeader;
- (id)noneString;
- (id)titleForFooter;
- (id)cellForRow:(unsigned long long)arg1 table:(id)arg2;
- (id)willSelectRow:(id)arg1;
- (void)didSelectRow:(unsigned long long)arg1 representedByCell:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)setSourceListDataSource:(id)arg1;
- (void)_handleReturnedImage:(id)arg1 forSource:(id)arg2 cell:(id)arg3 tableView:(id)arg4 fetchError:(id)arg5;
- (id)_sourceCellForRow:(unsigned long long)arg1 tableView:(id)arg2;
- (void)dataSourceDidUpdate;
- (void)reloadDevices;
- (void)setSources:(id)arg1 devices:(id)arg2;
- (id)_sourceForRow:(long long)arg1;
- (_Bool)_isSourceSelectable:(id)arg1;

@end
