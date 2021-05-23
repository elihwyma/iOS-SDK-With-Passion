/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

@class NSError, SKUIClientContext, SKUIRedeemConfiguration, SSAccount, SSVRedeemCodeMetadata;

__attribute__((visibility("hidden")))
@interface SKUIRedeemPreflightResult : NSObject

{
    SSAccount *_account;
    SKUIClientContext *_clientContext;
    SSVRedeemCodeMetadata *_codeMetadata;
    NSError *_error;
    SKUIRedeemConfiguration *_redeemConfiguration;
    long long _resultType;
}

@property (retain, nonatomic) SSAccount *account;
@property (retain, nonatomic) SKUIClientContext *clientContext;
@property (retain, nonatomic) SSVRedeemCodeMetadata *codeMetadata;
@property (copy, nonatomic) NSError *error;
@property (retain, nonatomic) SKUIRedeemConfiguration *redeemConfiguration;
@property (nonatomic) long long resultType;

@end
