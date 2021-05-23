/*
 Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class ISDialog, ISDialogButton, NSArray;

@protocol ISDialogOperationDelegate;

@interface ISDialogOperation

{
    ISDialog *_dialog;
    _Bool _performDefaultActions;
    ISDialogButton *_selectedButton;
    NSArray *_textFieldValues;
    id _userNotification;
}

@property (retain) id userNotification;
@property id <ISDialogOperationDelegate> delegate;
@property (retain) ISDialog *dialog;
@property _Bool performDefaultActions;
@property (retain) ISDialogButton *selectedButton;
@property (readonly) NSArray *textFieldValues;

+ (id)operationWithDialog:(id)arg1;
+ (id)operationWithError:(id)arg1;

- (id)init;
- (void)dealloc;
- (void)run;
- (void)cancel;
- (void)_run;
- (void)handleButtonSelected:(long long)arg1 withResponseDictionary:(id)arg2;
- (void)_showUserNotification:(id)arg1;
- (void)_waitForUserNotificationResponse:(struct __CFUserNotification *)arg1;
- (void)_handleResponseForNotification:(struct __CFUserNotification *)arg1 responseFlags:(unsigned long long)arg2;

@end
