/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Home/HFItemModule.h>

@class HFStaticItem, HFStaticItemProvider, HUCameraCloudStorageSettingsModule, HUCameraSmartDetectionSettingsModule, NSSet, NSString, UIViewController;

@interface HUCameraRecordingOptionsModule : HFItemModule

{
    NSSet *_itemProviders;
    HUCameraSmartDetectionSettingsModule *_smartDetectionModule;
    HUCameraCloudStorageSettingsModule *_cloudStorageModule;
    HFStaticItem *_recordAudioItem;
    NSSet *_cameraProfiles;
    HFStaticItemProvider *_recordAudioItemProvider;
}

@property (nonatomic, readonly) NSSet *cameraProfiles;
@property (retain, nonatomic) NSSet *itemProviders;
@property (retain, nonatomic) HFStaticItemProvider *recordAudioItemProvider;
@property (retain, nonatomic) HFStaticItem *recordAudioItem;
@property (nonatomic, readonly) HUCameraSmartDetectionSettingsModule *smartDetectionModule;
@property (nonatomic, readonly) HUCameraCloudStorageSettingsModule *cloudStorageModule;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) unsigned long long displayStyle;
@property (retain, nonatomic) UIViewController *presentingViewController;

- (id)initWithItemUpdater:(id)arg1;
- (id)buildSectionsWithDisplayedItems:(id)arg1;
- (id)didSelectItem:(id)arg1;
- (void)_buildItemProviders;
- (_Bool)isItemHeader:(id)arg1;
- (id)initWithItemUpdater:(id)arg1 cameraProfiles:(id)arg2;
- (void)updateRecordAudioValue:(_Bool)arg1;

@end
