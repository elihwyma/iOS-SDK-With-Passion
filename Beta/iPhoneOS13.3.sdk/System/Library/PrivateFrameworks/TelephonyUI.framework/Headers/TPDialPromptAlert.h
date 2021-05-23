/*
 Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

#import <TelephonyUI/TPAlert.h>

@class BSProcessHandle, NSSet, NSString, SBSRemoteAlertHandle;

@interface TPDialPromptAlert : TPAlert

{
    SBSRemoteAlertHandle *_remoteAlertHandle;
    CDUnknownBlockType _dialAction;
    NSString *_buttonTitle;
    NSSet *_handles;
    BSProcessHandle *_processHandle;
}

@property (retain, nonatomic) SBSRemoteAlertHandle *remoteAlertHandle;
@property (copy, nonatomic) CDUnknownBlockType dialAction;
@property (copy, nonatomic, readonly) NSString *buttonTitle;
@property (copy, nonatomic, readonly) NSSet *handles;
@property (nonatomic, readonly) BSProcessHandle *processHandle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)title;
- (void)show;
- (void)remoteAlertHandleDidActivate:(id)arg1;
- (void)remoteAlertHandleDidDeactivate:(id)arg1;
- (void)remoteAlertHandle:(id)arg1 didInvalidateWithError:(id)arg2;
- (id)defaultButtonTitle;
- (id)otherButtonTitle;
- (id)initWithDialRequest:(id)arg1 dialAction:(CDUnknownBlockType)arg2;
- (id)initWithButtonTitle:(id)arg1 handles:(id)arg2 dialAction:(CDUnknownBlockType)arg3;
- (id)phoneNumberHandle;
- (void)defaultResponse;
- (void)otherResponse;
- (id)initWithJoinRequest:(id)arg1 dialAction:(CDUnknownBlockType)arg2;

@end
