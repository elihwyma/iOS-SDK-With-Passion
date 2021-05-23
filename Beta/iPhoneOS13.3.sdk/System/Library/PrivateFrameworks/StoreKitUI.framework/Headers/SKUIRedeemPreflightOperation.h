/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSOperation.h>

@class NSObject, NSString, SKUIClientContext, SKUIRedeemConfiguration, SKUIRedeemViewControllerLegacy;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface SKUIRedeemPreflightOperation : NSOperation

{
    SKUIClientContext *_clientContext;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    _Bool _loadsRedeemCodeMetadata;
    CDUnknownBlockType _outputBlock;
    NSString *_redeemCode;
    SKUIRedeemConfiguration *_redeemConfiguration;
    _Bool _forcesAuthentication;
    SKUIRedeemViewControllerLegacy *_redeemViewController;
}

@property (nonatomic) _Bool forcesAuthentication;
@property _Bool loadsRedeemCodeMetadata;
@property (weak, nonatomic) SKUIRedeemViewControllerLegacy *redeemViewController;
@property (retain) SKUIRedeemConfiguration *redeemConfiguration;
@property (copy) CDUnknownBlockType outputBlock;

- (id)init;
- (void)main;
- (id)_authenticationContext;
- (id)initWithClientContext:(id)arg1 redeemCode:(id)arg2 forcesAuthentication:(_Bool)arg3;
- (id)_initSKUIRedeemPreflightOperation;
- (id)_redeemCodeMetadataWithClientContext:(id)arg1;

@end
