/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <HealthUI/_HKIngestSettingsViewController.h>

@class HKSource;

@interface HKSourceIngestSettingsViewController : _HKIngestSettingsViewController

{
    HKSource *_source;
}

- (void)viewDidLoad;
- (id)initWithHealthStore:(id)arg1 displayTypeController:(id)arg2 source:(id)arg3 useInsetStyling:(_Bool)arg4;

@end
