/*
 Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class ISBiometricStore, NSArray, NSNumber, NSString;

@interface ISBiometricUpdateTouchIDSettingsOperation

{
    _Bool _regeneratePublicKey;
    _Bool _shouldSuppressAuthPrompts;
    CDUnknownBlockType _resultBlock;
    long long _status;
    NSNumber *_accountIdentifier;
    NSString *_attestationStringPurchase;
    NSString *_attestationStringExtendedActions;
    ISBiometricStore *_biometricStore;
    NSArray *_certChainPrimary;
    NSArray *_certChainExtended;
}

@property (copy, nonatomic) NSNumber *accountIdentifier;
@property (copy, nonatomic) NSString *attestationStringPurchase;
@property (copy, nonatomic) NSString *attestationStringExtendedActions;
@property (retain, nonatomic) ISBiometricStore *biometricStore;
@property (copy, nonatomic) NSArray *certChainPrimary;
@property (copy, nonatomic) NSArray *certChainExtended;
@property _Bool regeneratePublicKey;
@property (copy) CDUnknownBlockType resultBlock;
@property _Bool shouldSuppressAuthPrompts;
@property (readonly) long long status;

- (void)run;
- (id)initWithAccountIdentifier:(id)arg1;
- (id)_newUpdateTouchIDSettingsOperation;

@end
