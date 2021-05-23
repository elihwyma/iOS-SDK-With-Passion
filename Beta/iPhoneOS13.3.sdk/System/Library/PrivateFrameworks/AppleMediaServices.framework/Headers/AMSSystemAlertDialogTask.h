/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <AppleMediaServices/AMSTask.h>

@class AMSDialogRequest;

@interface AMSSystemAlertDialogTask : AMSTask

{
    _Bool _dismissOnHomeButton;
    _Bool _dismissOnLock;
    _Bool _shouldDismissAfterUnlock;
    _Bool _shouldDisplayAsTopMost;
    _Bool _shouldPendInSetupIfNotAllowed;
    _Bool _displaysOnLockscreen;
    AMSDialogRequest *_request;
    long long _defaultButtonIndex;
    long long _unlockActionButtonIndex;
}

@property long long defaultButtonIndex;
@property _Bool dismissOnHomeButton;
@property _Bool dismissOnLock;
@property _Bool shouldDismissAfterUnlock;
@property _Bool shouldDisplayAsTopMost;
@property _Bool shouldPendInSetupIfNotAllowed;
@property _Bool displaysOnLockscreen;
@property long long unlockActionButtonIndex;
@property (nonatomic, readonly) AMSDialogRequest *request;

- (id)present;
- (id)initWithRequest:(id)arg1;
- (id)_reorderButtonActions;
- (struct __CFDictionary *)_createNoteDictionaryWithKeys:(struct ButtonKey *)arg1 buttonActions:(id)arg2 outOptions:(unsigned long long *)arg3;
- (struct __CFUserNotification *)_createNotificationFromDictionary:(struct __CFDictionary *)arg1 options:(unsigned long long)arg2;
- (id)_handleResponseForNote:(struct __CFUserNotification *)arg1 buttonActions:(id)arg2 keys:(struct ButtonKey *)arg3;
- (long long)_keyboardTypeFor:(long long)arg1;
- (long long)_defaultButtonIndexForActions:(id)arg1;

@end
