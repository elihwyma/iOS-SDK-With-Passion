/*
 Image: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
 */

#import <Preferences/PSListController.h>

@class AFSettingsConnection;

@interface AFUICloudStorageViewController : PSListController

{
    AFSettingsConnection *_settings;
}

- (void)viewDidLoad;
- (void)didReceiveMemoryWarning;
- (id)specifiers;
- (void)handleDisableAndDeleteButtonPress;
- (void)confirmDisableForMultiUserVoiceIdentification;
- (void)confirmDisable;
- (void)_disableAndDeleteCloudSync;

@end
