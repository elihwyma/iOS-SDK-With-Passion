/*
 Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class ISDialog, ISDialogButton, ISTouchIDDialog, ISURLBag, NSDictionary, NSObject, NSString, NSURL, SSBiometricAuthenticationContext;

@protocol OS_dispatch_queue;

@interface ISBiometricAuthorizationDialogOperation

{
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    ISURLBag *_urlBag;
    SSBiometricAuthenticationContext *_context;
    ISDialog *_dialog;
    NSURL *_redirectURL;
    ISDialogButton *_selectedButton;
    NSDictionary *_buyParams;
    NSDictionary *_metricsDictionary;
    NSString *_userAgent;
    ISDialog *_fallbackDialog;
    ISTouchIDDialog *_touchIDDialog;
}

@property (retain) ISDialog *fallbackDialog;
@property (retain) ISTouchIDDialog *touchIDDialog;
@property (retain) SSBiometricAuthenticationContext *biometricAuthenticationContext;
@property (copy) NSDictionary *buyParams;
@property (copy) NSDictionary *metricsDictionary;
@property (copy) NSString *userAgent;
@property (readonly) ISDialog *dialog;
@property (readonly) NSURL *redirectURL;
@property (readonly) ISDialogButton *selectedButton;

- (void)run;
- (void)_loadURLBag;
- (id)initWithTouchIDDialog:(id)arg1 fallbackDialog:(id)arg2;
- (_Bool)_runSignatureOperationReturningError:(id *)arg1;
- (_Bool)_shouldFallbackToAuthKitForError:(id)arg1;
- (_Bool)_runAuthkitOperationWithError:(id)arg1 returningError:(id *)arg2;
- (void)_performMetricsWithBiometricMatch:(unsigned long long)arg1 didBiometricsFail:(_Bool)arg2;
- (void)_findSelectedButtonForButtons:(id)arg1;

@end
