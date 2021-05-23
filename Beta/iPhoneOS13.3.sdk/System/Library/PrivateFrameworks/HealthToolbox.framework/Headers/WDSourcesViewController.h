/*
 Image: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
 */

#import <HealthToolbox/WDHealthTableViewController.h>

@class HKSourceListDataSource, NSString;

@interface WDSourcesViewController : WDHealthTableViewController

{
    HKSourceListDataSource *_dataSource;
    NSString *_restorationSourceBundleIdentifier;
}

@property (copy, nonatomic) NSString *restorationSourceBundleIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)tableViewSectionClasses;

- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)arg1;
- (void)applicationWillEnterForeground;
- (void)applyChangeActivity:(id)arg1;
- (id)applyTransitionActivity:(id)arg1;
- (id)uniqueUserActivityType;
- (void)pushViewController:(id)arg1;
- (id)initWithProfile:(id)arg1 usingInsetStyling:(_Bool)arg2;
- (void)_updateActivityForViewDidAppear;

@end
