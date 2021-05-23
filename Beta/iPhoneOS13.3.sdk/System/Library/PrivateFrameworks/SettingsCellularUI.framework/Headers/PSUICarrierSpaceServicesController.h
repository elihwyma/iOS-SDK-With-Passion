/*
 Image: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
 */

#import <Preferences/PSListController.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface PSUICarrierSpaceServicesController : PSListController

{
    NSArray *_appsList;
}

@property (retain, nonatomic) NSArray *appsList;

- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)specifiers;
- (void)simStatusChanged;
- (void)carrierSpaceChanged;
- (id)primaryAppSpecifier;
- (_Bool)shouldShowMoreApps;
- (void)moreAppsTapped:(id)arg1;

@end
