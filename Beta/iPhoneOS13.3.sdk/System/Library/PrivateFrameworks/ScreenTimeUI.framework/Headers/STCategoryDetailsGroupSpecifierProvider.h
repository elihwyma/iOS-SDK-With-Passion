/*
 Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

#import <ScreenTimeUI/STGroupSpecifierProvider.h>

@class NSObject, STUsageDetailsViewModel;

@protocol STRootViewModelCoordinator;

__attribute__((visibility("hidden")))
@interface STCategoryDetailsGroupSpecifierProvider : STGroupSpecifierProvider

{
    STUsageDetailsViewModel *_usageDetailsViewModel;
    NSObject<STRootViewModelCoordinator> *_coordinator;
}

@property (nonatomic, readonly) STUsageDetailsViewModel *usageDetailsViewModel;
@property (nonatomic, readonly) NSObject<STRootViewModelCoordinator> *coordinator;

- (id)totalUsageDescription:(id)arg1;
- (void)showMostUsedDetailListController:(id)arg1;
- (id)initWithCategoryUsageItem:(id)arg1 coordinator:(id)arg2;

@end
