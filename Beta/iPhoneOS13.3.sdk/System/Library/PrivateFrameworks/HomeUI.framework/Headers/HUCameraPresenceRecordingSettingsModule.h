/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/HUExpandableItemModule.h>

@class HFItem, HFStaticItemProvider, HMHome, HUCameraUsageOptionItemProvider, NSArray, NSSet, NSString, UIViewController;

@interface HUCameraPresenceRecordingSettingsModule : HUExpandableItemModule

{
    _Bool _didCompleteCloudUpgradeOffer;
    NSSet *_itemProviders;
    HFItem *_showOptionsItem;
    NSString *_longestCameraUsageOptionItemTitle;
    NSSet *_cameraProfiles;
    unsigned long long _presenceEventType;
    UIViewController *_presentingViewController;
    HUCameraUsageOptionItemProvider *_recordingSettingItemProvider;
    HFStaticItemProvider *_itemProvider;
    UIViewController *_viewController;
    NSArray *_optionItems;
    unsigned long long _upgradeState;
    unsigned long long _offerState;
    unsigned long long _numCamerasSupportRecordingService;
    HMHome *_home;
}

@property (retain, nonatomic) HUCameraUsageOptionItemProvider *recordingSettingItemProvider;
@property (retain, nonatomic) HFStaticItemProvider *itemProvider;
@property (weak, nonatomic) UIViewController *viewController;
@property (retain, nonatomic) NSArray *optionItems;
@property (nonatomic) _Bool didCompleteCloudUpgradeOffer;
@property (nonatomic) unsigned long long upgradeState;
@property (nonatomic) unsigned long long offerState;
@property (nonatomic) unsigned long long numCamerasSupportRecordingService;
@property (retain, nonatomic) HMHome *home;
@property (nonatomic, readonly) NSSet *cameraProfiles;
@property (nonatomic, readonly) unsigned long long presenceEventType;
@property (nonatomic, readonly) unsigned long long accessModeSetting;
@property (nonatomic, readonly) NSString *longestCameraUsageOptionItemTitle;
@property (retain, nonatomic) UIViewController *presentingViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) unsigned long long displayStyle;

- (id)itemProviders;
- (id)_titleString;
- (id)initWithItemUpdater:(id)arg1;
- (id)buildSectionsWithDisplayedItems:(id)arg1;
- (id)didSelectItem:(id)arg1;
- (void)upgradeFlowManagerDidCancel:(id)arg1;
- (void)upgradeFlowManagerDidComplete:(id)arg1;
- (_Bool)isItemHeader:(id)arg1;
- (id)showOptionsItem;
- (void)_buildItemProvider;
- (id)initWithItemUpdater:(id)arg1 cameraProfiles:(id)arg2 presenceEventType:(unsigned long long)arg3;
- (unsigned long long)countCameraProfilesWithRecordingService;
- (void)presentInsufficientPrivilegesAlert;
- (void)presentGenericError;
- (void)_dispatchUpdateForCameraProfile:(id)arg1;
- (void)presentCloudUpgradeFlowWithCameraCount:(unsigned long long)arg1;
- (void)sendCAMetricInfo;
- (void)_clearItemsUpdating;
- (void)presentMissingSupportedHubAlert;
- (id)updateStreamingSetting:(unsigned long long)arg1 isRetry:(_Bool)arg2;

@end
