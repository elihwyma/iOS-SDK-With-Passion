/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <Foundation/NSObject.h>

#import <AppleMediaServices/Swift-Protocol.h>

@class ACAccount, AMSProcessInfo, AMSURLRequestEncoder, NSString;

@protocol AMSBagProtocol, AMSMediaTokenServiceProtocol, AMSResponseDecoding;

@interface AMSMediaRequestEncoder : NSObject <Swift>

{
    _Bool _disableAccountMediaTypeComponent;
    id <AMSMediaTokenServiceProtocol> _tokenService;
    AMSURLRequestEncoder *_requestEncoder;
}

@property (nonatomic, readonly) AMSURLRequestEncoder *requestEncoder;
@property (nonatomic) _Bool disableAccountMediaTypeComponent;
@property (nonatomic) _Bool URLKnownToBeTrusted;
@property (retain, nonatomic) ACAccount *account;
@property (nonatomic, readonly) id <AMSBagProtocol> bag;
@property (retain, nonatomic) AMSProcessInfo *clientInfo;
@property (nonatomic) _Bool disableResponseDecoding;
@property (retain, nonatomic) NSString *logKey;
@property (retain, nonatomic) id <AMSResponseDecoding> responseDecoder;
@property (nonatomic, readonly) id <AMSMediaTokenServiceProtocol> tokenService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)bagSubProfile;
+ (id)bagSubProfileVersion;
+ (id)bagKeySet;

- (id)requestByEncodingRequest:(id)arg1 parameters:(id)arg2;
- (id)initWithTokenService:(id)arg1 bag:(id)arg2;
- (id)requestWithComponents:(id)arg1;

@end
