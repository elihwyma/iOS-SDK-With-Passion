/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Home/HFItemModule.h>

@class HFItemProvider, NSSet, NSString, UIViewController;

@interface HUCameraCloudStorageSettingsModule : HFItemModule

{
    NSSet *_itemProviders;
    NSSet *_cameraProfiles;
    HFItemProvider *_cloudStorageSectionSettingsItemProvider;
}

@property (nonatomic, readonly) NSSet *cameraProfiles;
@property (nonatomic, readonly) HFItemProvider *cloudStorageSectionSettingsItemProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) unsigned long long displayStyle;
@property (retain, nonatomic) UIViewController *presentingViewController;

- (id)itemProviders;
- (id)initWithItemUpdater:(id)arg1;
- (id)buildSectionsWithDisplayedItems:(id)arg1;
- (id)didSelectItem:(id)arg1;
- (_Bool)isItemHeader:(id)arg1;
- (id)initWithItemUpdater:(id)arg1 cameraProfiles:(id)arg2;
- (id)removeAllCameraRecordings;

@end
