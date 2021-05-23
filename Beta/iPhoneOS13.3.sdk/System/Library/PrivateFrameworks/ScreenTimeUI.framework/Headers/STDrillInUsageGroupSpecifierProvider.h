/*
 Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

#import <ScreenTimeUI/STGroupSpecifierProvider.h>

@class NSObject, STUsageItem;

@protocol STRootViewModelCoordinator;

__attribute__((visibility("hidden")))
@interface STDrillInUsageGroupSpecifierProvider : STGroupSpecifierProvider

{
    STUsageItem *_usageItem;
    NSObject<STRootViewModelCoordinator> *_coordinator;
    unsigned long long _numberOfNotifications;
}

@property (nonatomic, readonly) STUsageItem *usageItem;
@property (nonatomic, readonly) NSObject<STRootViewModelCoordinator> *coordinator;
@property (nonatomic, readonly) unsigned long long numberOfNotifications;

- (id)initWithUsageItem:(id)arg1 coordinator:(id)arg2;
- (id)selectedUsageReport:(id)arg1;
- (id)weeklyPickupTotal:(id)arg1;
- (id)dailyAverage:(id)arg1;
- (id)notifications:(id)arg1;

@end
