/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <Foundation/NSObject.h>

@class AMSBuyParams, NSDictionary, NSNumber, NSString;

@interface AMSPurchase : NSObject

{
    _Bool _userInitiated;
    NSString *_logUUID;
    NSNumber *_accountId;
    NSDictionary *_additionalHeaders;
    AMSBuyParams *_buyParams;
    NSString *_callerBundleId;
    NSString *_clientId;
    NSNumber *_ownerAccountId;
    long long _purchaseType;
    NSString *_storefront;
    NSNumber *_uniqueIdentifier;
}

@property (copy, nonatomic) NSNumber *accountId;
@property (copy, nonatomic) NSDictionary *additionalHeaders;
@property (nonatomic, getter=isUserInitiated) _Bool userInitiated;
@property (copy, nonatomic) NSString *logUUID;
@property (nonatomic, readonly) AMSBuyParams *buyParams;
@property (copy, nonatomic) NSString *callerBundleId;
@property (copy, nonatomic) NSString *clientId;
@property (copy, nonatomic) NSNumber *ownerAccountId;
@property (readonly) long long purchaseType;
@property (copy, nonatomic) NSString *storefront;
@property (nonatomic, readonly) NSNumber *uniqueIdentifier;

- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_generateIdentifier;
- (id)initWithPurchaseType:(long long)arg1 buyParams:(id)arg2;

@end
