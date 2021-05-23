/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <HealthUI/_HKIngestSettingsViewController.h>

@class HKDevice;

@interface HKDeviceIngestSettingsViewController : _HKIngestSettingsViewController

{
    HKDevice *_device;
}

- (void)viewDidLoad;
- (id)initWithHealthStore:(id)arg1 displayTypeController:(id)arg2 device:(id)arg3 useInsetStyling:(_Bool)arg4;

@end
