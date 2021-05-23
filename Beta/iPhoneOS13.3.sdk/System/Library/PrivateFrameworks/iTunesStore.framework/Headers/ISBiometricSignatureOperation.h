/*
 Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class ISBiometricStore, ISDialog, ISTouchIDDialog, SSBiometricAuthenticationContext;

@interface ISBiometricSignatureOperation

{
    CDUnknownBlockType _outputBlock;
    ISBiometricStore *_biometricStore;
    SSBiometricAuthenticationContext *_context;
    ISDialog *_fallbackDialog;
    ISTouchIDDialog *_touchIDDialog;
}

@property (retain, nonatomic) ISBiometricStore *biometricStore;
@property (retain) SSBiometricAuthenticationContext *context;
@property (retain, nonatomic) ISDialog *fallbackDialog;
@property (retain, nonatomic) ISTouchIDDialog *touchIDDialog;
@property (copy) CDUnknownBlockType outputBlock;

- (void)run;
- (_Bool)_promptUserToAuthenticateForIdentityMapChangeWithAccountIdentifier:(id)arg1 accountName:(id)arg2;
- (id)initWithBiometricAuthenticationContext:(id)arg1 touchIDDialog:(id)arg2 fallbackDialog:(id)arg3;

@end
