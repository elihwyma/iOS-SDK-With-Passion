/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/HUItemTableModuleController.h>

@class HUTVViewingProfilesDevicesItemModule, NSString;

@interface HUTVViewingProfilesDevicesModuleController : HUItemTableModuleController

@property (nonatomic, readonly) HUTVViewingProfilesDevicesItemModule *module;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithModule:(id)arg1;
- (id)initWithModule:(id)arg1 host:(id)arg2;
- (Class)cellClassForItem:(id)arg1;
- (void)setupCell:(id)arg1 forItem:(id)arg2;
- (void)switchCell:(id)arg1 didTurnOn:(_Bool)arg2;
- (void)_toggleShowTVViewingProfileForItem:(id)arg1;

@end
