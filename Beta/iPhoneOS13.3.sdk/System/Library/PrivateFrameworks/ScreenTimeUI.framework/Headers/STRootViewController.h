/*
 Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

#import <ScreenTimeUI/STPINListViewController.h>

@class STEnableScreenTimeGroupSpecifierProvider, STScreenTimeGroupSpecifierProvider;

@interface STRootViewController : STPINListViewController

{
    _Bool _shouldRefreshUsageData;
    STEnableScreenTimeGroupSpecifierProvider *_enableScreenTimeGroupSpecifierProvider;
    STScreenTimeGroupSpecifierProvider *_screenTimeGroupSpecifierProvider;
}

@property (readonly) STEnableScreenTimeGroupSpecifierProvider *enableScreenTimeGroupSpecifierProvider;
@property (readonly) STScreenTimeGroupSpecifierProvider *screenTimeGroupSpecifierProvider;
@property (nonatomic) _Bool shouldRefreshUsageData;

- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)handleURL:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)initWithRootViewModelCoordinator:(id)arg1;

@end
