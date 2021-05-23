/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <Foundation/NSObject.h>

@class ACAccount, AMSBuyParams, AMSProcessInfo, AMSPurchase, NSDictionary, NSMutableDictionary, NSString;

@protocol AMSPurchaseResponseProtocol;

@interface AMSPurchaseContext : NSObject

{
    _Bool _addKBSync;
    _Bool _hasRetriedOriginalOwnerAccount;
    _Bool _serverBatchCanceled;
    AMSBuyParams *_buyParams;
    NSString *_logUUID;
    ACAccount *_account;
    NSMutableDictionary *_additionalHeaders;
    AMSProcessInfo *_clientInfo;
    id <AMSPurchaseResponseProtocol> _delegate;
    NSDictionary *_dialog;
    NSString *_dialogId;
    AMSPurchase *_purchase;
    long long _retryCount;
}

@property (retain, nonatomic) ACAccount *account;
@property (retain, nonatomic) NSMutableDictionary *additionalHeaders;
@property (nonatomic) _Bool addKBSync;
@property (nonatomic, readonly) AMSProcessInfo *clientInfo;
@property (retain, nonatomic) id <AMSPurchaseResponseProtocol> delegate;
@property (retain, nonatomic) NSDictionary *dialog;
@property (retain, nonatomic) NSString *dialogId;
@property (nonatomic) _Bool hasRetriedOriginalOwnerAccount;
@property (nonatomic, readonly) AMSPurchase *purchase;
@property (nonatomic) long long retryCount;
@property (nonatomic) _Bool serverBatchCanceled;
@property (retain, nonatomic) AMSBuyParams *buyParams;
@property (nonatomic, readonly) NSString *logUUID;

- (id)description;
- (id)_purchaseStringForType:(long long)arg1;
- (id)initWithPurchase:(id)arg1;

@end
