/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <Preferences/PSListController.h>

@class STStorageApp, STStoragePlugin, UIProgressHUD;

__attribute__((visibility("hidden")))
@interface CKCloudMessagesDetailController : PSListController

{
    STStorageApp *_messagesApp;
    STStoragePlugin *_plugin;
    UIProgressHUD *_cloudKitProgressView;
}

@property (retain, nonatomic) UIProgressHUD *cloudKitProgressView;

+ (id)specifier;

- (id)init;
- (void)viewWillAppear:(_Bool)arg1;
- (id)specifiers;
- (void)setEnabledDidReturned:(id)arg1;
- (void)tryToDisableAllDevicesDidReturn:(id)arg1;
- (id)dataSize:(id)arg1;
- (void)disableAndDelete:(id)arg1;
- (void)undoDelete:(id)arg1;
- (id)cloudDocsSpecifiers;
- (void)showSpinnerMessage:(id)arg1;
- (void)hideSpinner;
- (void)_displayiCloudErrorMessage;

@end
