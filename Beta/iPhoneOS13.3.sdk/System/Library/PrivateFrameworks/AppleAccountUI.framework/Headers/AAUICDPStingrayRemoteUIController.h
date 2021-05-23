/*
 Image: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
 */

#import <Foundation/NSObject.h>

@class AAUIServerUIHookHandler, ACAccount;

@interface AAUICDPStingrayRemoteUIController : NSObject

{
    AAUIServerUIHookHandler *_serverHookHandler;
    ACAccount *_account;
}

- (id)initWithRemoteUIController:(id)arg1;
- (void)setPresentingController:(id)arg1;
- (void)attachPasscodeHandler:(CDUnknownBlockType)arg1;
- (id)initWithRemoteUIController:(id)arg1 appleAccount:(id)arg2;
- (void)processObjectModel:(id)arg1 isModal:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)attachAllHandlers;
- (void)attachRecoveryKeyHandler:(CDUnknownBlockType)arg1;
- (void)attachRepairHandler:(CDUnknownBlockType)arg1;
- (void)attachAuthHandler:(CDUnknownBlockType)arg1;
- (void)processObjectModel:(id)arg1 isModal:(_Bool)arg2;

@end
