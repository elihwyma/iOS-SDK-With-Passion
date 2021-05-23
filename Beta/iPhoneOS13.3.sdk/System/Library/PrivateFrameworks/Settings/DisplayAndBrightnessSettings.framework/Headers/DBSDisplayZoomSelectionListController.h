/*
 Image: /System/Library/PrivateFrameworks/Settings/DisplayAndBrightnessSettings.framework/DisplayAndBrightnessSettings
 */

#import <Preferences/PSListController.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface DBSDisplayZoomSelectionListController : PSListController

{
    unsigned long long _selectedDisplayZoomOption;
}

@property (nonatomic) unsigned long long selectedDisplayZoomOption;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)viewDidLoad;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)specifiers;
- (unsigned long long)displayZoomTableViewCellCurrentlySelectedDisplayZoomOption:(id)arg1;
- (void)displayZoomTableViewCell:(id)arg1 userDidTapOnDisplayZoomOption:(unsigned long long)arg2;
- (void)userDidTapSet:(id)arg1;
- (void)userDidTapCancel:(id)arg1;
- (void)_updateNavigationButtonStateWithNewOption:(unsigned long long)arg1;
- (void)_userDidConfirmDisplayZoomModeWithSpecifier:(id)arg1;

@end
