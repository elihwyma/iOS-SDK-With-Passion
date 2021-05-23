/*
 Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

#import <Foundation/NSObject.h>

@interface TIAssistantSettings : NSObject

+ (void)launchKeyboardSettings;
+ (void)launchDictationSettings;
+ (void)dismissDialog;
+ (void)presentDialogForType:(long long)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
+ (void)dismissEnableDictationPrompt;
+ (void)promptToEnableDictationWithCompletionHandler:(CDUnknownBlockType)arg1;
+ (void)promptToEnableDataSharingWithCompletionHandler:(CDUnknownBlockType)arg1;
+ (void)dismissedDataSharingWithResponse:(long long)arg1;
+ (void)setTestBlock:(CDUnknownBlockType)arg1;
+ (void)connectForOperations:(CDUnknownBlockType)arg1 withErrorHandler:(CDUnknownBlockType)arg2;
+ (void)promptToRemindDataSharingWithCompletionHandler:(CDUnknownBlockType)arg1;
+ (void)promptReminderDataSharingWithCompletionHandler:(CDUnknownBlockType)arg1;
+ (void)dismissEnableDataSharingPrompt;

@end
