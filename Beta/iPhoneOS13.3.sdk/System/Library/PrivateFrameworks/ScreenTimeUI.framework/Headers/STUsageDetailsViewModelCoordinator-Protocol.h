/*
 Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

#import <ScreenTimeUI/Swift-Protocol.h>

@class NSArray, NSString, STUsageDetailsViewModel;

@protocol STUsageDetailsViewModelCoordinator <Swift>

@property (nonatomic, readonly) STUsageDetailsViewModel *viewModel;
@property (copy, nonatomic, readonly) NSArray *devices;
@property (copy, nonatomic) NSString *selectedDeviceIdentifier;
@property (readonly, getter=isRefreshing) _Bool refreshing;

- (unsigned short)startRefreshingUsageData;
- (unsigned short)stopRefreshingUsageData;
- (unsigned short)refreshUsageData;

@end
