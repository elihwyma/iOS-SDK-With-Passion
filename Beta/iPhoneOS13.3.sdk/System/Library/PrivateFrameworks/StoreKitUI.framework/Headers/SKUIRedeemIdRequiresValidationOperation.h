/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <iTunesStore/ISOperation.h>

@class NSString, SKUIRedeemViewControllerLegacy;

__attribute__((visibility("hidden")))
@interface SKUIRedeemIdRequiresValidationOperation : ISOperation

{
    CDUnknownBlockType _resultBlock;
    SKUIRedeemViewControllerLegacy *_redeemViewController;
}

@property (copy) CDUnknownBlockType resultBlock;
@property (weak, nonatomic) SKUIRedeemViewControllerLegacy *redeemViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)main;
- (id)_authenticationContext;
- (void)operation:(id)arg1 selectedButton:(id)arg2;
- (_Bool)_performAuthentication;
- (id)_subOperationWithBagKey:(id)arg1;
- (void)_logResultsForSuccess:(_Bool)arg1 shouldVerify:(_Bool)arg2 failureReason:(id)arg3 error:(id)arg4;

@end
