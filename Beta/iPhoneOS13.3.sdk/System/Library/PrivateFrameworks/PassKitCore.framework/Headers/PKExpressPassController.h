/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

@protocol PKPassLibraryDataProvider, PKPaymentDataProvider;

@interface PKExpressPassController : NSObject

{
    id <PKPaymentDataProvider> _paymentDataProvider;
    id <PKPassLibraryDataProvider> _passLibraryDataProvider;
    _Bool _isForWatch;
    _Bool _hasSupportsExpressForAutomaticSelectionTechnologyTypeCheck;
    id _presentingViewController;
    long long _apiVersion;
}

@property (weak, nonatomic) id presentingViewController;
@property (nonatomic) long long apiVersion;

- (id)initWithPaymentDataProvider:(id)arg1 passLibraryDataProvider:(id)arg2 isForWatch:(_Bool)arg3;
- (id)expressModeUpgradeRequestForPass:(id)arg1;
- (id)expressState;
- (_Bool)supportsLowPowerExpressMode;
- (id)expressModeSupportedForPass:(id)arg1;
- (void)enableExpressModeWithPassInformation:(id)arg1 credential:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)conflictingExpressPassesWithPassInformation:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)isExpressModeEnabledForPass:(id)arg1;
- (id)validExpressModeUpgradeRequestForPass:(id)arg1;
- (void)upgradeExpressModeForPass:(id)arg1 withCredential:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)disableExpressModeForPass:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (_Bool)deviceUsesAutomaticAuthorization;

@end
