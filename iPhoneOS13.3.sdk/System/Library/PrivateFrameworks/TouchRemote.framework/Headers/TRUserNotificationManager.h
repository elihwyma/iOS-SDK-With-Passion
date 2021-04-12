//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class _TRUserNotification;

@interface TRUserNotificationManager : NSObject
{
    _TRUserNotification *_activeUserNotification;
}

+ (id)sharedInstance;
@property(retain, nonatomic) _TRUserNotification *activeUserNotification; // @synthesize activeUserNotification=_activeUserNotification;
// - (void).cxx_destruct;
- (void)presentLegacyAuthenticationFailedDialogWithMessage:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)requestLegacyAuthenticationWithAccountID:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)cancel;
- (void)presentWiFiNetworkConnectionError:(BOOL)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)presentErrorWithTitle:(id)arg1 message:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)requestPermissionForDiagnosticSubmissionWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)presentAuthenticationFailureWithMessage:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)requestAppleIDAuthenticationWithAccountID:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)requestAuthenticationWithAccountID:(id)arg1 message:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)requestPermissionToInitiateSetupWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)_showUserNotificationWithDictionary:(id)arg1 options:(NSUInteger)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)dealloc;

@end

