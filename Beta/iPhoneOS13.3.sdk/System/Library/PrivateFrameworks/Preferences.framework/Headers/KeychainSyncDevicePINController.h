/*
 Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@class DevicePINController, NSString, UIKeyboard;

@interface KeychainSyncDevicePINController

{
    DevicePINController *_devicePINController;
    _Bool _showingBlockedMessage;
    NSString *_enterPasscodeTitle;
    NSString *_enterPasscodeReason;
    UIKeyboard *_disabledKeyboard;
}

@property (retain, nonatomic) UIKeyboard *disabledKeyboard;
@property (retain, nonatomic) NSString *enterPasscodeTitle;
@property (retain, nonatomic) NSString *enterPasscodeReason;

- (id)init;
- (void)dealloc;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (long long)tableView:(id)arg1 titleAlignmentForFooterInSection:(long long)arg2;
- (id)specifiers;
- (void)didFinishEnteringText:(id)arg1;
- (void)updateBlockedState:(id)arg1;

@end
