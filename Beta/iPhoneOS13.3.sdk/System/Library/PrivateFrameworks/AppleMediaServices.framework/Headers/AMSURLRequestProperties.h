/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <Foundation/NSObject.h>

@class ACAccount, AMSKeychainOptions, AMSProcessInfo, AMSPurchaseContext, NSDictionary, NSMutableDictionary, NSString;

@protocol AMSBagProtocol, AMSResponseDecoding;

__attribute__((visibility("hidden")))
@interface AMSURLRequestProperties : NSObject

{
    _Bool _disableLoadURLMetrics;
    _Bool _knownToBeTrusted;
    _Bool _disableResponseDecoding;
    _Bool _shouldSetCookiesFromResponse;
    _Bool _shouldSetStorefrontFromResponse;
    ACAccount *_account;
    NSDictionary *_additionalMetrics;
    long long _anisetteType;
    id <AMSBagProtocol> _bag;
    AMSProcessInfo *_clientInfo;
    long long _dialogOptions;
    AMSKeychainOptions *_keychainOptions;
    NSString *_logUUID;
    long long _maxRetryCount;
    long long _mescalType;
    AMSPurchaseContext *_purchaseContext;
    id <AMSResponseDecoding> _responseDecoder;
    long long _reversePushType;
    NSMutableDictionary *_userInfo;
}

@property (retain, nonatomic) ACAccount *account;
@property (retain, nonatomic) NSDictionary *additionalMetrics;
@property (nonatomic) long long anisetteType;
@property (retain, nonatomic) id <AMSBagProtocol> bag;
@property (retain, nonatomic) AMSProcessInfo *clientInfo;
@property (nonatomic) long long dialogOptions;
@property (nonatomic) _Bool disableLoadURLMetrics;
@property (retain, nonatomic) AMSKeychainOptions *keychainOptions;
@property (nonatomic) _Bool knownToBeTrusted;
@property (retain, nonatomic) NSString *logUUID;
@property (nonatomic) long long maxRetryCount;
@property (nonatomic) long long mescalType;
@property (retain, nonatomic) AMSPurchaseContext *purchaseContext;
@property (retain, nonatomic) id <AMSResponseDecoding> responseDecoder;
@property (nonatomic) _Bool disableResponseDecoding;
@property (nonatomic) long long reversePushType;
@property (nonatomic) _Bool shouldSetCookiesFromResponse;
@property (nonatomic) _Bool shouldSetStorefrontFromResponse;
@property (retain, nonatomic) NSMutableDictionary *userInfo;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;

@end
