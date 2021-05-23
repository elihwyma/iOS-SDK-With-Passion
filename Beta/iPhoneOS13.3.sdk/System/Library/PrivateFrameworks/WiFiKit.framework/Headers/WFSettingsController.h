/*
 Image: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
 */

#import <Foundation/NSObject.h>

@class NSOperationQueue, NSString, WFDetailsContext, WFIPMonitor, WFMutableNetworkProfile, WFNetworkScanRecord, WFNetworkSettingsConfig, WFNetworkSettingsViewController;

@interface WFSettingsController : NSObject

{
    _Bool _monitorIPChanges;
    _Bool _cloudSyncRunning;
    _Bool _currentNetwork;
    WFNetworkSettingsViewController *_settingsViewController;
    WFMutableNetworkProfile *_profile;
    WFNetworkSettingsConfig *_config;
    WFIPMonitor *_ipMonitor;
    NSOperationQueue *_queue;
    WFDetailsContext *_detailsContext;
    WFNetworkScanRecord *_network;
}

@property (retain, nonatomic) WFMutableNetworkProfile *profile;
@property (retain, nonatomic) WFNetworkSettingsConfig *config;
@property (retain, nonatomic) WFNetworkSettingsViewController *settingsViewController;
@property (nonatomic) _Bool monitorIPChanges;
@property (retain, nonatomic) WFIPMonitor *ipMonitor;
@property (retain, nonatomic) NSOperationQueue *queue;
@property (nonatomic) _Bool cloudSyncRunning;
@property (retain, nonatomic) WFDetailsContext *detailsContext;
@property (retain, nonatomic) WFNetworkScanRecord *network;
@property (nonatomic, getter=isCurrentNetwork) _Bool currentNetwork;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)_ipStateDidChange:(id)arg1;
- (id)initWithDetailsContext:(id)arg1;
- (id)_baseConfigForNetwork:(id)arg1 current:(_Bool)arg2;
- (void)_refreshSettingsConfig:(id)arg1;
- (void)_currentNetworkDidChange:(id)arg1;
- (void)_startMontoringIPChanges;
- (void)_stopMonitoringIPChanges;
- (id)_profileForNetwork:(id)arg1;
- (void)networkSettingsViewController:(id)arg1 saveConfig:(id)arg2 errorHandler:(CDUnknownBlockType)arg3;

@end
