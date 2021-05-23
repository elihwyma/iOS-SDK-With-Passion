/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <Foundation/NSObject.h>

@class AMSMescalFairPlay, AMSURLSession, NSData;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AMSMescalSession : NSObject

{
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSData *_certificateData;
    AMSURLSession *_urlSession;
    AMSMescalFairPlay *_fairPlayContext;
    long long _mescalType;
    _Bool _primed;
}

@property (nonatomic) _Bool primed;

+ (id)sessionWithType:(long long)arg1;

- (id)initWithType:(long long)arg1;
- (_Bool)_verifyPrimeResponse:(id)arg1 error:(id *)arg2;
- (id)_establishContextWithBag:(id)arg1 error:(id *)arg2;
- (_Bool)_shouldRetryFairPlayForError:(id)arg1;
- (void)_resetSession;
- (id)_cachedCertPath;
- (_Bool)_cacheCertData:(id)arg1 expiration:(double)arg2;
- (_Bool)_verifyEntitlements;
- (id)_loadCertificateDataWithBag:(id)arg1 error:(id *)arg2;
- (id)_postExchangeData:(id)arg1 bag:(id)arg2 error:(id *)arg3;
- (id)_cachedCertData;
- (_Bool)primeTheConnectionWithBag:(id)arg1 error:(id *)arg2;
- (id)signData:(id)arg1 bag:(id)arg2 error:(id *)arg3;
- (_Bool)verifyData:(id)arg1 withSignature:(id)arg2 bag:(id)arg3 error:(id *)arg4;

@end
