/*
 Image: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
 */

#import <HealthUI/HKTableViewController.h>

@class HKSourceListDataSource, NSArray, UIImage, WDProfile;

__attribute__((visibility("hidden")))
@interface WDUninstalledAppSourcesViewController : HKTableViewController

{
    WDProfile *_profile;
    HKSourceListDataSource *_dataSource;
    NSArray *_uninstalledSources;
}

@property (copy, nonatomic) NSArray *uninstalledSources;
@property (readonly) UIImage *uninistalledAppImage;
@property (retain, nonatomic) WDProfile *profile;
@property (retain, nonatomic) HKSourceListDataSource *dataSource;

- (void)dealloc;
- (void)viewWillAppear:(_Bool)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)sourceListDataSourceDidUpdate:(id)arg1;
- (void)updateUninstalledSources;

@end
