/*
 Image: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
 */

#import <HealthUI/HKAuthorizationSettingsViewController.h>

@class WDProfile;

__attribute__((visibility("hidden")))
@interface WDAuthorizationSettingsViewController : HKAuthorizationSettingsViewController

{
    WDProfile *_profile;
}

@property (retain, nonatomic) WDProfile *profile;

- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)_applicationWillEnterForeground;
- (id)sectionsForAuthController:(id)arg1;
- (id)specialCellWithIdentifier:(id)arg1 textLabelText:(id)arg2;
- (id)initWithProfile:(id)arg1 style:(long long)arg2;

@end
