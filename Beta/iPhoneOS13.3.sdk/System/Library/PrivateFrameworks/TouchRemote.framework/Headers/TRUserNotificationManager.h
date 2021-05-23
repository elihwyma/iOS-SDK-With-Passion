/*
 Image: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
 */

#import <Foundation/NSObject.h>

@class _TRUserNotification;

@interface TRUserNotificationManager : NSObject

{
    _TRUserNotification *_activeUserNotification;
}

@property (retain, nonatomic) _TRUserNotification *activeUserNotification;

+ (id)sharedInstance;

- (void)dealloc;
- (void)cancel;
- (void)_showUserNotificationWithDictionary:(id)arg1 options:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)requestAuthenticationWithAccountID:(id)arg1 message:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)requestAppleIDAuthenticationWithAccountID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)presentErrorWithTitle:(id)arg1 message:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)requestPermissionToInitiateSetupWithCompletion:(CDUnknownBlockType)arg1;
- (void)presentAuthenticationFailureWithMessage:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)requestPermissionForDiagnosticSubmissionWithCompletion:(CDUnknownBlockType)arg1;
- (void)presentWiFiNetworkConnectionError:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)requestLegacyAuthenticationWithAccountID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)presentLegacyAuthenticationFailedDialogWithMessage:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
