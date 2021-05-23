/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/HUExpandableItemContainerModule.h>

@class HFItemProvider, HUCameraPresenceRecordingSettingsModule, HUCameraRecordingOptionsItem, HULocationDeviceManager, NSArray, NSSet, NSString, UIViewController;

@protocol HUCameraRecordingSettingsModuleDelegate;

@interface HUCameraRecordingSettingsModule : HUExpandableItemContainerModule

{
    NSSet *_itemProviders;
    unsigned long long _displayStyle;
    NSString *_longestCameraUsageOptionItemTitle;
    NSString *_longestCameraPresenceItemTitle;
    NSArray *_cameraPresenceItems;
    id <HUCameraRecordingSettingsModuleDelegate> _delegate;
    NSSet *_cameraProfiles;
    HUCameraRecordingOptionsItem *_recordingOptionsItem;
    HUCameraPresenceRecordingSettingsModule *_whenHomeSectionModule;
    HUCameraPresenceRecordingSettingsModule *_whenAwaySectionModule;
    HFItemProvider *_headerItemProvider;
    HULocationDeviceManager *_locationDeviceManager;
    NSString *_locationDeviceName;
}

@property (retain, nonatomic) HUCameraPresenceRecordingSettingsModule *whenHomeSectionModule;
@property (retain, nonatomic) HUCameraPresenceRecordingSettingsModule *whenAwaySectionModule;
@property (nonatomic, readonly) HFItemProvider *headerItemProvider;
@property (retain, nonatomic) NSSet *itemProviders;
@property (retain, nonatomic) HULocationDeviceManager *locationDeviceManager;
@property (retain, nonatomic) NSString *locationDeviceName;
@property (weak, nonatomic) id <HUCameraRecordingSettingsModuleDelegate> delegate;
@property (nonatomic, readonly) NSSet *cameraProfiles;
@property (nonatomic, readonly) unsigned long long awayAccessModeSetting;
@property (nonatomic, readonly) unsigned long long presentAccessModeSetting;
@property (nonatomic, readonly) HUCameraRecordingOptionsItem *recordingOptionsItem;
@property (nonatomic, readonly) NSArray *presenceModules;
@property (nonatomic, readonly) NSString *longestCameraUsageOptionItemTitle;
@property (nonatomic, readonly) NSString *longestCameraPresenceItemTitle;
@property (nonatomic, readonly) NSArray *cameraPresenceItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) unsigned long long displayStyle;
@property (retain, nonatomic) UIViewController *presentingViewController;

- (id)initWithItemUpdater:(id)arg1;
- (id)buildSectionsWithDisplayedItems:(id)arg1;
- (id)_attributedFooterTitle;
- (id)didSelectItem:(id)arg1;
- (void)_buildItemProviders;
- (id)expandableModules;
- (_Bool)isItemHeader:(id)arg1;
- (id)initWithItemUpdater:(id)arg1 cameraProfiles:(id)arg2 displayStyle:(unsigned long long)arg3;
- (id)_expandingSectionModuleForPresenceType:(unsigned long long)arg1;

@end
