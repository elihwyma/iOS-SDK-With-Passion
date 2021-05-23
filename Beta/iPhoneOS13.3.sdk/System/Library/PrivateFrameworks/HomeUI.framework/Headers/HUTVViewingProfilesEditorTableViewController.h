/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/HUItemTableViewController.h>

@class HUTVViewingProfilesDevicesModuleController, NSString;

@interface HUTVViewingProfilesEditorTableViewController : HUItemTableViewController

{
    _Bool _hideHeadersAndFooters;
    HUTVViewingProfilesDevicesModuleController *_tvpDevicesModuleController;
}

@property (nonatomic, readonly) HUTVViewingProfilesDevicesModuleController *tvpDevicesModuleController;
@property (nonatomic) _Bool hideHeadersAndFooters;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)moduleController:(id)arg1 presentViewControllerForRequest:(id)arg2;
- (id)moduleController:(id)arg1 dismissViewControllerForRequest:(id)arg2;
- (_Bool)shouldHideHeaderAboveSection:(long long)arg1;
- (_Bool)shouldHideFooterBelowSection:(long long)arg1;
- (id)moduleController:(id)arg1 textFieldForVisibleItem:(id)arg2;
- (id)initWithUserItem:(id)arg1;
- (_Bool)automaticallyUpdatesViewControllerTitle;
- (id)itemModuleControllers;

@end
