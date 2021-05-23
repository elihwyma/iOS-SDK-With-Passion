/*
 Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

#import <ScreenTimeUI/STPINListViewController.h>

@class STAllowanceProgressGroupSpecifierProvider, STCategoryDetailsGroupSpecifierProvider, STDrillInItemInfoGroupSpecifierProvider, STDrillInUsageGroupSpecifierProvider, STUsageItem;

__attribute__((visibility("hidden")))
@interface STDrillInDetailListController : STPINListViewController

{
    STUsageItem *_usageItem;
    STDrillInUsageGroupSpecifierProvider *_screenTimeGroupSpecifierProvider;
    STDrillInItemInfoGroupSpecifierProvider *_drillInItemInfoGroupSpecifierProvider;
    STCategoryDetailsGroupSpecifierProvider *_categoryDetailsGroupSpecifierProvider;
    STAllowanceProgressGroupSpecifierProvider *_allowanceProgressGroupSpecifierProvider;
}

@property (nonatomic, readonly) STUsageItem *usageItem;
@property (nonatomic, readonly) STDrillInUsageGroupSpecifierProvider *screenTimeGroupSpecifierProvider;
@property (nonatomic, readonly) STDrillInItemInfoGroupSpecifierProvider *drillInItemInfoGroupSpecifierProvider;
@property (nonatomic, readonly) STCategoryDetailsGroupSpecifierProvider *categoryDetailsGroupSpecifierProvider;
@property (nonatomic, readonly) STAllowanceProgressGroupSpecifierProvider *allowanceProgressGroupSpecifierProvider;

- (void)viewDidLoad;
- (_Bool)canBeShownFromSuspendedState;
- (void)_didFetchAppInfo:(id)arg1;
- (id)initWithUsageItem:(id)arg1 coordinator:(id)arg2;

@end
