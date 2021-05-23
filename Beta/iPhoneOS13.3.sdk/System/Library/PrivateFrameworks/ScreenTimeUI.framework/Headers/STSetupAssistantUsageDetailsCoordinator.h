/*
 Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString, STUsageDetailsViewModel;

__attribute__((visibility("hidden")))
@interface STSetupAssistantUsageDetailsCoordinator : NSObject

{
    _Bool _refreshing;
    NSArray *_devices;
    NSString *_selectedDeviceIdentifier;
    STUsageDetailsViewModel *_viewModel;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) STUsageDetailsViewModel *viewModel;
@property (copy, nonatomic, readonly) NSArray *devices;
@property (copy, nonatomic) NSString *selectedDeviceIdentifier;
@property (readonly, getter=isRefreshing) _Bool refreshing;

- (id)init;
- (void)startRefreshingUsageData;
- (void)stopRefreshingUsageData;
- (void)refreshUsageData;
- (id)_introUsageItemsWithStartDate:(id)arg1;
- (id)appConfigByIdentifier;
- (id)categoryConfigByIdentifier;

@end
