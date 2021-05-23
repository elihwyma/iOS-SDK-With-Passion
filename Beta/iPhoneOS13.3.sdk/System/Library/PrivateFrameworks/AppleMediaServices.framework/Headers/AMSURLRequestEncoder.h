/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <Foundation/NSObject.h>

#import <AppleMediaServices/Swift-Protocol.h>

@class ACAccount, AMSKeychainOptions, AMSProcessInfo, NSDictionary, NSString, NSURLSessionTask;

@protocol AMSBagProtocol, AMSResponseDecoding, AMSURLBagContract, OS_dispatch_queue;

@interface AMSURLRequestEncoder : NSObject <Swift>

{
    _Bool _compressRequestBody;
    _Bool _disableResponseDecoding;
    _Bool _includeClientVersions;
    _Bool _shouldSetCookiesFromResponse;
    _Bool _shouldSetStorefrontFromResponse;
    _Bool _urlKnownToBeTrusted;
    ACAccount *_account;
    NSDictionary *_additionalMetrics;
    long long _anisetteType;
    id <AMSBagProtocol> _bag;
    AMSProcessInfo *_clientInfo;
    long long _dialogOptions;
    AMSKeychainOptions *_keychainOptions;
    NSString *_logUUID;
    long long _mescalType;
    long long _requestEncoding;
    id <AMSResponseDecoding> _responseDecoder;
    id <AMSURLBagContract> _bagContract;
    NSObject<OS_dispatch_queue> *_internalQueue;
    long long _encodeCount;
    NSURLSessionTask *_parentTask;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *internalQueue;
@property (nonatomic) long long encodeCount;
@property (retain, nonatomic) NSURLSessionTask *parentTask;
@property (retain, nonatomic) ACAccount *account;
@property (retain, nonatomic) NSDictionary *additionalMetrics;
@property (nonatomic) long long anisetteType;
@property (retain, nonatomic) id <AMSBagProtocol> bag;
@property (retain, nonatomic) AMSProcessInfo *clientInfo;
@property (nonatomic) _Bool compressRequestBody;
@property (nonatomic) _Bool disableResponseDecoding;
@property (nonatomic) long long dialogOptions;
@property (nonatomic) _Bool includeClientVersions;
@property (retain, nonatomic) AMSKeychainOptions *keychainOptions;
@property (retain, nonatomic) NSString *logUUID;
@property (nonatomic) long long mescalType;
@property (nonatomic) long long requestEncoding;
@property (retain, nonatomic) id <AMSResponseDecoding> responseDecoder;
@property (nonatomic) _Bool shouldSetCookiesFromResponse;
@property (nonatomic) _Bool shouldSetStorefrontFromResponse;
@property (nonatomic) _Bool urlKnownToBeTrusted;
@property (retain, nonatomic) id <AMSURLBagContract> bagContract;
@property (nonatomic) long long dataEncoding;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)bagSubProfile;
+ (id)bagSubProfileVersion;
+ (id)bagKeySet;
+ (void)addRequiredBagKeysToAggregator:(id)arg1;

- (id)init;
- (id)initWithBag:(id)arg1;
- (id)initWithBagContract:(id)arg1;
- (id)_methodStringFromMethod:(long long)arg1;
- (id)requestByEncodingRequest:(id)arg1 parameters:(id)arg2;
- (id)requestWithMethod:(long long)arg1 bagURL:(id)arg2 parameters:(id)arg3 error:(id *)arg4;
- (id)requestByEncodingRequest:(id)arg1 parameters:(id)arg2 error:(id *)arg3;
- (id)requestWithMethod:(long long)arg1 URL:(id)arg2 parameters:(id)arg3 error:(id *)arg4;
- (id)requestWithMethod:(long long)arg1 URLString:(id)arg2 parameters:(id)arg3 error:(id *)arg4;
- (id)requestWithMethod:(long long)arg1 bagURL:(id)arg2 parameters:(id)arg3;
- (id)requestWithMethod:(long long)arg1 URL:(id)arg2 parameters:(id)arg3;
- (id)requestWithMethod:(long long)arg1 bagURL:(id)arg2 error:(id *)arg3;
- (id)requestWithMethod:(long long)arg1 URL:(id)arg2 error:(id *)arg3;
- (id)requestWithMethod:(long long)arg1 URLString:(id)arg2 error:(id *)arg3;

@end
