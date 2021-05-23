/*
 Image: /System/Library/PrivateFrameworks/Settings/DisplayAndBrightnessSettings.framework/DisplayAndBrightnessSettings
 */

#import <Preferences/PSListController.h>

@class NSString, SBSHomeScreenService;

@interface DBSHomeScreenListController : PSListController

{
    SBSHomeScreenService *__homeScreenService;
}

@property (retain, nonatomic) SBSHomeScreenService *_homeScreenService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)specifiers;
- (void)_updateDeviceAppIconSizeWithNewOption:(unsigned long long)arg1;
- (void)deviceAppIconSizeTableViewCellUserDidTapOnMoreOption:(id)arg1;
- (void)deviceAppIconSizeTableViewCellUserDidTapOnBiggerOption:(id)arg1;
- (id)getTodayViewOnHomeScreenEnabledForSpecifier:(id)arg1;
- (void)setTodayViewOnHomeScreenEnabled:(id)arg1 forSpecifier:(id)arg2;

@end
