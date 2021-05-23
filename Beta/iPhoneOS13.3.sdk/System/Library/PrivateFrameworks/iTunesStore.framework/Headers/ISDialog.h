/*
 Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSLock, NSMutableDictionary, NSString, SSAuthenticationContext, SSPaymentSheet;

@interface ISDialog : NSObject

{
    _Bool _allowDuplicates;
    SSAuthenticationContext *_authenticationContext;
    _Bool _authorizationIsForced;
    NSArray *_buttons;
    long long _defaultButtonIndex;
    NSString *_displayCountKey;
    _Bool _dismissOnHomeButton;
    _Bool _dismissOnLock;
    _Bool _expectsResponse;
    _Bool _groupsTextFields;
    long long _kind;
    NSLock *_lock;
    long long _maxDisplayCount;
    NSString *_message;
    _Bool _noDefaultButton;
    _Bool _oneButtonPerLine;
    _Bool _shouldDismissAfterUnlock;
    _Bool _shouldDisplayAsTopMost;
    _Bool _shouldPendInSetupIfNotAllowed;
    NSArray *_textFields;
    NSString *_title;
    long long _unlockActionButtonIndex;
    NSMutableDictionary *_userInfo;
    struct __CFDictionary *_userNotificationValues;
    _Bool _displaysOnLockscreen;
    SSPaymentSheet *_paymentSheet;
    NSString *_touchIDContinueToken;
}

@property (copy) NSString *touchIDContinueToken;
@property (retain) NSArray *buttons;
@property long long defaultButtonIndex;
@property _Bool oneButtonPerLine;
@property long long unlockActionButtonIndex;
@property _Bool groupsTextFields;
@property (retain) NSArray *textFields;
@property (retain) NSString *message;
@property (retain) NSString *title;
@property _Bool allowDuplicates;
@property _Bool authorizationIsForced;
@property _Bool dismissOnHomeButton;
@property _Bool dismissOnLock;
@property _Bool expectsResponse;
@property _Bool shouldDismissAfterUnlock;
@property _Bool shouldDisplayAsTopMost;
@property _Bool shouldPendInSetupIfNotAllowed;
@property _Bool displaysOnLockscreen;
@property _Bool noDefaultButton;
@property long long kind;
@property (copy) SSAuthenticationContext *authenticationContext;
@property (copy) NSString *displayCountKey;
@property long long maximumDisplayCount;
@property (readonly) SSPaymentSheet *paymentSheet;
@property (readonly, getter=isDisplayable) _Bool displayable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (long long)displayCountForKey:(id)arg1;
+ (struct __CFString *)buttonTitleKeyForCFUserNotificationButtonTag:(unsigned long long)arg1;
+ (unsigned long long)buttonTagForCFUserNotificationButtonTitleKey:(struct __CFString *)arg1;
+ (void)_initializeStaticButtonTitleKeyAndTagMapping;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)buyParams;
- (id)initWithError:(id)arg1;
- (id)initWithTitle:(id)arg1 message:(id)arg2;
- (id)initWithXPCEncoding:(id)arg1;
- (id)copyXPCEncoding;
- (id)initWithDialogDictionary:(id)arg1;
- (void)incrementDisplayCount;
- (id)orderedButtonTitleKeysForCFUserNotification;
- (id)copyUserNotification;
- (id)initWithAuthenticationChallege:(id)arg1;
- (id)initWithDialogDictionary:(id)arg1 authenticationContext:(id)arg2;
- (void)setValue:(void *)arg1 forCFUserNotificationKey:(struct __CFString *)arg2;
- (long long)_kindForString:(id)arg1;
- (id)initWithOfferDeviceError:(id)arg1;
- (void *)copyValueForCFUserNotificationKey:(struct __CFString *)arg1;
- (void)setButtonsWithTitles:(id)arg1;
- (void)setValue:(id)arg1 forUserInfoKey:(id)arg2;
- (id)valueForUserInfoKey:(id)arg1;

@end
