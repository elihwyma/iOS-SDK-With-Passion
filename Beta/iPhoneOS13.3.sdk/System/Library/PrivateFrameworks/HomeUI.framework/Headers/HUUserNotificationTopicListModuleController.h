/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/HUItemTableModuleController.h>

@interface HUUserNotificationTopicListModuleController : HUItemTableModuleController

- (_Bool)canSelectItem:(id)arg1;
- (unsigned long long)didSelectItem:(id)arg1;
- (Class)cellClassForItem:(id)arg1;
- (void)setupCell:(id)arg1 forItem:(id)arg2;
- (id)showNotificationSettingsForHomeKitObject:(id)arg1 animated:(_Bool)arg2;
- (id)_presentServiceListForTopic:(id)arg1 animated:(_Bool)arg2;

@end
