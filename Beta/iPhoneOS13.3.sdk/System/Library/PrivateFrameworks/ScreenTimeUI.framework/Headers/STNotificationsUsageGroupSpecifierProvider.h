/*
 Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

#import <ScreenTimeUI/STShowMoreUsageGroupSpecifierProvider.h>

@class BBSettingsGateway, NSMutableDictionary, NSObject;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface STNotificationsUsageGroupSpecifierProvider : STShowMoreUsageGroupSpecifierProvider

{
    NSMutableDictionary *_notificationSectionByBundleID;
    BBSettingsGateway *_notificationSettingsGateway;
    NSObject<OS_dispatch_queue> *_notificationSettingsGatewayQueue;
}

@property (nonatomic, readonly) NSMutableDictionary *notificationSectionByBundleID;
@property (nonatomic, readonly) BBSettingsGateway *notificationSettingsGateway;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *notificationSettingsGatewayQueue;

- (id)init;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setCoordinator:(id)arg1;
- (id)_usageDetailsCoordinator:(id)arg1;
- (void)_specifierIdentifierDidChange:(id)arg1;
- (void)_selectedUsageReportDidChangeFrom:(id)arg1 to:(id)arg2;
- (id)newSpecifierWithUsageItem:(id)arg1;
- (void)updateSpecifier:(id)arg1 usageItem:(id)arg2;
- (id)getNotificationsInfo:(id)arg1;

@end
