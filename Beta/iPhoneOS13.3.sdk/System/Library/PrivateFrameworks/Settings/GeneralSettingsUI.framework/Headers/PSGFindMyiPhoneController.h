/*
 Image: /System/Library/PrivateFrameworks/Settings/GeneralSettingsUI.framework/GeneralSettingsUI
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_semaphore;

@interface PSGFindMyiPhoneController : NSObject

{
    NSObject<OS_dispatch_semaphore> *_stateChangeSem;
}

+ (id)shared;

- (id)init;
- (void)dealloc;
- (_Bool)isFindMyiPhoneEnabled;
- (id)preferredFindMyiPhoneAccount;
- (void)disablePhoneLocatorWithMessageString:(id)arg1 buttonTitle:(id)arg2 presentingViewController:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)locatorStateDidChange:(id)arg1;
- (_Bool)isFindMyiPhoneProvisioned;
- (void)enablePhoneLocatorWithCompletion:(CDUnknownBlockType)arg1;

@end
